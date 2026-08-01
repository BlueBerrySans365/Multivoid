// coop/dwindow_sync.h -- Ad_window_C (panoramic render-target window) client-side
// dirty() suppression.
//
// Ad_window_C is the multi-pane panoramic observation window (NOT AbaseWindow_C).
// It extends AActor directly and paints dirt via Canvas into a UTextureRenderTarget2D
// using mat_cleanBrush_glassDirt. The RT paint sync is explicitly DEFERRED in the
// protocol (protocol.h v41 Part C comment).
//
// BUG: the CLIENT's native dirty() timer fires independently and paints brush stamps
// with wrong alpha (opaque instead of semi-transparent), producing solid dirt patches
// that block the entire window view.
//
// PHASE 1 FIX: suppress the client's native dirty() by clearing the cv (canvas valid)
// flag every tick. This prevents opaque dirt from appearing -- the client sees a clean
// panoramic window instead. Full RT paint sync (broadcasting brush strokes from host to
// client) is a Phase 2 feature.
//
// HOST: no-op -- the host's native dirty() runs normally.
//
// Architecture: engine-wrapper layer (principle 7). No network logic. Talks to the
// engine ONLY through ue_wrap::reflection.

#pragma once

#include <cstdint>

namespace coop::net {
class Session;
}  // namespace coop::net

namespace coop::dwindow_sync {

// Resolve the d_window_C UClass. Idempotent; retried every tick until the BP
// class is loaded. Stores the session pointer. Game thread.
void Install(coop::net::Session* session);

// Per-tick: scan for d_window_C actors and suppress client dirty() by clearing cv.
// No-op on host. Call every net-pump tick on the game thread.
void Tick();

// Session teardown: no state to clear (module is stateless).
void OnDisconnect();

}  // namespace coop::dwindow_sync
