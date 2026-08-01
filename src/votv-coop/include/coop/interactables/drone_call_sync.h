// coop/interactables/drone_call_sync.h -- drone console call (client->host request).
//
// When a client presses E on the droneConsole, the native player_use calls triggerFly
// locally -- but the client's drone tick is suppressed, so nothing happens. This module
// detects the console interaction via a POST observer on InpActEvt_use (checking
// lookAtActor class) and sends a DroneCallRequest to the host. The host resolves the
// drone singleton + the console actor and calls triggerFly(console).
//
// The client's native player_use runs harmlessly (drone tick suppressed). The door-sync
// POST observer also fires for the console's physical door (LockerDoorState), which is
// the correct behavior -- the box lid opens on both peers.
//
// Wire: ReliableKind::DroneCallRequest (122). Payload: none (singleton identity).
// Host->drone only; no relay needed.

#pragma once

#include "coop/net/protocol.h"

#include <cstdint>

namespace coop::net { class Session; }

namespace coop::drone_call_sync {

void Install(coop::net::Session* session);
void OnDroneCallRequest(uint8_t senderSlot);
void OnDisconnect();

}  // namespace coop::drone_call_sync
