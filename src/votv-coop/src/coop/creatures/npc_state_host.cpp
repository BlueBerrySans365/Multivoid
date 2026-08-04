// coop/creatures/npc_state_host.cpp -- HOST-side NpcState change detection + broadcast.
//
// See coop/creatures/npc_state_host.h.
//
// Architecture: a per-NPC cached snapshot (NpcCachedState) stores the last-sent values
// for each NpcState field. On each tick, the host reads the live NPC actor via reflection,
// compares against the cache, and sends NpcState reliably on any diff. The cache is
// keyed by ElementId (same id space as EntitySpawn/EntityDestroy).

#include "coop/creatures/npc_state_host.h"

#include "coop/element/mirror_manager.h"
#include "coop/element/mirror_managers.h"
#include "coop/element/npc.h"
#include "coop/net/protocol.h"
#include "coop/net/session.h"
#include "coop/creatures/npc_sync.h"  // GetSession()
#include "coop/player/players_registry.h"
#include "ue_wrap/core/log.h"
#include "ue_wrap/core/reflection.h"

#include <cstring>
#include <unordered_map>

namespace coop::npc_state_host {
namespace {

namespace R = ue_wrap::reflection;

using coop::element::NpcMirrors;

// Per-NPC cached state. Zero-initialized means "never sent" -- the first tick
// sends the initial state to all clients.
struct NpcCachedState {
    uint32_t aiTargetEid  = 0;
    float    aiPhaseFloat = 0.f;
    uint8_t  aliveState   = 0;   // 0=alive
    uint8_t  skinVariant  = 0;
    uint8_t  animVariant  = 0;
    uint8_t  summonState  = 0;
};

std::unordered_map<uint32_t, NpcCachedState> g_cache;

// Per-class offset discovery for NPC properties. Same reflection pattern as
// npc_pose_host.cpp's HealthOff cache.
struct NpcPropOff {
    int alive    = -1;  // "alive" bool (0=dead, 1=alive)
    int skin     = -1;  // "skin" int32 (skin variant index)
    int anim     = -1;  // "anim" int32 (animation variant index)
    int summon   = -1;  // "summon" int32 (summoning state)
};
std::unordered_map<void*, NpcPropOff> g_propOffCache;

const NpcPropOff& GetPropOffsets(void* actor) {
    void* cls = R::ClassOf(actor);
    if (!cls) {
        static const NpcPropOff s_empty{};
        return s_empty;
    }
    auto it = g_propOffCache.find(cls);
    if (it != g_propOffCache.end()) return it->second;
    NpcPropOff off;
    off.alive  = R::FindPropertyOffset(cls, L"alive");
    off.skin   = R::FindPropertyOffset(cls, L"skin");
    off.anim   = R::FindPropertyOffset(cls, L"anim");
    off.summon = R::FindPropertyOffset(cls, L"summon");
    return g_propOffCache.emplace(cls, off).first->second;
}

// Read the current alive/dead state from the engine.
// Returns: 0=alive, 1=died, 2=preDied, 3=risen.
// Most NPCs have an "alive" bool. If the field is missing, default to 0 (alive).
uint8_t ReadAliveState(void* actor, const NpcPropOff& off) {
    if (off.alive < 0) return 0;  // no alive field -> assume alive
    const bool alive = *reinterpret_cast<const uint8_t*>(
        reinterpret_cast<const uint8_t*>(actor) + off.alive) != 0;
    return alive ? 0 : 1;  // 0=alive, 1=died
}

// Read skin variant index from the engine.
uint8_t ReadSkinVariant(void* actor, const NpcPropOff& off) {
    if (off.skin < 0) return 0;
    const int32_t val = *reinterpret_cast<const int32_t*>(
        reinterpret_cast<const uint8_t*>(actor) + off.skin);
    return static_cast<uint8_t>(std::clamp(val, 0, 255));
}

// Read animation variant index from the engine.
uint8_t ReadAnimVariant(void* actor, const NpcPropOff& off) {
    if (off.anim < 0) return 0;
    const int32_t val = *reinterpret_cast<const int32_t*>(
        reinterpret_cast<const uint8_t*>(actor) + off.anim);
    return static_cast<uint8_t>(std::clamp(val, 0, 255));
}

// Read summon state from the engine.
uint8_t ReadSummonState(void* actor, const NpcPropOff& off) {
    if (off.summon < 0) return 0;
    const int32_t val = *reinterpret_cast<const int32_t*>(
        reinterpret_cast<const uint8_t*>(actor) + off.summon);
    return static_cast<uint8_t>(std::clamp(val, 0, 255));
}

// Send an NpcState payload to all connected peers.
void BroadcastNpcState(const coop::net::NpcStatePayload& p) {
    auto* s = coop::npc_sync::GetSession();
    if (!s || !s->connected()) return;
    s->SendReliable(coop::net::ReliableKind::NpcState, &p, sizeof(p));
}

// Send an NpcState payload to a single peer (for connect snapshot).
void SendNpcStateToSlot(int peerSlot, const coop::net::NpcStatePayload& p) {
    auto* s = coop::npc_sync::GetSession();
    if (!s || !s->connected()) return;
    s->SendReliableToSlot(peerSlot, coop::net::ReliableKind::NpcState, &p, sizeof(p));
}

}  // namespace

void TickNpcState() {
    auto* s = coop::npc_sync::GetSession();
    if (!s || s->role() != coop::net::Role::Host) return;
    if (!s->connected()) return;

    static std::vector<coop::element::Npc*> elems;
    NpcMirrors().Snapshot(elems);

    for (coop::element::Npc* el : elems) {
        if (!el) continue;
        void* actor = el->GetActor();
        if (!actor) continue;
        if (!R::IsLiveByIndex(actor, el->GetInternalIdx())) continue;

        const uint32_t eid = static_cast<uint32_t>(el->GetId());
        const NpcPropOff& off = GetPropOffsets(actor);

        // Read current state from the engine.
        const uint8_t curAlive   = ReadAliveState(actor, off);
        const uint8_t curSkin    = ReadSkinVariant(actor, off);
        const uint8_t curAnim    = ReadAnimVariant(actor, off);
        const uint8_t curSummon  = ReadSummonState(actor, off);

        // Get or create the cached state for this NPC.
        auto& cached = g_cache[eid];

        // Diff: send on any change (including first-tick when cache is zero-initialized
        // and the values differ from zero).
        const bool changed =
            cached.aliveState  != curAlive  ||
            cached.skinVariant != curSkin   ||
            cached.animVariant != curAnim   ||
            cached.summonState != curSummon;

        if (!changed) continue;

        // Build and send the NpcState payload.
        coop::net::NpcStatePayload p{};
        p.elementId     = eid;
        p.aliveState    = curAlive;
        p.aiTargetEid   = 0;   // TODO: read from engine when AI target interception is implemented
        p.aiPhaseFloat  = 0.f; // TODO: read from engine when behavior phase interception is implemented
        p.skinVariant   = curSkin;
        p.animVariant   = curAnim;
        p.summonState   = curSummon;

        // Update the cache.
        cached.aliveState  = curAlive;
        cached.aiTargetEid  = 0;
        cached.aiPhaseFloat = 0.f;
        cached.skinVariant = curSkin;
        cached.animVariant = curAnim;
        cached.summonState = curSummon;

        BroadcastNpcState(p);
    }
}

void QueueConnectSnapshotForSlot(int peerSlot) {
    auto* s = coop::npc_sync::GetSession();
    if (!s || s->role() != coop::net::Role::Host) return;
    if (peerSlot < 1 || peerSlot >= static_cast<int>(coop::players::kMaxPeers)) return;

    static std::vector<coop::element::Npc*> elems;
    NpcMirrors().Snapshot(elems);

    int sent = 0;
    for (coop::element::Npc* el : elems) {
        if (!el) continue;
        void* actor = el->GetActor();
        if (!actor) continue;
        if (!R::IsLiveByIndex(actor, el->GetInternalIdx())) continue;

        const uint32_t eid = static_cast<uint32_t>(el->GetId());
        const NpcPropOff& off = GetPropOffsets(actor);

        coop::net::NpcStatePayload p{};
        p.elementId    = eid;
        p.aliveState   = ReadAliveState(actor, off);
        p.aiTargetEid  = 0;   // TODO
        p.aiPhaseFloat = 0.f; // TODO
        p.skinVariant  = ReadSkinVariant(actor, off);
        p.animVariant  = ReadAnimVariant(actor, off);
        p.summonState  = ReadSummonState(actor, off);

        // Skip NPCs with all-zero state (nothing to report).
        if (p.aliveState == 0 && p.aiTargetEid == 0 && p.aiPhaseFloat == 0.f &&
            p.skinVariant == 0 && p.animVariant == 0 && p.summonState == 0)
            continue;

        SendNpcStateToSlot(peerSlot, p);
        ++sent;
    }
    if (sent > 0) {
        UE_LOGI("npc-state: connect-snapshot -- sent NpcState for %d NPC(s) to slot %d",
                sent, peerSlot);
    }
}

void OnDisconnect() {
    g_cache.clear();
    g_propOffCache.clear();
}

}  // namespace coop::npc_state_host
