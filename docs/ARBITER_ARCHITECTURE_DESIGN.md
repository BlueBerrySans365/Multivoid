# ARBITER_ARCHITECTURE_DESIGN.md — Authority Separation for Multivoid

**Status**: DESIGN-ONLY. No code changes. No protocol bump.
**Audience**: engineer evaluating cheat detection + host failover for the VOTV coop mod.
**Depends on**: `docs/COOP_METHODOLOGY.md` (rules 1-2, 7 principles),
`docs/COOP_RNG_AUTHORITY.md` (current host-auth inventory).

---

## 1. Problem Statement

### 1.1 Current model: single-process host authority

Every shared-world mutation flows through the host process:

- **Container contents**: host arbitrates client writes via compare-and-swap
  (`container_contents_sync.h:30-38`).
- **NPC spawn/destroy**: host-authoritative via `entity/registry.h`
  `AllocHostId` + `EntitySpawn`/`EntityDestroy` packets.
- **Weather**: host pushes `WeatherStatePayload` on every cycle tick
  (`weather_fog.h:64`).
- **Dish state**: host streams `DishAimState` while desk is claimed
  (`protocol.h:527`).
- **Player damage**: host computes, pushes `PlayerDamage` reliable
  (`player_damage.h:13`).
- **Balance**: host-authoritative `BalanceSync`/`BalanceDelta` packets
  (`protocol.h:333-334`).
- **Chat**: host-authored line sequence, `ChatLine`/`ChatSpeaker` reliable
  (`protocol.h:700+`).
- **Session management**: host assigns peer slots (`AssignPeerSlot`),
  manages connect replay, owns the save transfer.
- **Kerfur commands**: host relays + executes `KerfurConvertRequest`
  (`protocol.h:580-588`).
- **Drone**: host-authoritative body pose + cargo mirror
  (`drone_sync.h:3`).
- **ATV**: occupant-authoritative with host arbitration on contested seats
  (`atv_sync.h:5`).
- **Server boxes**: host-authoritative break state
  (`serverbox_sync.h:1`).
- **Sky signal**: host-authoritative roller + desk simulation
  (`protocol.h:522-528`).

### 1.2 Failure modes

| Mode | Consequence | Current mitigation |
|------|-------------|-------------------|
| **Host disconnects** | Session dies. All clients lose the world. | None. Host == single point of failure. |
| **Host cheats** | No detection. Host can: spawn arbitrary props, set balance to any value, skip weather, give itself infinite items, manipulate NPC spawns. | None. Clients trust every host packet unconditionally. |
| **Host crashes** | Same as disconnect — session ends. | None. |
| **Host packet loss** | Stale state, but self-healing on next packet. | Acceptable for real-time state; unreliable for one-shot events. |

### 1.3 Goals

1. **Cheat detection** — clients can verify that host state transitions are legal.
2. **Host failover** (stretch goal) — if host disconnects, another peer can take over.
3. **Minimum viable scope** — do not redesign the protocol or add a separate server binary in Phase 1.

---

## 2. Proposed Architecture

### 2.1 Core concept: arbiter as a verification layer

An **arbiter** is an entity that:
- Receives state-transition proposals from peers.
- Validates them against a rule set.
- Signs confirmed state so receivers can verify provenance.

The arbiter does NOT own the engine. It does NOT run game logic. It is a
**pure verification + signing service** — a lightweight sidecar.

### 2.2 Three deployment models (incremental)

```
Phase 1: LOG-ONLY (arbiter = host's own logger)
┌─────────────────────────────────────┐
│  Host process                        │
│  ┌───────────┐  ┌────────────────┐  │
│  │ Game Logic │→│ Arbiter Module  │  │
│  │ (existing) │  │ (validates +   │  │
│  │            │  │  logs locally) │  │
│  └───────────┘  └────────────────┘  │
│       ↓                              │
│  Clients receive same packets        │
│  (no arbiter signature yet)          │
└─────────────────────────────────────┘

Phase 2: SIGNATURE-ON-WIRE (arbiter = host's signing module)
┌─────────────────────────────────────┐
│  Host process                        │
│  ┌───────────┐  ┌────────────────┐  │
│  │ Game Logic │→│ Arbiter Module  │  │
│  │            │  │ (validates +   │  │
│  │            │  │  signs packets)│  │
│  └───────────┘  └────────────────┘  │
│       ↓                              │
│  Signed packets → Clients            │
│  Client verifies signature           │
│  (logs mismatch, no enforcement)     │
└─────────────────────────────────────┘

Phase 3: SEPARATE PROCESS (arbiter = dedicated process or peer-elected)
┌──────────────┐    ┌──────────────┐
│ Host process  │←──→│ Arbiter proc  │
│ (game logic)  │    │ (validates +  │
│               │    │  signs state) │
└──────────────┘    └──────────────┘
        ↕ (signed state)
┌──────────────┐  ┌──────────────┐
│  Client 1     │  │  Client 2     │
│  (verifies)   │  │  (verifies)   │
└──────────────┘  └──────────────┘
```

### 2.3 Arbitration protocol (design sketch)

The arbiter operates on **state-transition proposals**:

```
Proposal {
    transition_id:   uint64     // monotonic per arbiter session
    author_slot:     uint8      // who proposed (0 = host)
    state_domain:    uint8      // e.g. CONTAINER, NPC_SPAWN, WEATHER, BALANCE
    entity_id:       uint32     // affected ElementId (from registry.h)
    before_hash:     uint64     // hash of entity state BEFORE transition
    after_hash:      uint64     // hash of entity state AFTER transition
    rule_params:     bytes      // domain-specific params for validation
}

ArbiterVerdict {
    transition_id:   uint64
    approved:        bool
    reason:          uint8      // DENY_RULE_VIOLATION, DENY_OUT_OF_ORDER, etc.
    arbiter_sig:     bytes[32]  // HMAC-SHA256(Proposal, arbiter_key)
}
```

**Key design decisions:**
- The arbiter does NOT re-simulate. It checks **preconditions** (is this
  transition legal given the current state?).
- The arbiter does NOT own the Element. It only signs.
- Clients verify `ArbiterVerdict.arbiter_sig` against a shared arbiter key
  distributed at session start (like the existing `kProtocolVersion` gate).

### 2.4 What the arbiter validates (per domain)

| Domain | Precondition checked | Example |
|--------|---------------------|---------|
| ContainerContents | CAS before_hash matches; delta within volume limits | Client can't add 1000 items to a 2-slot container |
| NPC_Spawn | NPC class is in the allowlist for current game phase; spawn count within cap | Can't spawn 50 kerfurs |
| Weather | Transition is on the cycle schedule; no duplicate pushes within cooldown | Can't skip to clear sky on demand |
| Balance | Delta is within earnable range; no negative spend without source | Can't add 1M credits |
| PlayerDamage | Damage source is a valid in-game source; target is alive | Can't damage dead players |
| Session | Slot assignment is unique; epoch matches | Can't claim another peer's slot |

### 2.5 Key distribution

- Session start: host generates `arbiter_key` (32 bytes, random).
- Distributed via the existing `AssignPeerSlot` handshake
  (`protocol.h:74-76`), extended with a `arbiter_key` field.
- The arbiter key is session-scoped. On disconnect, it is invalidated.
- In Phase 3 (separate process), the arbiter key is generated by the
  arbiter process, not the host.

---

## 3. Incremental Rollout

### Phase 1: Log authority decisions (no enforcement)

**Goal**: Build the arbiter module as a local-only validation layer.
No wire changes. No signature. Purely observational.

**Scope**:
- Add `coop/arbiter/arbiter_module.h` — validates proposed transitions
  against rule set, logs PASS/FAIL.
- Instrument 2-3 critical paths first:
  1. `container_contents_sync` CAS arbitration (already has CAS —
     arbiter logs whether the host's CAS is correct).
  2. `balance_sync` delta validation (is the delta within bounds?).
  3. `weather_sync` cycle validation (is the weather push on-schedule?).
- Log output goes to the existing file logger. No client-visible change.

**Wire change**: None. Protocol stays at v138.

**Verification**: Compare arbiter logs against live session. Every FAIL
entry is a potential cheat or a missing rule. Tune the rule set before
Phase 2.

**Deliverable**: `docs/ARBITER_LOG_REPORT.md` — a summary of arbiter
observations from live sessions. Counts of PASS/FAIL per domain.

### Phase 2: Add signature to critical packets

**Goal**: Host signs confirmed state; clients verify (log-only, no
enforcement yet).

**Scope**:
- Extend `PacketHeader` (or add a trailing `ArbiterSignature` block
  to specific ReliableKinds):
  - `ContainerContents` — the most CAS-protected, easiest to validate.
  - `BalanceSync` — numeric, trivially hashable.
  - `WeatherState` — continuous state, hashable.
- Add `arbiter_signature` field to the payloads above (grows each by
  ~40 bytes: 8-byte transition_id + 32-byte HMAC).
- Clients verify the HMAC on receipt. On mismatch, log + optionally
  display a warning overlay (ImGui, `coop/dev/`).
- No enforcement: a bad signature is logged, not rejected (yet).

**Wire change**: Bump `kProtocolVersion` to 139. Old clients fail
at ParseHeader — visible mismatch, not silent corruption.

**Verification**: Dual-process soak. Host + client running arbiter.
Every packet gets a signature. Client logs verify every signature.
Zero false negatives = ready for Phase 3.

**Deliverable**: `docs/ARBITER_SIGNATURE_REPORT.md` — signature
verification stats from dual-process soak.

### Phase 3: Move authority to separate process

**Goal**: Decouple arbiter from host. Arbiter is a separate OS process
(or elected peer) that the host and clients connect to.

**Scope**:
- Arbiter process: lightweight GNS server, accepts proposals, returns
  verdicts, signs state.
- Host sends proposals to arbiter over a dedicated GNS channel.
- Arbiter returns verdict. Host applies only approved transitions.
- Clients receive signed state from arbiter directly (or via host relay
  with arbiter signature).
- Host failover: if host disconnects, arbiter can elect a new host
  (stretch goal — requires save-state transfer).

**Wire change**: Major. New channel, new packet types, new handshake.
This is a future-phase design surface, not this document's scope.

---

## 4. Tradeoffs

### 4.1 Latency

| Phase | Added latency | Mitigation |
|-------|--------------|------------|
| Phase 1 | 0 | Local-only, no wire change |
| Phase 2 | 0 (signing is symmetric crypto, <1 μs) | HMAC-SHA256 is fast; signing happens after state is computed, not in the hot path |
| Phase 3 | 1 round-trip (~1-5 ms LAN, ~20-50 ms WAN) | Proposal→Verdict→Apply adds one RTT. For real-time state (pose), this is too slow — arbiter only gates one-shot state transitions (container, balance, weather). Pose streams remain host-authoritative without arbiter. |

### 4.2 Complexity

| Phase | Complexity delta |
|-------|-----------------|
| Phase 1 | Low — one new module, ~500 LOC, no wire change |
| Phase 2 | Medium — signature field in 3 payloads, HMAC lib, client verifier |
| Phase 3 | High — separate process, new GNS channel, save-state transfer for failover |

### 4.3 Security model

**Phase 1-2**: Arbiter key is shared between host and clients. A cheating
host knows the key and can forge signatures. These phases are for
**detection** (logging), not prevention. The arbiter module on the host
itself is trustworthy only if the mod DLL is unmodified — which is the
same trust assumption as today.

**Phase 3**: The arbiter process is a separate binary. If it runs on a
trusted machine (e.g., one of the clients), the host cannot forge its
signatures. This is the real cheat-detection model. The arbiter key is
known only to the arbiter process, not the host.

### 4.4 Host failover

**Phase 1-2**: No failover. Host disconnect = session dies.

**Phase 3**: Feasible. The arbiter holds signed state snapshots. If host
disconnects, the arbiter can:
1. Pause the session.
2. Ask clients for their current state.
3. Elect a new host (e.g., the client with the most recent save).
4. Transfer the arbiter's signed state to the new host.
5. Resume.

This requires the arbiter to accumulate a **signed state checkpoint** at
regular intervals — a design surface for Phase 3.

---

## 5. Current Authority Points

All places where the host currently has sole authority over shared state.
This is the arbiter's initial rule-set scope.

### 5.1 Container state (CAS-based, already has some protection)

- **Module**: `coop/props/container_contents_sync.h`
- **Authority shape**: Compare-and-swap on `baseHash`. Client proposes,
  host arbitrates, relays to others excluding the author.
- **Arbiter value**: Validate that the host's CAS is correct (before_hash
  matches the last published state). Low priority — already protected.

### 5.2 NPC spawn/destroy

- **Module**: `coop/creatures/npc_sync` (via `entity/registry.h`)
- **Authority shape**: Host-only `EntitySpawn`/`EntityDestroy` packets.
  Clients never broadcast NPC entity packets (`protocol.h:88-92`).
- **Arbiter value**: Validate NPC class allowlist, spawn count caps,
  spawn timing. High priority — NPC spawns are high-impact.

### 5.3 Weather state

- **Module**: `coop/world/weather_fog.h`, `coop/world/weather_sync`
- **Authority shape**: Host pushes `WeatherStatePayload` on cycle tick.
  Client suppresses its 5 scheduler UFunctions.
- **Arbiter value**: Validate weather transitions are on-cycle, no
  duplicate pushes within cooldown. Medium priority.

### 5.4 Dish state

- **Module**: `coop/interactables/desk_sim_sync.h`, `coop/interactables/signal_catch_sync.h`
- **Authority shape**: Host streams `DishAimState` while desk is claimed.
  `SkySignalState` host-authoritative roller.
- **Arbiter value**: Validate dish slew is within mechanical limits,
  signal catch replay matches catch rules. Medium priority.

### 5.5 Player damage

- **Module**: `coop/player/player_damage.h`
- **Authority shape**: Host computes damage, pushes `PlayerDamage`
  reliable to the owner.
- **Arbiter value**: Validate damage source is a valid in-game source,
  target is alive, damage is within weapon bounds. High priority —
  instant-kill cheats are the most obvious.

### 5.6 Balance (credits)

- **Module**: `coop/world/economy.h` (via `balance_sync`)
- **Authority shape**: Host-authoritative `BalanceSync` (absolute total)
  + `BalanceDelta` (client request, host applies). (`protocol.h:333-334`)
- **Arbiter value**: Validate delta is within earnable range, no negative
  spend without matching source. High priority — infinite credits is a
  common cheat.

### 5.7 Session management

- **Module**: `coop/net/session.h`
- **Authority shape**: Host assigns peer slots (`AssignPeerSlot`), owns
  the save transfer (`SaveTransferRequest`/`Chunk`), manages connect
  replay (bracket + state broadcasts).
- **Arbiter value**: Validate slot uniqueness, epoch consistency.
  Low priority for cheat detection; relevant for failover.

### 5.8 Chat

- **Module**: `coop/comms/chat_sync.h`
- **Authority shape**: Host-authored line sequence, `ChatLine`/`ChatSpeaker`
  reliable. Client sends `ChatMessage` to host only.
- **Arbiter value**: Minimal. Chat is cosmetic. Skip.

### 5.9 Kerfur commands

- **Module**: `coop/kerfur_convert.h`
- **Authority shape**: Client sends `KerfurConvertRequest` to host.
  Host executes verb + converges side effects.
- **Arbiter value**: Validate convert is within allowed transitions
  (prop→NPC, NPC→prop). Low priority.

### 5.10 Drone

- **Module**: `coop/interactables/drone_sync.h`
- **Authority shape**: Host-authoritative body pose + cargo mirror.
  Client suppresses `ReceiveTick`.
- **Arbiter value**: Validate drone position is within map bounds,
  cargo exists. Low priority.

### 5.11 ATV

- **Module**: `coop/interactables/atv_sync.h`
- **Authority shape**: Occupant-authoritative with host arbitration on
  contested seats (`AtvOccupied` v138).
- **Arbiter value**: Validate seat claims are first-correct, health
  crosses zero only once. Medium priority.

### 5.12 Server boxes

- **Module**: `coop/interactables/serverbox_sync.h`
- **Authority shape**: Host-authoritative break state. One-directional
  host→client.
- **Arbiter value**: Validate break events are from valid sources.
  Low priority.

### 5.13 Sky signal / desk simulation

- **Module**: `coop/interactables/desk_sim_sync.h`
- **Authority shape**: Host owns the sim + streams output. Client
  renders passively.
- **Arbiter value**: Validate signal catch replay matches desk state.
  Medium priority.

---

## 6. Migration Path

### 6.1 Principles

Per `COOP_METHODOLOGY.md`:
- **RULE 1**: No crutches. The arbiter does not suppress or skip. It
  validates and logs.
- **RULE 2**: No migration baggage. When Phase 2 ships, Phase 1's
  local-only arbiter module is REPLACED by the signing variant, not
  kept as a parallel path.
- **Principle 6**: Augment SP, never replace. The arbiter layers on top
  of the existing host-authoritative model. The host still drives the
  game. The arbiter only verifies.

### 6.2 Phase 1 → Phase 2 migration

1. Build `coop/arbiter/arbiter_module.h` with a `Validate()` method
   per domain. Phase 1 calls `Validate()` and logs the result.
2. Phase 2 adds `Sign()` to the same module. `Validate()` is called
   before `Sign()`. The logging path stays.
3. No parallel paths: the same `Validate()` call serves both phases.
   Phase 1 just doesn't call `Sign()`.

### 6.3 Phase 2 → Phase 3 migration

This is a larger surface and should get its own design doc when Phase 2
completes. Sketch:

1. The arbiter module is extracted into a standalone process.
2. The host's `Validate()` calls become IPC calls to the arbiter process.
3. The signing moves from the host to the arbiter process.
4. Clients connect to the arbiter directly for signature verification.
5. Host failover requires the arbiter to accumulate signed state
   checkpoints — a new subsystem.

### 6.4 Protocol versioning

- Phase 1: no bump (v138 stays). No wire change.
- Phase 2: bump to v139. The signature block is opt-in via version gate.
  Pre-v139 clients fail at ParseHeader — visible mismatch, not silent.
- Phase 3: bump to v140+. New channel, new handshake.

### 6.5 Testing strategy

- Phase 1: autonomous test harness runs the arbiter module in-process.
  Compares arbiter logs against expected PASS/FAIL per scenario.
- Phase 2: dual-process soak. Host signs, client verifies. Every packet
  gets a signature check. Zero false negatives = green light.
- Phase 3: full multi-process test. Arbiter as separate process. Host
  disconnect test (kill host, verify arbiter can elect new host).

---

## 7. Open Questions

1. **Which peers trust the arbiter?** In Phase 3, if the arbiter runs on
   a client, that client is trusted. Other clients trust it via the shared
   key. But a compromised arbiter can sign anything. Mitigation: arbiter
   runs on a dedicated machine (the "server" in the traditional sense).

2. **Real-time state vs one-shot state**: Pose streams, prop poses, and
   ragdoll physics are too high-frequency for per-packet arbitration.
   These stay host-authoritative without arbiter. The arbiter only gates
   one-shot state transitions (container ops, balance changes, NPC spawns,
   weather transitions).

3. **Save-state checkpoint for failover**: The arbiter needs a periodic
   snapshot of the signed state. How often? What is the checkpoint size?
   This is a Phase 3 design surface.

4. **Interaction with existing CAS**: `container_contents_sync` already
   has compare-and-swap. The arbiter's CAS validation is redundant in
   Phase 1-2. In Phase 3, the arbiter replaces the host's CAS — the
   client proposes directly to the arbiter, the arbiter validates and
   signs, the host applies.

---

## 8. References

- `src/votv-coop/include/coop/net/protocol.h` — wire format, all ReliableKinds
- `src/votv-coop/include/coop/element/registry.h` — ElementId allocator, host/peer ranges
- `src/votv-coop/include/coop/net/session.h` — session model, peer slots, lanes
- `src/votv-coop/include/coop/props/container_contents_sync.h` — CAS arbitration precedent
- `src/votv-coop/include/coop/interactables/interactable_channel.h` — HostAuth mode pattern
- `docs/COOP_METHODOLOGY.md` — rules 1-2, 7 principles
- `docs/COOP_RNG_AUTHORITY.md` — current host-auth inventory
- `reference/mtasa-blue/` — MTA precedent for server-authoritative validation
