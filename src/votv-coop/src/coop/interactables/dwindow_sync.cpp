// coop/dwindow_sync.cpp -- see coop/dwindow_sync.h. Ad_window_C (panoramic render-target
// window) client-side dirty() suppression.
//
// Ad_window_C is the multi-pane panoramic observation window. It extends AActor directly
// (NOT AbaseWindow_C) and paints dirt via Canvas into a UTextureRenderTarget2D using
// mat_cleanBrush_glassDirt. The RT paint sync is explicitly DEFERRED in the protocol.
//
// BUG: the CLIENT's native dirty() timer fires independently and paints brush stamps
// with wrong alpha (opaque instead of semi-transparent), producing solid dirt patches
// that block the entire window view.
//
// PHASE 1 FIX: suppress the client's native dirty() by clearing the cv (canvas valid)
// flag. cv@0x0288 gates the canvas draw operations -- when false, dirty() is a no-op
// (the Canvas is not valid). The host's native dirty() runs normally.
//
// Suppression is EDGE-TRIGGERED, not unconditional every tick: cv is cleared only
// when the buggy native dirty() timer has set it true (rising edge) or re-armed it
// faster than we clear (persistent true). When the canvas goes idle (cv=false), the
// per-window state resets so the next buggy cycle is caught fresh. This keeps the
// clear conditional on actual buggy-timer activity and lets any future RT paint sync
// that sets cv=true show through on an idle (cv=false) window.
//
// This module is stateless -- no network wire, no keyed payloads, no connect-snapshot.
// It detects d_window_C actors via GUObjectArray scan and conditionally clears cv on
// clients.

#include "coop/interactables/dwindow_sync.h"

#include "coop/net/session.h"

#include "ue_wrap/core/log.h"
#include "ue_wrap/core/reflection.h"
#include "ue_wrap/core/settled_object_scan.h"

#include <atomic>
#include <chrono>
#include <cstdint>
#include <vector>

namespace coop::dwindow_sync {
namespace {

namespace R = ue_wrap::reflection;

std::atomic<coop::net::Session*> g_session{nullptr};

// Resolved once at EnsureResolved, then read-only.
std::atomic<bool> g_resolved{false};
void*   g_dwinCls  = nullptr;  // d_window_C UClass
int32_t g_cvOff    = -1;       // Ad_window_C::cv@0x0288 (bool -- canvas valid flag)

// Cached d_window_C actor pointers (resolved once, re-validated by index).
// Avoids the expensive full GUObjectArray scan every tick for streaming in/out.
// `suppressed` is edge-triggered: true once we've cleared cv for this cycle.
// Reset to false when cv reads as false (the canvas is idle / a new cycle may
// begin). `consecutiveTrue` counts how many ticks cv has stayed true -- if it
// persists beyond one tick, the buggy timer is firing faster than we clear,
// so we force-clear again. This keeps suppression conditional on actual
// buggy-timer activity (cv rising / persisting) rather than firing
// unconditionally every tick -- future RT paint sync that sets cv=true shows
// through on a clean (cv=false) window until the next buggy cycle.
struct CachedDWindow {
    void* actor = nullptr;
    int32_t idx = -1;
    bool suppressed = false;
    int consecutiveTrue = 0;
};
std::vector<CachedDWindow> g_cachedWindows;
bool g_cachePrimed = false;
uint64_t g_lastCacheScanMs = 0;
constexpr uint64_t kCacheRescanIntervalMs = 5000;  // re-scan every 5s for streaming in/out

// Documented Alpha 0.9.0-n fallback (CXXHeaderDump/d_window.hpp).
constexpr int32_t kCvOffFallback = 0x0288;

bool EnsureResolved() {
    if (g_resolved.load(std::memory_order_acquire)) return true;

    void* cls = R::FindClass(L"d_window_C");
    if (!cls) return false;  // BP class not loaded yet -- caller retries

    int32_t cvOff = R::FindPropertyOffset(cls, L"cv");
    if (cvOff < 0) {
        UE_LOGW("dwindow: reflected cv offset not found -- using fallback 0x%04X", kCvOffFallback);
        cvOff = kCvOffFallback;
    }

    g_dwinCls = cls;
    g_cvOff   = cvOff;
    g_resolved.store(true, std::memory_order_release);
    UE_LOGI("dwindow: resolved d_window_C=%p cv@0x%04X", cls, cvOff);
    return true;
}

bool IsDWindow(void* obj) {
    if (!obj || !g_dwinCls) return false;
    void* cls = R::ClassOf(obj);
    if (!cls) return false;
    void* bases[1] = { g_dwinCls };
    return R::IsDescendantOfAny(cls, bases, 1);
}

// Suppress client dirty(): clear the cv flag so the Canvas draw operations are no-ops.
// Host is left alone (its native dirty() runs normally, painting into the RT).
// Uses cached actor pointers for steady-state (re-scans every 5s for streaming).
void SuppressClientDirty() {
    if (!g_resolved.load(std::memory_order_acquire)) return;
    if (g_cvOff < 0) return;

    auto* s = g_session.load(std::memory_order_acquire);
    if (!s || s->role() == coop::net::Role::Host) return;  // host-only: no-op

    const uint64_t nowMs = static_cast<uint64_t>(std::chrono::duration_cast<std::chrono::milliseconds>(
        std::chrono::steady_clock::now().time_since_epoch()).count());

    // Re-scan periodically (5s) to catch streaming in/out of d_window actors.
    if (!g_cachePrimed || nowMs - g_lastCacheScanMs >= kCacheRescanIntervalMs) {
        g_lastCacheScanMs = nowMs;
        g_cachedWindows.clear();
        static ue_wrap::scan::SettledObjectScan sScan{/*settleScans*/ 2, /*backstopFullEvery*/ 30};
        const auto r = sScan.Begin();
        size_t found = 0;
        for (int32_t i = r.begin; i < r.end; ++i) {
            void* obj = R::ObjectAt(i);
            if (!obj) continue;
            if (!IsDWindow(obj)) continue;
            if (R::NameStartsWith(R::NameOf(obj), L"Default__")) continue;  // skip CDO
            if (!R::IsLive(obj)) continue;
            ++found;
            g_cachedWindows.push_back({obj, R::InternalIndexOf(obj)});
        }
        sScan.End(found);
        g_cachePrimed = true;
    }

    // Suppress on cached actors (re-validate index before use). Edge-triggered:
    // only clear cv when the buggy native dirty() timer has set it true (canvas
    // is valid and about to draw the opaque-dirt bug). Once cleared, mark the
    // window suppressed so we don't re-clear every tick -- cv stays false until
    // the canvas goes idle. If cv stays true for more than one consecutive
    // tick, the buggy timer is re-arming faster than we clear, so force-clear
    // again. When cv reads false (canvas idle), reset both flags so the next
    // buggy cycle is caught fresh. This keeps suppression conditional on actual
    // buggy-timer activity rather than firing unconditionally every tick, and
    // lets any future RT paint sync that sets cv=true show through on an idle
    // (cv=false) window.
    int suppressed = 0;
    for (auto& w : g_cachedWindows) {
        if (!R::IsLiveByIndex(w.actor, w.idx)) continue;
        bool* cvPtr = reinterpret_cast<bool*>(reinterpret_cast<char*>(w.actor) + g_cvOff);
        if (*cvPtr) {
            ++w.consecutiveTrue;
            // Clear on the rising edge (first true tick) or if cv persists
            // (buggy timer re-arming faster than we clear).
            if (!w.suppressed || w.consecutiveTrue > 1) {
                *cvPtr = false;
                w.suppressed = true;
                ++suppressed;
            }
        } else {
            // Canvas went idle -- reset so the next buggy cycle is caught fresh.
            w.suppressed = false;
            w.consecutiveTrue = 0;
        }
    }
    if (suppressed > 0)
        UE_LOGI("dwindow: suppressed dirty() on %d/%zu panoramic window(s) (client-side, edge-triggered)",
                suppressed, g_cachedWindows.size());
}

}  // namespace

void Install(coop::net::Session* session) {
    g_session.store(session, std::memory_order_release);
    EnsureResolved();  // best-effort; retries on Tick until the BP class loads
}

void Tick() {
    if (!EnsureResolved()) return;
    SuppressClientDirty();
}

void OnDisconnect() {
    // Stateless module -- clear cached actors for the next session.
    g_cachedWindows.clear();
    g_cachePrimed = false;
    g_lastCacheScanMs = 0;
    // Suppression state lives in g_cachedWindows, so clearing it resets all
    // per-window flags (suppressed, consecutiveTrue) for the next session.
}

}  // namespace coop::dwindow_sync
