// coop/creatures/npc_state_host.h -- HOST-side NpcState change detection + broadcast.
//
// Tracks per-NPC state that the unreliable EntityPose stream cannot carry
// (alive/dead transitions, AI targets, behavior phases, cosmetic variants,
// summon state). Diffs against a cached snapshot each tick; sends NpcState
// reliably on state-change edges. Also re-sends NpcState in the connect
// snapshot for late joiners.
//
// Phase 6D of the NPC coherence design (docs/NPC_COHERENCE_DESIGN.md).

#pragma once

#include <cstdint>

namespace coop::npc_state_host {

// HOST-only per-tick NpcState change detection. Reads live NPC actors via
// reflection, diffs against cached state, sends NpcState reliably on
// changes. Cheap no-op off the host / when there are no NPCs. Game thread.
void TickNpcState();

// HOST-only connect-snapshot: re-send NpcState for every live NPC to the
// freshly-connected client `peerSlot`. Called from QueueConnectBroadcastForSlot
// after the EntitySpawn re-sends. Game thread.
void QueueConnectSnapshotForSlot(int peerSlot);

// Clear all per-session state (cached snapshots). Called on disconnect.
void OnDisconnect();

}  // namespace coop::npc_state_host
