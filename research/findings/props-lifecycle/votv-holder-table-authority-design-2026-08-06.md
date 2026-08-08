# holder_table — prop destroy/convert authority gate — design note — 2026-08-06

**Status:** BUILT 2026-08-01 (commit range `trash_grab_intent.cpp` grab-edge
extraction + `remote_prop_destroy.cpp`/`remote_prop_convert.cpp` A3 Half 2).
**Not hands-on.** Doc written 2026-08-06 to close the documentation gap —
this is production authority-path code with no prior design note or tracker
credit.

---

## 1. What it is

`coop::holder_table` is a **server-side authority predicate** that tracks which
peer slot currently holds which entity. It answers one question:

> "Does slot X currently hold entity Y?"

Only the current holder of an entity may destroy or convert it. This is the
concrete mitigation for **security finding A3** (`docs/security/TRACKER.md`),
which recorded that `PropDestroy` / `PropConvert` trusted *any* client's
assertion about any entity by wire-Key alone.

## 2. Data structures

Game-thread only. No mutex (single writer: the grab/throw/release edge runs on
the game thread).

```cpp
std::unordered_map<uint32_t, uint8_t> g_heldBy;                  // eid -> slot
std::unordered_map<uint8_t, std::unordered_set<uint32_t>> g_heldBySlot;  // slot -> eids
```

Two indices over the same data: `g_heldBy` for the authority lookup,
`g_heldBySlot` for O(1) cleanup when a peer disconnects.

## 3. API

| Function | Purpose |
|---|---|
| `IsHeldBy(eid, slot)` | Predicate: is `slot` the current holder of `eid`? Returns false if unheld or held by another slot. |
| `SetHeldBy(eid, slot)` | Record that `slot` now holds `eid`. Clears any prior holder. Called on grab/convert edges. |
| `ClearHeldBy(eid)` | Clear the hold for `eid`. Called on throw/release/destroy edges. |
| `ClearSlot(slot)` | Clear ALL holds for a departing slot (disconnect cleanup). |

## 4. Where it is populated / consulted

**Populated (game-thread edges):**
- `coop/props/trash_grab_intent.cpp:285` — `SetHeldBy` on grab intent
- `coop/props/trash_grab_intent.cpp:363` — `ClearHeldBy` on throw (A3 Half 2: throw releases the hold)
- `coop/props/trash_grab_intent.cpp:378` — `ClearSlot` on grabber disconnect
- `coop/props/trash_grab_intent.cpp:385` — `ClearHeldBy` on entity retire

**Consulted (authority gates):**
- `coop/props/remote_prop_destroy.cpp:170` — host rejects `PropDestroy` if `senderSlot` does not hold the entity
- `coop/props/remote_prop_convert.cpp:65` — host rejects `PropConvert` if `senderSlot` does not hold the entity
- `coop/props/remote_prop_destroy.cpp:130,210` — `ClearHeldBy` after successful destroy (proxy + mirrored paths)

## 5. What it covers

- Keyed/mirrored `Aprop_C` destroy requests from clients: **gated.**
- Keyed/mirrored `Aprop_C` convert requests from clients: **gated.**
- Disconnect cleanup (a leaver's held entities are released): **handled** via `ClearSlot`.

## 6. Known gaps (honest — NOT covered)

1. **Trash proxies are explicitly excluded.** `trash_proxy` entities use a
   separate lifecycle and are NOT in the holder table (the `IsProxy()` skip at
   `remote_prop_destroy.cpp:169` and `remote_prop_convert.cpp:64`). A forged
   proxy-destroy is not gated by holder_table. (This is by design — proxies
   have their own authority model — but it is a named residual.)

2. **Host-originated destroys pass through.** `senderSlot < 0` (host-op or
   legacy caller with no slot metadata) bypasses the check entirely. This is
   correct for host authority but means the gate only protects against *peer*
   misuse, not a hostile or buggy host.

3. **Relay-whitelist timing.** A3's aggravating clause noted that these kinds
   are client-relayable, "so a forged destroy is fanned out to other clients
   before the host validates it." holder_table gates the *host's* apply, but
   the finding's relay surface (host receives → relays to clients before host
   applies) is about **ordering**, not just the host check. Whether the relay
   fans a forged-but-rejected destroy to other clients before the host denies
   it is **unverified** — the holder_table fix addresses the host-apply path,
   not the relay fan-out path.

4. **Game-thread-only assumption.** The table has no mutex and is documented
   as game-thread-only. If any destroy/convert path can fire off the game
   thread (net-thread → deferred apply), a race is possible. The code asserts
   game thread at `remote_prop_destroy.cpp:120` for the drive-drain sub-step,
   but the holder_table mutation itself is not behind that assert.

5. **Scope = Aprop-derived props only.** NPC/creature destroys, world-actor
   teardown, and ambient spawner output do not flow through holder_table.
   Those have their own authority models (or none — see the security TRACKER's
   A4 "whole symmetric families" finding).

6. **No hostile-host scenario.** The model assumes the host is trusted
   (correct for a 4-player LAN per the threat model — `docs/security/
   THREAT_MODEL.md`). A hostile *host* can still destroy anything.

## 7. Relationship to the security TRACKER

- **A3** (`docs/security/TRACKER.md`): holder_table is the **partial**
  mitigation — it addresses the "any client can destroy any prop by wire-Key"
  clause for keyed Aprop destroys/converts on the host-apply path. It does
  **not** address the relay-whitelist fan-out clause. Tracker should be updated
  to reflect this partial status (see the docs-update pass this file is part
  of).

- **W1-W12** etc.: holder_table is unrelated to those findings.

## 8. Verdict

Shipped, code-reviewed against the diff, **not hands-on**. The mechanism is
sound for its stated scope (keyed-Aprop destroy/convert authority on the host).
Gaps 3 (relay timing) and 4 (thread safety) are the ones most worth a live
probe or `/qf` pass before calling A3 fully addressed.
