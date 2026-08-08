// coop/interactables/drone_call_sync.cpp -- see coop/interactables/drone_call_sync.h.
//
// Client: POST observer on InpActEvt_use detects when lookAtActor is the droneConsole
// (AdroneConsole_C, covered by the door_box class check). Sends DroneCallRequest to host.
// The native player_use runs harmlessly -- the client's drone tick is suppressed, so
// triggerFly locally is a no-op.
//
// Host: receives DroneCallRequest, resolves the drone singleton + the console actor,
// calls triggerFly(console) via UFunction dispatch.

#include "coop/interactables/drone_call_sync.h"

#include "coop/net/session.h"
#include "ue_wrap/core/log.h"
#include "ue_wrap/core/reflection.h"
#include "ue_wrap/core/call.h"
#include "ue_wrap/core/game_thread.h"
#include "ue_wrap/devices/drone.h"
#include "ue_wrap/actors/prop.h"

#include <atomic>
#include <cstdint>

namespace coop::drone_call_sync {
namespace {

namespace R  = ue_wrap::reflection;
namespace GT = ue_wrap::game_thread;

std::atomic<coop::net::Session*> g_session{nullptr};
bool g_installed = false;

// Server-side cooldown: a client can request a drone call at most once per
// kDroneCallCooldownMs. Host is untrusted at the receive boundary, so the
// throttle lives here (host-side) regardless of any client-enforced pacing.
// 10 s is conservative -- the drone's own flight cycle is several seconds,
// and this is a singleton delivery drone (one call at a time is the sane
// upper bound). Prevents a spamming client from retriggering the drone on
// every tick.
constexpr uint64_t kDroneCallCooldownMs = 10000;
uint64_t g_lastCallTimeMs = 0;

// Resolved once (lazily, retried until classes load).
void* g_droneCls    = nullptr;  // Adrone_C
void* g_consoleCls  = nullptr;  // AdroneConsole_C
void* g_triggerFn   = nullptr;  // Adrone_C::triggerFly(UFunction*)
int32_t g_offLookAt = -1;       // MainPlayer_C::lookAtActor offset
bool g_resolved = false;

// Read lookAtActor from the main player instance.
void* ReadLookAtActor(void* player) {
    if (!player || g_offLookAt < 0) return nullptr;
    return *reinterpret_cast<void**>(reinterpret_cast<uint8_t*>(player) + g_offLookAt);
}

// Check if an actor is the droneConsole by class.
bool IsDroneConsole(void* actor) {
    if (!actor || !g_consoleCls) return false;
    void* cls = R::ClassOf(actor);
    if (!cls) return false;
    void* bases[1] = { g_consoleCls };
    return R::IsDescendantOfAny(cls, bases, 1);
}

// POST observer on InpActEvt_use. Fires AFTER the native body completes.
// Checks if the player was looking at the droneConsole and sends a request to the host.
void OnUsePost(void* self, void* /*function*/, void* /*params*/) {
    if (!self) return;
    auto* s = g_session.load(std::memory_order_acquire);
    if (!s || !s->connected()) return;

    void* aimed = ReadLookAtActor(self);
    if (!aimed || !IsDroneConsole(aimed)) return;

    // Client only: the host's own player_use runs natively (triggerFly on the
    // authoritative drone). The client's triggerFly is a no-op (drone tick suppressed).
    if (s->role() == coop::net::Role::Host) return;

    // Send DroneCallRequest to the host. No payload needed (singleton identity).
    s->SendReliable(coop::net::ReliableKind::DroneCallRequest, nullptr, 0);
    UE_LOGI("drone_call_sync: client sent DroneCallRequest to host");
}

bool EnsureResolved() {
    if (g_resolved) return true;

    g_droneCls = R::FindClass(L"drone_C");
    g_consoleCls = R::FindClass(L"droneConsole_C");

    if (g_droneCls) {
        g_triggerFn = R::FindFunction(g_droneCls, L"triggerFly");
        if (!g_triggerFn)
            UE_LOGW("drone_call_sync: triggerFly UFunction not found on drone_C");
    }

    // Resolve lookAtActor offset from mainPlayer_C.
    void* mpCls = R::FindClass(L"mainPlayer_C");
    if (mpCls) {
        g_offLookAt = R::FindPropertyOffset(mpCls, L"lookAtActor");
        if (g_offLookAt < 0)
            UE_LOGW("drone_call_sync: lookAtActor offset not found on mainPlayer_C");
    }

    if (g_droneCls && g_consoleCls && g_triggerFn && g_offLookAt >= 0) {
        g_resolved = true;
        UE_LOGI("drone_call_sync: resolved drone_C=%p console_C=%p triggerFly=%p "
                "lookAt=0x%04X", g_droneCls, g_consoleCls, g_triggerFn, g_offLookAt);
    }
    return g_resolved;
}

}  // namespace

void Install(coop::net::Session* session) {
    g_session.store(session, std::memory_order_release);
    if (g_installed) return;

    if (!EnsureResolved()) return;  // classes not loaded yet -- retry on next Tick

    void* mpCls = R::FindClass(L"mainPlayer_C");
    if (!mpCls) return;
    void* fn = R::FindFunction(mpCls, L"InpActEvt_use_K2Node_InputActionEvent_41");
    if (!fn) {
        UE_LOGW("drone_call_sync: InpActEvt_use UFunction not found");
        g_installed = true;
        return;
    }
    if (!GT::RegisterPostObserver(fn, &OnUsePost)) {
        UE_LOGW("drone_call_sync: InpActEvt_use POST observer register failed");
        return;
    }
    g_installed = true;
    UE_LOGI("drone_call_sync: InpActEvt_use POST observer installed");
}

void OnDroneCallRequest(uint8_t senderSlot) {
    // HOST only: a client pressed E on the droneConsole.
    auto* s = g_session.load(std::memory_order_acquire);
    if (!s || s->role() != coop::net::Role::Host) return;

    // Server-side cooldown: reject requests faster than kDroneCallCooldownMs.
    // A spamming client could otherwise retrigger the drone every tick.
    const uint64_t nowMs = static_cast<uint64_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count());
    if (nowMs - g_lastCallTimeMs < kDroneCallCooldownMs) {
        UE_LOGW("drone_call_sync: DroneCallRequest from slot %u throttled (cooldown %llu ms, "
                "elapsed %llu ms)", static_cast<unsigned>(senderSlot),
                static_cast<unsigned long long>(kDroneCallCooldownMs),
                static_cast<unsigned long long>(nowMs - g_lastCallTimeMs));
        return;
    }
    g_lastCallTimeMs = nowMs;

    if (!EnsureResolved()) {
        UE_LOGW("drone_call_sync: cannot resolve drone/console classes -- request dropped");
        return;
    }

    void* drone = ue_wrap::drone::Find();
    if (!drone) {
        UE_LOGW("drone_call_sync: drone singleton not found -- request dropped");
        return;
    }

    // Find the droneConsole actor. There is exactly one in the world.
    void* console = R::FindObjectByClass(L"droneConsole_C");
    if (!console) {
        UE_LOGW("drone_call_sync: droneConsole actor not found -- request dropped");
        return;
    }

    // Call triggerFly(console) on the drone.
    if (!g_triggerFn) {
        UE_LOGW("drone_call_sync: triggerFly not resolved -- request dropped");
        return;
    }

    ue_wrap::ParamFrame f(g_triggerFn);
    if (!f.valid()) {
        UE_LOGW("drone_call_sync: ParamFrame for triggerFly invalid -- request dropped");
        return;
    }
    f.Set<void*>(L"Console", console);
    if (!ue_wrap::Call(drone, f)) {
        UE_LOGW("drone_call_sync: triggerFly dispatch failed");
        return;
    }

    UE_LOGI("drone_call_sync: host executed triggerFly(console) from slot %u",
            static_cast<unsigned>(senderSlot));
}

void OnDisconnect() {
    // g_installed stays true -- the observer is registered for process lifetime.
    // Only the session pointer needs clearing. Reset the cooldown so the next
    // session starts unthrottled.
    g_session.store(nullptr, std::memory_order_release);
    g_lastCallTimeMs = 0;
}

}  // namespace coop::drone_call_sync
