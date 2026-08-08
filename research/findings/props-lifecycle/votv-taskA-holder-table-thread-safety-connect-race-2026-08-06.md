# Task A findings — holder_table thread safety + disconnect race + W8 residual + seed_sync ordinal — 2026-08-06

**Scope:** Four investigation-only items from the 2026-08-06 docs pass.
No code changes. Evidence is from source reading + the documented
architecture (net pump, reliable inbox, event_feed::Update ordering).

---

## A1. holder_table thread safety

**Question:** Are all `holder_table` call sites on the game thread, or are any
unguarded (net-thread / deferred / ambiguous)?

**Call-site census (8 sites, 4 functions):**

| # | Function | File:line | Dispatched from | Thread |
|---|---|---|---|---|
| 1 | `SetHeldBy` | `trash_grab_intent.cpp:285` | `OnGrabIntent` → reliable-inbox drain (`event_feed::Update`) | **Game** |
| 2 | `ClearHeldBy` | `trash_grab_intent.cpp:363` | `OnThrowIntent` → `ReleaseClientHold` → reliable-inbox drain | **Game** |
| 3 | `ClearSlot` | `trash_grab_intent.cpp:378` | `OnGrabHolderLeft` → `subsystems::DisconnectSlot` → `OnSlotReplaced_TearDownWorld` (subscriber) → `ReconcileFromSession` → `event_feed::Update` | **Game** |
| 4 | `ClearHeldBy` | `trash_grab_intent.cpp:385` | `ReleaseClientHold` → reliable-inbox drain | **Game** |
| 5 | `ClearHeldBy` | `remote_prop_destroy.cpp:130` | `OnDestroyImpl_` (proxy path) → reliable-inbox drain | **Game** |
| 6 | `IsHeldBy` | `remote_prop_destroy.cpp:170` | `OnDestroyImpl_` (authority check) → reliable-inbox drain | **Game** |
| 7 | `ClearHeldBy` | `remote_prop_destroy.cpp:210` | `OnDestroyImpl_` (post-destroy) → reliable-inbox drain | **Game** |
| 8 | `IsHeldBy` | `remote_prop_convert.cpp:65` | convert handler → reliable-inbox drain | **Game** |

**Why they're all game-thread:**
- The net thread (`Session::run`, `session.cpp:540-570`) receives GNS messages
  and pushes reliables into `reliableInbox_` — it does NOT invoke handlers.
- Handlers run when `event_feed::Update` drains `reliableInbox_` via
  `TryGetReliable` (net_pump.cpp:789, on the game thread per the
  `UE_ASSERT_GAME_THREAD` at net_pump.cpp:385).
- `DisconnectSlot` runs from `OnSlotReplaced_TearDownWorld`, a
  `SlotReplacedFn` subscriber fired by `roster_ledger::Transition` — which
  runs inside `ReconcileFromSession` (`event_feed::Update`, game thread).

**Verdict: NON-ISSUE.** All 8 call sites are on the game thread. The
game-thread-only invariant in the header comment holds by construction, not
by mutex. No concurrent access is possible. The thread-safety concern that
motivated this investigation does not exist.

---

## A2. holder_table disconnect race

**Question:** Is there an ordering gap between net-thread message drain and
`ClearSlot` on disconnect that could drop a legitimate destroy?

**The mechanism:**
1. `event_feed::Update` (game thread) runs `ReconcileFromSession` FIRST.
2. If a peer departed, `ClearRow` → `Transition` → `OnSlotReplaced_TearDownWorld`
   → `DisconnectSlot` → `OnGrabHolderLeft` → `holder_table::ClearSlot(slot)`.
3. THEN `event_feed::Update` drains `reliableInbox_` — dispatching any
   pending `PropDestroy` from the departing peer.

So within the SAME game-thread call, `ClearSlot` runs BEFORE the inbox drain.
A `PropDestroy` still in the inbox at that point hits `IsHeldBy` → false →
DENIED. The reconcile-then-drain order is load-bearing for Joins (the comment
at event_feed.cpp:136-138 explains why), so it can't simply be swapped.

**Why it's narrow:**
- The dangerous variant — an old peer's stale `PropDestroy` reaching a NEW
  peer who reused the slot — is mitigated by the epoch check in
  `HandleMessage` (session.cpp:316-348). A slot reset clears
  `expectedEpoch_[slot]`; a stale packet with the old epoch is dropped
  before it ever reaches a handler. So slot-reuse is safe.
- The remaining race is: departing peer sends `PropDestroy`, then disconnects
  before it's drained → destroy denied. Consequence: the prop is NOT destroyed
  on the host. The carry proxy on other clients is not retired. This is a
  minor divergence in the SAFE direction (entity lingers), not a world-
  corruption or security issue.
- No existing queue/flush mechanism bridges the two phases. A fix would mean
  either (a) deferring `ClearSlot` to AFTER the inbox drain in
  `event_feed::Update`, or (b) draining-and-holding disconnect-time destroys
  for one extra tick. Both are structural to the Update ordering.

**Verdict: REAL BUT NARROW ORDERING GAP.** The dangerous variant is already
covered by the epoch check. The residual is a missed cleanup (safe direction).
Worth noting in the design note as a known limitation, not a priority fix.

---

## A3. W8 residual — laptop_buffer array IDs

**Question:** Can a client grow multiple arrays past the intended cap?

**Structure (from `laptop_buffer_sync.cpp:85-128, 270-320`):**
- `arrayId 0` = `floppyData` (`q.data`), `arrayId 1` = `floppyBuffer` (`q.buffer`).
- A third parallel array `bufferUids` is tied to `floppyBuffer` (pushed on
  append, erased on remove) — it grows with `buffer`, no independent cap.
- Cap check (line 315): `if (arr.size() >= 1024)` — per-array.
- `arrayId` is not validated against `[0,1]`: the ternary
  `(op.arrayId == 0) ? q.data : q.buffer` collapses any `arrayId != 0` onto
  `q.buffer`. So there are effectively 2 real arrays, not more.

**Exposure:**
- `floppyData`: 1024 entries max.
- `floppyBuffer` (+ `bufferUids`): 1024 entries max.
- Total: 2048 string entries per peer (2× the single-array intent).
- Each string bounded by `kMaxWireStrLen` (65535 B), but realistically a
  floppy-data path or buffer line is < 200 B → ~400 KB worst case per peer.
- The canonical (`op=1`) path has its own transport cap and tail-drops
  (`PackCanonicalBounded`, line 190), so a single canonical can't smuggle a
  large quad either.

**Verdict: REAL BUT LOW-IMPACT RESIDUAL.** 2× the intended per-array cap, but
sub-MB per peer and bounded by the canonical transport cap. Not a memory-
exhaustion path on any modern system. The fix (a global cap across both
arrays, or a sender-wide budget) is cheap but the risk does not justify
urgency.

---

## A4. seed_sync ordinal risk

**Question:** Is GUObjectArray iteration order for xmaslight stable between
host and client?

**Facts:**
- `Axmaslight_C` extends `Aactor_save_C` (CXXHeaderDump/xmaslight.hpp) — a
  saveable actor, which strongly implies level-placed (part of the level /
  save file, not runtime-spawned).
- Both peers load the same level from the host's transferred save, so they
  have the same set of xmaslight actors.
- Level-placed actors generally iterate in the same order in GUObjectArray
  across processes loading the same level — but this is NOT guaranteed by the
  UE4 spec. Sublevel streaming order, construction-script timing, or
  dynamically-added instances could diverge.
- `seed_sync` matches by "instance ordinal in GUObjectArray scan order"
  (seed_sync.cpp:8, 159, 177) — fragile if order differs.
- xmaslight is decorative: RNG-authority audit (`docs/COOP_RNG_AUTHORITY.md`)
  rates it "Tier 3 — cosmetic-local (leave alone)" and "no shared consequence."
- garbagePileSpawner (the other seeded system) is a singleton → ordinal 0 is
  immune.

**Verdict: LIKELY NON-ISSUE, UNCLEAR FOR EDGE CASES, COSMETIC-ONLY IMPACT.**
For standard level-placed xmaslight actors loading from the same save, order
should be stable. Even if ordinals diverge, the wrong seed on the wrong
xmaslight is a cosmetic decoration difference — not a correctness or security
concern. Worth a runtime check (log the ordinal→seed map on both peers once)
but not worth defensive engineering. The bigger correctness question — whether
the seed is even APPLIED before the client's xmaslight calls `genInstances()`
(BeginPlay timing) — is out of scope here and unverified.
