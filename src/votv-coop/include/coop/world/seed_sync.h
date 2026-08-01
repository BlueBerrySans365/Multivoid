// coop/world/seed_sync.h -- T2-7 seed replication for deterministic game systems.
//
// Three game systems use a seeded FRandomStream:
//   - garbagePileSpawner_C: one-shot garbage pile layout + types (singleton per level)
//   - radiotower.generateGizmos: decor placement (local FRandomStream in the function)
//   - xmaslight_C: Christmas light pattern (stored FRandomStream Seed @ 0x02A8)
//
// Same seed -> same rolls -> deterministic convergence without suppression (shape-3).
// Host reads seed values from live instances and sends to clients at connect + on change.
// Client applies the seed to its local FRandomStream instances.
//
// radiotower: the FRandomStream is a LOCAL variable inside generateGizmos, not a stored
// member. Seed replication for radiotower requires intercepting generateGizmos (deferred
// to a future increment). This module currently handles garbagePileSpawner and xmaslight.
//
// Wire: ReliableKind::SeedSync (121). Payload: [u8 type][u32 index][u32 seed].
//   type 0 = garbagePileSpawner (singleton, index=0)
//   type 1 = xmaslight (index = instance ordinal in GUObjectArray scan order)

#pragma once

#include "coop/net/protocol.h"

#include <cstdint>

namespace coop::net { class Session; }

namespace coop::seed_sync {

void Install(coop::net::Session* session);
void Tick();
void QueueConnectBroadcastForSlot(int peerSlot);
void OnSeedChunk(const uint8_t* payload, size_t len, uint8_t senderSlot);
void OnDisconnect();

}  // namespace coop::seed_sync
