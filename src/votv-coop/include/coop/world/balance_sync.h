// coop/balance_sync.h -- shared host-authoritative credit balance (saveSlot.Points).
//
// The HOST owns the canonical balance. It POLLS Points each game-thread tick (catching
// every writer -- shop orders, signal-disk sells, task rewards, the +1000 dev button)
// and broadcasts BalanceSync on CHANGE (+ to a joining client on its connect edge), so
// every peer MIRRORS the host's balance. The CLIENT writes the host's absolute value
// directly (no AddPoints side-effects). A client-side credit (the +1000 dev button; a
// future laptop-shop buy) can't write its own mirror -- the next BalanceSync overwrites
// it -- so it routes to the host as a BalanceDelta, which the host applies via AddPoints
// (its poll then re-broadcasts the new total). HOST-authoritative, MTA server-economy
// shape. Game thread only for the apply paths (SetSession/Tick/connect run on the net-
// pump game thread; the receivers GT::Post their UObject writes).

#pragma once

#include <cstdint>

namespace coop::net { class Session; }

namespace coop::balance_sync {

void SetSession(coop::net::Session* session);

// Per-tick (net_pump game thread): on the HOST, poll Points + broadcast BalanceSync on
// change; on a CLIENT, retry applying the latest pending host balance until the saveSlot
// resolves (a connect-edge sync can arrive before the gamemode loads). No-op when not
// connected.
void Tick();

// HOST connect-edge: send the current balance to the just-joined client `slot` so it
// converges immediately (the change-based poll alone wouldn't fire if Points is static).
void OnClientConnect(int slot);

// RECEIVER (client): apply the host's ABSOLUTE balance -- write saveSlot.Points. No-op
// on the host (authoritative). GT::Posts the write.
void ApplyFromHost(int32_t total);

// RETIRED (2026-08-01, A5): the BalanceDelta lane is retired (RULE 2). The sole caller
// was the dev +1000 button, now host-only. Kept as dead code for documentation; the
// event_feed.cpp case drops on receipt.
void OnDeltaRequest(int32_t amount);  // RETIRED — dead code

// Route a LOCAL credit (the +1000 dev button): host/solo applies via AddPoints. A5 (2026-08-01):
// the BalanceDelta lane is retired, so clients can no longer route credits. Safe from render thread.
void CreditRouted(int32_t amount);

// Reset the broadcast dedup on session teardown (so a reconnect re-broadcasts).
void OnDisconnect();

}  // namespace coop::balance_sync
