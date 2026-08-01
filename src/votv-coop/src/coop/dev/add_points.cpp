// coop/dev/add_points.cpp -- see coop/dev/add_points.h.

#include "coop/dev/add_points.h"

#include "coop/world/balance_sync.h"
#include "coop/dev/dev_gate.h"
#include "coop/net/session.h"
#include "ue_wrap/core/log.h"

namespace coop::dev::add_points {

void GivePoints(int amount) {
    // Strict client lockout: on a client this would send a BalanceDelta request
    // that credits the SHARED host-canonical balance -- a real economy cheat in
    // someone else's game (coop::dev_gate).
    if (!coop::dev_gate::Allowed()) {
        UE_LOGW("add_points: REFUSED -- dev features are disabled while connected as a client");
        return;
    }
    // A5 (2026-08-01): the BalanceDelta lane is retired (RULE 2). The dev button
    // now only works on the HOST (or solo). A client calling this is already gated
    // by dev_gate, but double-check: if we're connected as a client, refuse.
    auto* s = coop::net::Session::Get();
    if (s && s->connected() && s->role() == coop::net::Role::Client) {
        UE_LOGW("add_points: REFUSED -- BalanceDelta retired (A5); dev button is host-only");
        return;
    }
    coop::balance_sync::CreditRouted(amount);
}

}  // namespace coop::dev::add_points
