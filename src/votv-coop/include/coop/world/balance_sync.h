// coop/balance_sync.h -- shared host-authoritative credit balance (saveSlot.Points).
//
// The HOST owns the canonical balance. It POLLS Points each game-thread tick (catching
// every writer -- shop orders, signal-disk sells, task rewards, the +1000 dev button)
// and broadcasts BalanceSync on CHANGE (+ to a joining client on its connect edge), so
// every peer MIRRORS the host's balance. The CLIENT writes the host's absolute value
// directly (no AddPoints side-effects). HOST-authoritative, MTA server-economy shape.
// Game thread only for the apply paths (SetSession/Tick/connect run on the net-pump
// game thread; the receivers GT::Post their UObject writes).
//
// A5 (2026-08-01): the BalanceDelta lane (client->host credit request) was retired per
// RULE 2. Credits route only through the host's own AddPoints (dev button, future shop).
// Clients mirror the host's absolute balance via BalanceSync.

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

// Route a LOCAL credit (the +1000 dev button): host/solo applies via AddPoints. Client
// path removed (A5: BalanceDelta lane retired). Safe from render thread.
void CreditRouted(int32_t amount);

// Reset the broadcast dedup on session teardown (so a reconnect re-broadcasts).
void OnDisconnect();

}  // namespace coop::balance_sync
