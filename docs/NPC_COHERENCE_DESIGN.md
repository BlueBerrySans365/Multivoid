# NPC_COHERENCE_DESIGN — host-authoritative NPC state beyond pose

**Status:** DESIGN ONLY — no code implemented.
**Source data:** 26 NPC blueprint files analyzed via Kismet/BP analyzer (`bp_reflect.py`).

---

## 1. Current NPC sync state

What already works (shipped, verified):

| What | Where | Wire |
|---|---|---|
| Position + rotation | `npc_pose_host.cpp` TickPoseStream → `npc_mirror.cpp` | `EntityPose=32` unreliable batch (~sendHz) |
| Kerfur form/accessory/walk anim | `npc_pose_host.cpp` state bits | `kEntityPoseBitHasKerfurState` / `kEntityPoseBitKerfurSpooky` |
| Dead-retire detection | `npc_pose_host.cpp` dead-retire walk | Pose-walk `SyncDestroyedNpcByEid` |
| NPC spawn/destroy lifecycle | `npc_sync.cpp` interceptor → `npc_mirror.cpp` | `EntitySpawn` / `EntityDestroy` reliable |
| Wisp aggro | `wisp_attack_sync.cpp` | Host-authoritative mirror |
| Roach infestation | `roach_sync.cpp` | `RoachState` paged snapshot |
| Piramid movement/look | `piramid_sync.cpp` | WorldActorPoseSnapshot aux fields |

**What is NOT synced** is the substance of this document.

---

## 2. NPC state NOT synced (from blueprint analysis)

All NPC AI is Blueprint-event-driven (timers, overlaps, delegates). No BT/EQS
references in any NPC file. This is a critical architectural constraint —
interception must be at UFunction level, not BT/blackboard.

| State | NPCs Affected | Sync Priority | Notes |
|---|---|---|---|
| Alive/dead/died/preDied/risen | All zombies, gore slither | **High** | `alive`/`died`/`preDied` are separate booleans; `risen` is a state flag. Divergent death states = different combat/world behavior for every peer |
| Movement mode (walk/fly/fall) | zombie_skerfuro | **High** | `SetMovementMode` called in BP; divergent mode = different physics/animation |
| Speed (setSpeed/MaxWalkSpeed) | zombie_skerfuro, arirGunStealer | **High** | `setSpeed` / `SetMaxWalkSpeed` are BP verbs; divergent speed = NPC arrives at different positions |
| AI target (lockTarget, specificTarget) | ariral_shooter, ariralPigBeater | **High** | `lockTarget` / `specificTarget` = which player/actor the NPC is attacking. Each peer choosing its own target = the NPC attacks different players on different screens |
| AI behavior phase | Krampus (multi-phase), orborb (wander) | **Medium** | Krampus has sequential phases (intro → chase → attack → retreat); orborb wanders between waypoints. Phase divergence = different NPC behavior visible to each peer |
| Skin/cosmetic variant | All zombie variants | **Medium** | `setRandomSkin` selects variant; must be host-rolled RNG |
| Animation variant | zombie_skeleVarg | **Medium** | `setRandomAnimation` selects variant; must be host-rolled RNG |
| Summon state | zombie_skerfuro | **Medium** | Summoning other NPCs; state divergence means different entity counts |
| Ragdoll state | arirGunStealer | **Low** | Ragdoll activation timing; cosmetic divergence, not gameplay-critical |
| Visibility/material | orborb | **Low** | Material parameter changes; purely visual |

---

## 3. RNG authority requirements

Per `COOP_RNG_AUTHORITY.md`, any RNG that changes shared world state must be
host-rolled. NPC-specific RNGs identified:

| RNG | Shape | Justification |
|---|---|---|
| `setRandomSkin` | **HOST (MIRROR)** | Determines cosmetic variant visible to all peers; unseeded → divergent |
| `setRandomAnimation` | **HOST (MIRROR)** | Determines animation variant visible to all peers; unseeded → divergent |
| `K2_GetRandomReachablePointInRadius` (orborb wander) | **HOST (MIRROR)** | Determines movement destination; peer-local roll = NPC walks to different positions |
| Cosmetic audio pitch/volume | **LOCAL OK** | No shared consequence; leave per-peer |

---

## 4. No behavior trees — critical finding

ALL 26 analyzed NPC Blueprint files use **Blueprint-event-driven AI exclusively**:
timers, overlaps, delegates. Zero BehaviorTree references. Zero EQS queries.

**Consequence:** we cannot intercept BT execution or blackboard writes. Every
NPC state change flows through Blueprint UFunctions that we can hook at the
`ProcessEvent` / `CallFunction` seam. The interception strategy must be:

1. **PRE-interceptors** on state-changing UFunctions (`setSpeed`,
   `SetMovementMode`, `lockTarget`, `died`, `setRandomSkin`, etc.)
2. **POST-interceptors** where needed (read the result the BP wrote back)
3. **Field reads** for state that isn't set via a UFunction call

This matches the existing pattern: `npc_world_enum.cpp` already uses
EX_CallMath source-gating for spawn interception.

---

## 5. Proposed host-authoritative NPC state shape

### 5.1 Reliable NpcState (NEW packet)

A new reliable packet carrying authoritative NPC state that changes infrequently
but must be consistent across peers. Sent on state change + connect snapshot.

```
struct NpcStatePayload {
    uint32_t elementId;       // NPC entity identity
    uint8_t  aliveState;      // 0=alive, 1=died, 2=preDied, 3=risen
    uint8_t  movementMode;    // 0=walk, 1=fly, 2=fall, 3=none (maps to engine modes)
    float    speed;           // MaxWalkSpeed / setSpeed value
    uint32_t aiTargetEid;     // 0 = no target; otherwise eid of the target actor
    uint8_t  aiPhase;         // behavior phase index (Krampus phases, orborb wander state)
    uint8_t  skinVariant;     // host-rolled cosmetic variant
    uint8_t  animVariant;     // host-rolled animation variant
    uint8_t  summonState;     // zombie_skerfuro summoning state
};
```

**Why reliable:** alive/dead transitions, AI target changes, and speed/mode
changes are infrequent but must not be dropped. Position+rotation stays
unreliable (the existing EntityPose batch).

### 5.2 Unreliable EntityPose batch (EXTENDED, existing)

The existing `EntityPoseSnapshot` (44 bytes, `protocol.h:2902`) already carries
position, rotation, lookAt, bodyYaw, and kerfur state. Two additions needed:

- **movement mode** — 1 byte (extend `stateBits` with new bits, or add a field)
  so the client mirrors the correct physics/animation state per-tick
- **speed** — 1 float so the client interpolates at the correct rate

These go on the unreliable stream because they change every tick alongside pose.
Total per-NPC overhead: +5 bytes (1 byte mode + 1 float speed).

### 5.3 Host-rolled RNG seeds

For cosmetic variants (skin, animation) and deterministic wander destinations:

- **Skin/animation:** host rolls at NPC spawn, includes the seed in
  `NpcStatePayload`, client applies at spawn time. No per-tick overhead.
- **Orborb wander:** host rolls `GetRandomReachablePointInRadius` destinations,
  broadcasts target position on `NpcStatePayload.aiTargetEid` + the destination
  coordinates (or rolls deterministically from a shared seed).

---

## 6. Implementation phases

### Phase 1 — Movement mode + speed on EntityPose

Extend the unreliable `EntityPoseSnapshot` with 1 byte movement mode + 1 float
speed. The host reads `SetMovementMode` / `setSpeed` calls and includes current
values in the per-tick batch. The client applies them before pose interpolation.

**Scope:** zombie_skerfuro, arirGunStealer (2 NPCs). Low risk — additive to
existing stream.

### Phase 2 — Reliable NpcState for alive/dead + AI target + AI phase

New `NpcState=33` (or next available) reliable packet. Host intercepts:
- `died` / `preDied` / `risen` UFunctions → sends aliveState
- `lockTarget` / `specificTarget` → sends aiTargetEid
- Phase transitions (Krampus, orborb) → sends aiPhase

Client applies received state; suppresses local AI decisions for the affected
fields (alive/dead gates, target selection, phase progression).

**Scope:** all zombies, gore slither, ariral_shooter, ariralPigBeater, Krampus,
orborb (6+ NPC families). Medium risk — new packet type, client suppression logic.

### Phase 3 — Host-side UFunction interception

Hook the specific UFunctions identified in the blueprint analysis:
- `setSpeed` (zombie_skerfuro, arirGunStealer)
- `SetMovementMode` (zombie_skerfuro)
- `died`, `preDied`, `risen` (all zombies, gore slither)
- `lockTarget`, `specificTarget` (ariral_shooter, ariralPigBeater)
- `setRandomSkin`, `setRandomAnimation` (all zombie variants)

Pattern: PRE-interceptor captures the arguments, host broadcasts authoritative
state, client suppresses its own call.

**Scope:** all 10 state categories from the table. High risk — many interception
points, must not break single-player path.

### Phase 4 — Client-side suppression

On the client, when `NpcState` is received:
- Apply aliveState → suppress local `died`/`risen` processing
- Apply aiTargetEid → suppress local target selection
- Apply aiPhase → suppress local phase transitions
- Apply skinVariant → suppress local `setRandomSkin`
- Apply animVariant → suppress local `setRandomAnimation`

The client's NPC Blueprint continues to tick but its AI decisions are overridden
by the host's authoritative state. The engine actor remains a puppet driven by
the host's values — the same shape as `RemotePlayer`.

---

## 7. Open questions

1. **Orborb wander destinations:** host-roll-and-broadcast vs shared-seed
   reproducibility? The seed approach is cheaper on wire but couples to seed
   management. Recommendation: host-roll-and-broadcast (INTENT shape per
   `COOP_RNG_AUTHORITY.md`).

2. **Summon state propagation:** when zombie_skerfuro summons other NPCs, does
   the summon event ride `NpcState` or a dedicated intent? If the summoned NPC
   already has `EntitySpawn`, the summon state flag may suffice.

3. **Connect snapshot:** `NpcState` must be included in the connect-edge
   re-broadcast (same pattern as `EntitySpawn` in
   `npc_pose_host.cpp:QueueConnectBroadcastForSlot`). A freshly joining peer
   needs the authoritative state of every live NPC.

4. **Performance budget:** the reliable `NpcState` packet is ~16 bytes per NPC.
   At 31 NPCs (MTU cap from `EntityPose`), this is ~500 bytes — well within a
   single reliable datagram. But reliable packets are ordered and retried; rapid
   state changes (Krampus phase cascade) must not backpressure the reliable lane.

---

## References

- `src/votv-coop/include/coop/net/protocol.h` — `EntityPoseSnapshot` (line 2902), `EntityPose=32`
- `src/votv-coop/src/coop/creatures/npc_pose_host.cpp` — host-side pose egress
- `src/votv-coop/src/coop/creatures/npc_sync.cpp` — host-side lifecycle + interceptor
- `src/votv-coop/src/coop/creatures/npc_mirror.cpp` — client-side mirror drive
- `src/votv-coop/src/coop/creatures/npc_world_enum.cpp` — EX_CallMath source gating
- `docs/COOP_RNG_AUTHORITY.md` — RNG host-authority rules
- `docs/COOP_METHODOLOGY.md` — project conventions (rules 1-7)
- `docs/COOP_SYNC_MAP.md` — discoverability map for all wire sync
