// coop/world/seed_sync.cpp -- T2-7 seed replication for deterministic game systems.
//
// Host reads FRandomStream seed values from live garbagePileSpawner and xmaslight instances.
// Sends to clients at connect + on change. Client applies seeds to matching local instances.
//
// Wire: ReliableKind::SeedSync (121). Payload: [u8 type][u32 index][u32 seed].
//   type 0 = garbagePileSpawner (singleton, index=0)
//   type 1 = xmaslight (index = instance ordinal in GUObjectArray scan order)

#include "coop/world/seed_sync.h"

#include "coop/net/blob_chunks.h"
#include "coop/net/session.h"
#include "ue_wrap/actors/save_record.h"
#include "ue_wrap/core/log.h"
#include "ue_wrap/core/reflection.h"
#include "ue_wrap/core/settled_object_scan.h"

#include <algorithm>
#include <atomic>
#include <cstdint>
#include <cstring>
#include <map>
#include <vector>

namespace coop::seed_sync {
namespace {

namespace R = ue_wrap::reflection;

std::atomic<coop::net::Session*> g_session{nullptr};

// ---- resolved offsets (cached after first successful resolve) ----

// garbagePileSpawner_C -- singleton per level, seeded RandomStream determines garbage layout.
void* g_gpsCls = nullptr;
int32_t g_gpsSeedOff = -1;  // offset of the FRandomStream field (name resolved at runtime)
bool g_gpsResolved = false;
bool g_gpsFailed = false;           // class permanently failed to resolve (don't retry every frame)
uint64_t g_gpsNextRetryMs = 0;      // exponential backoff: next time to retry resolution
int g_gpsRetryCount = 0;            // how many retries so far (for backoff exponent)

// Axmaslight_C -- FRandomStream Seed @ 0x02A8 (from CXXHeaderDump/xmaslight.hpp).
void* g_xmasCls = nullptr;
int32_t g_xmasSeedOff = -1;
bool g_xmasResolved = false;
bool g_xmasFailed = false;
uint64_t g_xmasNextRetryMs = 0;
int g_xmasRetryCount = 0;

// Per-xmaslight tracking: the LAST seed we read from each instance (by GUObjectArray index).
// Used to detect changes and avoid redundant sends.
struct XmasSnapshot {
    int32_t initialSeed = 0;
    bool valid = false;
};
std::map<size_t, XmasSnapshot> g_xmasSnapshots;

// Cached actor pointers (resolved once via SettledObjectScan, reused for seed reads).
// Avoids the expensive full GUObjectArray walk every 5 seconds after initial resolution.
void* g_gpsActor = nullptr;       // cached garbagePileSpawner singleton actor
bool  g_gpsActorResolved = false;  // true once we've found and cached the singleton
std::vector<void*> g_xmasActors;  // cached xmaslight actor pointers
bool  g_xmasActorsResolved = false;

// ---- helpers ----

bool IsHost() {
    auto* s = g_session.load(std::memory_order_acquire);
    return s && s->role() == coop::net::Role::Host;
}

// Resolve a class by name, returning null if not yet loaded.
void* ResolveClass(const wchar_t* name) {
    void* cls = R::FindClass(name);
    if (!cls) UE_LOGW("seed_sync: class %ls not loaded yet", name);
    return cls;
}

// Resolve the FRandomStream member offset on a class. Tries common field names.
// FRandomStream is 8 bytes: InitialSeed (int32 @ +0) + Seed (int32 @ +4).
int32_t ResolveSeedOffset(void* cls, const wchar_t* className) {
    if (!cls) return -1;
    // Try common field names: "Seed", "RandomStream", "rng", "RNG".
    const wchar_t* names[] = {L"Seed", L"RandomStream", L"rng", L"RNG", L"randomStream"};
    for (auto* name : names) {
        int32_t off = R::FindPropertyOffset(cls, name);
        if (off >= 0) {
            UE_LOGI("seed_sync: resolved %ls.%ls seed offset = 0x%04X", className, name, off);
            return off;
        }
    }
    UE_LOGW("seed_sync: could not resolve FRandomStream offset on %ls", className);
    return -1;
}

// Read the InitialSeed from an FRandomStream at (actor + offset).
int32_t ReadSeed(void* actor, int32_t offset) {
    if (!actor || offset < 0) return 0;
    int32_t seed = 0;
    std::memcpy(&seed, reinterpret_cast<uint8_t*>(actor) + offset, sizeof(int32_t));
    return seed;
}

// Write a seed value into an FRandomStream's InitialSeed AND Seed fields.
// FRandomStream layout: InitialSeed @ +0, Seed @ +4 (both int32).
void WriteSeed(void* actor, int32_t offset, int32_t seed) {
    if (!actor || offset < 0) return;
    uint8_t* base = reinterpret_cast<uint8_t*>(actor) + offset;
    std::memcpy(base, &seed, sizeof(int32_t));      // InitialSeed
    std::memcpy(base + 4, &seed, sizeof(int32_t));  // Seed (internal state)
}

// ---- host: read seeds from live instances ----

struct SeedEntry {
    uint8_t type;     // 0 = garbagePileSpawner, 1 = xmaslight
    uint32_t index;   // 0 for singleton, instance ordinal for xmaslight
    int32_t seed;
};

void ReadGarbagePileSpawnerSeed(std::vector<SeedEntry>& out) {
    if (!g_gpsCls) return;
    // Use cached actor pointer if available (avoids full SettledObjectScan every 5 seconds).
    if (g_gpsActorResolved && g_gpsActor && R::IsLive(g_gpsActor)) {
        int32_t seed = ReadSeed(g_gpsActor, g_gpsSeedOff);
        out.push_back({0, 0, seed});
        return;
    }
    // First resolution: scan once and cache.
    static ue_wrap::scan::SettledObjectScan sScan{/*settleScans*/ 2, /*backstopFullEvery*/ 60};
    const auto r = sScan.Begin();
    size_t found = 0;
    for (int32_t i = r.begin; i < r.end; ++i) {
        void* obj = R::ObjectAt(i);
        if (!obj) continue;
        if (R::ClassOf(obj) != g_gpsCls) continue;
        if (R::NameStartsWith(R::NameOf(obj), L"Default__")) continue;
        if (!R::IsLive(obj)) continue;
        ++found;
        g_gpsActor = obj;
        g_gpsActorResolved = true;
        int32_t seed = ReadSeed(obj, g_gpsSeedOff);
        out.push_back({0, 0, seed});
        break;  // singleton -- one instance max
    }
    sScan.End(found);
}

void ReadXmaslightSeeds(std::vector<SeedEntry>& out) {
    if (!g_xmasCls) return;
    // Use cached actor pointers if available (avoids full SettledObjectScan every 5 seconds).
    if (g_xmasActorsResolved && !g_xmasActors.empty()) {
        uint32_t ordinal = 0;
        for (void* obj : g_xmasActors) {
            if (!obj || !R::IsLive(obj)) continue;
            int32_t seed = ReadSeed(obj, g_xmasSeedOff);
            out.push_back({1, ordinal, seed});
            ++ordinal;
        }
        return;
    }
    // First resolution: scan once and cache all instances.
    static ue_wrap::scan::SettledObjectScan sScan{/*settleScans*/ 2, /*backstopFullEvery*/ 60};
    const auto r = sScan.Begin();
    size_t found = 0;
    uint32_t ordinal = 0;
    for (int32_t i = r.begin; i < r.end; ++i) {
        void* obj = R::ObjectAt(i);
        if (!obj) continue;
        if (R::ClassOf(obj) != g_xmasCls) continue;
        if (R::NameStartsWith(R::NameOf(obj), L"Default__")) continue;
        if (!R::IsLive(obj)) continue;
        ++found;
        g_xmasActors.push_back(obj);
        int32_t seed = ReadSeed(obj, g_xmasSeedOff);
        out.push_back({1, ordinal, seed});
        ++ordinal;
    }
    g_xmasActorsResolved = true;
    sScan.End(found);
}

// Pack one seed entry into a blob.
void PackSeed(std::vector<uint8_t>& blob, const SeedEntry& e) {
    blob.push_back(e.type);
    // index as u32 LE
    blob.push_back(static_cast<uint8_t>(e.index & 0xFF));
    blob.push_back(static_cast<uint8_t>((e.index >> 8) & 0xFF));
    blob.push_back(static_cast<uint8_t>((e.index >> 16) & 0xFF));
    blob.push_back(static_cast<uint8_t>((e.index >> 24) & 0xFF));
    // seed as u32 LE
    uint32_t s = static_cast<uint32_t>(e.seed);
    blob.push_back(static_cast<uint8_t>(s & 0xFF));
    blob.push_back(static_cast<uint8_t>((s >> 8) & 0xFF));
    blob.push_back(static_cast<uint8_t>((s >> 16) & 0xFF));
    blob.push_back(static_cast<uint8_t>((s >> 24) & 0xFF));
}

// ---- client: apply seeds to local instances ----

void ApplyGarbagePileSpawnerSeed(int32_t seed) {
    if (!g_gpsCls || g_gpsSeedOff < 0) return;
    // Use cached actor pointer if available.
    if (g_gpsActorResolved && g_gpsActor && R::IsLive(g_gpsActor)) {
        WriteSeed(g_gpsActor, g_gpsSeedOff, seed);
        UE_LOGI("seed_sync: applied garbagePileSpawner seed=%d (cached actor)", seed);
        return;
    }
    // First resolution: scan once and cache.
    static ue_wrap::scan::SettledObjectScan sScan{/*settleScans*/ 2, /*backstopFullEvery*/ 60};
    const auto r = sScan.Begin();
    size_t found = 0;
    for (int32_t i = r.begin; i < r.end; ++i) {
        void* obj = R::ObjectAt(i);
        if (!obj) continue;
        if (R::ClassOf(obj) != g_gpsCls) continue;
        if (R::NameStartsWith(R::NameOf(obj), L"Default__")) continue;
        if (!R::IsLive(obj)) continue;
        ++found;
        g_gpsActor = obj;
        g_gpsActorResolved = true;
        WriteSeed(obj, g_gpsSeedOff, seed);
        UE_LOGI("seed_sync: applied garbagePileSpawner seed=%d", seed);
        break;  // singleton
    }
    sScan.End(found);
}

void ApplyXmaslightSeed(uint32_t ordinal, int32_t seed) {
    if (!g_xmasCls || g_xmasSeedOff < 0) return;
    // Use cached actor pointers if available.
    if (g_xmasActorsResolved && ordinal < g_xmasActors.size()) {
        void* obj = g_xmasActors[ordinal];
        if (obj && R::IsLive(obj)) {
            WriteSeed(obj, g_xmasSeedOff, seed);
            UE_LOGI("seed_sync: applied xmaslight[%u] seed=%d (cached actor)", ordinal, seed);
            return;
        }
    }
    // First resolution: scan once and cache.
    static ue_wrap::scan::SettledObjectScan sScan{/*settleScans*/ 2, /*backstopFullEvery*/ 60};
    const auto r = sScan.Begin();
    size_t found = 0;
    uint32_t idx = 0;
    for (int32_t i = r.begin; i < r.end; ++i) {
        void* obj = R::ObjectAt(i);
        if (!obj) continue;
        if (R::ClassOf(obj) != g_xmasCls) continue;
        if (R::NameStartsWith(R::NameOf(obj), L"Default__")) continue;
        if (!R::IsLive(obj)) continue;
        ++found;
        g_xmasActors.push_back(obj);
        if (idx == ordinal) {
            WriteSeed(obj, g_xmasSeedOff, seed);
            UE_LOGI("seed_sync: applied xmaslight[%u] seed=%d", ordinal, seed);
            g_xmasActorsResolved = true;
            break;
        }
        ++idx;
    }
    g_xmasActorsResolved = true;
    sScan.End(found);
}

}  // namespace

void Install(coop::net::Session* session) {
    g_session.store(session, std::memory_order_release);
}

void Tick() {
    // Resolve classes lazily with exponential backoff (BP classes may not be loaded at Install time).
    // Once a class fails to resolve, back off: 1s -> 2s -> 4s -> 8s -> ... -> 30s max.
    // This prevents the per-frame FindClass + warning spam that costs 40+ ms on the host.
    const uint64_t now = static_cast<uint64_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count());

    if (!g_gpsResolved && !g_gpsFailed) {
        if (now >= g_gpsNextRetryMs) {
            g_gpsCls = ResolveClass(L"garbagePileSpawner_C");
            if (g_gpsCls) {
                g_gpsSeedOff = ResolveSeedOffset(g_gpsCls, L"garbagePileSpawner_C");
                g_gpsResolved = true;
            } else {
                g_gpsFailed = true;
                // Exponential backoff: 1s, 2s, 4s, 8s, 16s, 30s cap
                const uint64_t delay = std::min<uint64_t>(1000ULL << g_gpsRetryCount, 30000ULL);
                g_gpsNextRetryMs = now + delay;
                ++g_gpsRetryCount;
            }
        }
    }
    if (!g_xmasResolved && !g_xmasFailed) {
        if (now >= g_xmasNextRetryMs) {
            g_xmasCls = ResolveClass(L"xmaslight_C");
            if (g_xmasCls) {
                g_xmasSeedOff = ResolveSeedOffset(g_xmasCls, L"xmaslight_C");
                g_xmasResolved = true;
            } else {
                g_xmasFailed = true;
                const uint64_t delay = std::min<uint64_t>(1000ULL << g_xmasRetryCount, 30000ULL);
                g_xmasNextRetryMs = now + delay;
                ++g_xmasRetryCount;
            }
        }
    }

    // HOST: periodically check for seed changes and broadcast if any.
    // These seeds are one-shot (set at level load, never change during play), so in
    // practice the broadcast fires once after the classes resolve and then never again.
    // The 5-second interval is a cheap poll that catches late-loading instances.
    if (!IsHost()) return;

    static uint64_t g_nextCheck = 0;
    const uint64_t now = static_cast<uint64_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count());
    if (now < g_nextCheck) return;
    g_nextCheck = now + 5000;

    auto* s = g_session.load(std::memory_order_acquire);
    if (!s || !s->connected()) return;

    std::vector<SeedEntry> seeds;
    ReadGarbagePileSpawnerSeed(seeds);
    ReadXmaslightSeeds(seeds);

    if (seeds.empty()) return;

    // Check for changes vs last sent state. Since these are one-shot, we only send once
    // per seed entry. g_xmasSnapshots tracks what we last sent; garbagePileSpawner is
    // singleton and tracked by a simple bool.
    static bool g_gpsSent = false;
    bool anyNew = false;

    for (const auto& e : seeds) {
        if (e.type == 0) {
            if (!g_gpsSent) { anyNew = true; break; }
        } else if (e.type == 1) {
            auto it = g_xmasSnapshots.find(e.index);
            if (it == g_xmasSnapshots.end() || !it->second.valid ||
                it->second.initialSeed != e.seed) {
                anyNew = true;
                break;
            }
        }
    }

    if (!anyNew) return;

    // Build the full seed blob and send to all connected peers.
    std::vector<uint8_t> blob;
    for (const auto& e : seeds) {
        PackSeed(blob, e);
    }

    // Record what we sent.
    for (const auto& e : seeds) {
        if (e.type == 0) {
            g_gpsSent = true;
        } else if (e.type == 1) {
            g_xmasSnapshots[e.index] = {e.seed, true};
        }
    }

    // Broadcast to all connected peers.
    for (int slot = 1; slot < coop::net::kMaxPeers; ++slot) {
        if (!s->IsSlotConnected(slot)) continue;
        coop::blob_chunks::SendBlobToSlot(s, slot, coop::net::ReliableKind::SeedSync,
                                          static_cast<uint32_t>(now), blob);
    }
    UE_LOGI("seed_sync: host broadcast %zu seed entries to clients", seeds.size());
}

void QueueConnectBroadcastForSlot(int peerSlot) {
    // HOST: send the current seed state to a newly connected peer.
    auto* s = g_session.load(std::memory_order_acquire);
    if (!s || !IsHost()) return;

    std::vector<SeedEntry> seeds;
    ReadGarbagePileSpawnerSeed(seeds);
    ReadXmaslightSeeds(seeds);

    if (seeds.empty()) return;

    std::vector<uint8_t> blob;
    for (const auto& e : seeds) {
        PackSeed(blob, e);
    }

    coop::blob_chunks::SendBlobToSlot(s, peerSlot, coop::net::ReliableKind::SeedSync,
                                      static_cast<uint32_t>(
                                          std::chrono::duration_cast<std::chrono::milliseconds>(
                                              std::chrono::steady_clock::now().time_since_epoch()
                                          ).count()),
                                      blob);
    UE_LOGI("seed_sync: connect seed -> slot %d: %zu entries", peerSlot, seeds.size());
}

void OnSeedChunk(const uint8_t* payload, size_t len, uint8_t senderSlot) {
    // CLIENT only: host never receives seed data.
    auto* s = g_session.load(std::memory_order_acquire);
    if (!s || s->role() == coop::net::Role::Host) return;

    // Parse seed entries: [u8 type][u32 index][u32 seed] per entry.
    size_t o = 0;
    while (o + 9 <= len) {
        uint8_t type = payload[o++];
        uint32_t index = static_cast<uint32_t>(payload[o]) |
                         (static_cast<uint32_t>(payload[o + 1]) << 8) |
                         (static_cast<uint32_t>(payload[o + 2]) << 16) |
                         (static_cast<uint32_t>(payload[o + 3]) << 24);
        o += 4;
        int32_t seed = static_cast<int32_t>(payload[o] |
                         (static_cast<uint32_t>(payload[o + 1]) << 8) |
                         (static_cast<uint32_t>(payload[o + 2]) << 16) |
                         (static_cast<uint32_t>(payload[o + 3]) << 24));
        o += 4;

        switch (type) {
            case 0:  // garbagePileSpawner
                ApplyGarbagePileSpawnerSeed(seed);
                break;
            case 1:  // xmaslight
                ApplyXmaslightSeed(index, seed);
                break;
            default:
                UE_LOGW("seed_sync: unknown seed type %u -- dropped", type);
                break;
        }
    }
}

void OnDisconnect() {
    g_gpsResolved = false;
    g_gpsCls = nullptr;
    g_gpsSeedOff = -1;
    g_gpsFailed = false;
    g_gpsNextRetryMs = 0;
    g_gpsRetryCount = 0;
    g_gpsActor = nullptr;
    g_gpsActorResolved = false;
    g_xmasResolved = false;
    g_xmasCls = nullptr;
    g_xmasSeedOff = -1;
    g_xmasFailed = false;
    g_xmasNextRetryMs = 0;
    g_xmasRetryCount = 0;
    g_xmasActors.clear();
    g_xmasActorsResolved = false;
    g_xmasSnapshots.clear();
}

}  // namespace coop::seed_sync
