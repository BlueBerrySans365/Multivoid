# FPS investigation — join-moment drop + persistent connected drop — 2026-08-06

**Symptoms (reported):** massive FPS drop at the moment the client connects,
a smaller but persistent drop while connected, full recovery on disconnect.

**Method:** source read of the join path, the per-tick subsystem chain, the NPC
lifecycle, and the dev-only overhead. No fixes. Rough magnitude estimates only.

---

## 1. Join-moment drop — save transfer + connect replay (GAME THREAD, SYNCHRONOUS)

All of this runs on the game thread, blocking, the instant `OnRequest` fires
(the client asks for the world save). Nothing is backgrounded or chunked.

### 1a. `save_transfer::OnRequest` (`coop/save_save_transfer.cpp:432`)

Called on the game thread when a client requests the save. Does ALL of the
following in one call, synchronously:

| Step | What | Cost |
|---|---|---|
| `CaptureLiveWorldToScratchSlot()` | Calls `mainGamemode.saveObjects()` — walks **every world actor** (props + NPCs + kerfur) and serializes them into the in-memory save container. Then `saveTriggers()` (doors/lights/keypads). Then `SaveGameToSlot()` writes the container to a scratch file on disk. | **O(world actors)** — this is a full world serialization. For a typical save with ~2-3k tracked objects + NPCs, this is the single most expensive call. Disk write on top. |
| `ReadWholeFile(scratchFile, bytes)` | Reads the entire scratch save into a `vector<uint8_t>`. Blob can be up to **17MB** (comment at line 96). | **O(blob size)** — 17MB read + alloc |
| `BeginStreamFromBlob_()` | CRC32 over the framed stream (sidecar + blob). | **O(blob size)** — CRC over 17MB |
| `CollectTrackedKeyedPropKeys()` | Iterates tracked keyed props. | O(keyed props) |
| `CollectTrackedPileTransforms()` | Iterates tracked chipPiles. | O(piles) |
| `CollectTrackedKerfurTransforms()` | Iterates tracked kerfur. | O(kerfur) |
| `CollectTrackedKeyedPropTransforms()` | Iterates tracked keyed props for transforms. | O(keyed props) |
| `CaptureJoinSnapshot()` | Meadow DB content-hash multiset. | O(meadow DB) |

The `saveObjects()` call alone (step 1) is a full world serialization that the
game's own save/reload uses — it walks every `int_save_C` actor. On the host
this runs while the host is also trying to render frames. **This is the #1
suspect for the massive single-frame hitch.**

### 1b. `ConnectReplayForSlot` (`coop/session/subsystems.cpp:253`)

Fires on `ClientWorldReady` (joiner announces its world is loaded). Calls
**~50 `QueueConnectBroadcastForSlot` functions**, each iterating world state
and queuing reliable messages. Several are heavy:

| Call | What | Cost |
|---|---|---|
| `npc_world_enum::RegisterExistingWorldNpcs` | Scans the **entire GUObjectArray (~237k slots)** to find allowlisted NPC-class actors and enroll them. Fast filter (pointer compares) but still walks 237k slots. | **O(GUObjectArray)** — ~237k iterations, game thread |
| `prop_snapshot::TriggerForSlot` | Enumerates ALL tracked props via `SnapshotActorsByType` (under registry mutex), builds a candidate vector, starts a chunked drain. | O(tracked props) — ~2-3k |
| `FlushDivergedSavePositionsForSlot` | Flushes diverged pile/keyed-prop positions. | O(moved props) |
| `npc_state_host::QueueConnectSnapshotForSlot` | Iterates NPCs, builds NpcState snapshots. | O(NPCs) |
| ~45 more subsystem queues | Each iterates its tracked state and builds messages. Most are cheap (doors, lights, keypads have small counts). | Various |

The `RegisterExistingWorldNpcs` GUObjectArray scan (237k slots) is the #2
suspect — it runs synchronously on the connect edge.

### 1c. `TickHost` chunk pump (`save_transfer.cpp:556`)

After `OnRequest` returns, `TickHost` pumps the blob to the client: **4 chunks
per tick** × 56KB = **224 KB/tick**. For a 17MB blob that's **~76 ticks =
~1.2 seconds at 60 Hz**. Each tick: memcpy into a 56KB stack buffer +
`SendReliableToSlot`. Spread over time (not a single hitch) but all on the
game thread.

**Verdict for #1:** The join-moment drop is caused by `saveObjects()` full
world serialization + 17MB file read + CRC + 237k-slot GUObjectArray scan,
all synchronous on the game thread. Expected: a multi-frame hitch (possibly
100ms+ wall time) proportional to world size. **Not a bug — it's the
architecture.** A save with 3k actors + 17MB blob is a lot of synchronous work.

---

## 2. Ongoing per-tick, per-connected-client cost

### 2a. `TickGameplay` — ~50 subsystem ticks every game tick (60 Hz)

`coop/session/subsystems.cpp:486` — runs **every `net_pump::Tick()`** (60 Hz)
as long as `worldUp`. Calls ~50 subsystem `Tick()` functions. Most are cheap
when idle (early-return on empty queues), but several do real work every tick:

| Subsystem | Frequency | Cost |
|---|---|---|
| `npc_pose_host::TickPoseStream` | **Every tick** | Iterates ALL tracked NPCs, reads location/rotation/velocity + reflection props (CMC MovementMode, MaxWalkSpeed, kerfur lookAt/bodyYaw, healthFrac). Builds one `EntityPoseSnapshot` batch. **O(NPCs) per tick.** |
| `npc_state_host::TickNpcState` | Every tick | Diffs NPC state against cache, broadcasts on change. O(NPCs). |
| `world_actor_sync::TickPoseStream` | Every tick | Iterates event world actors. O(WAs). |
| `interactable_sync::Tick` | Every tick | Retries deferred door/light/container applies. Cheap when idle. |
| `desk_input_sync::Tick` | Every tick (250ms poll) | Input-field poll. |
| `laptop_sync::Tick` | Every tick (4 Hz) | PC power/floppy edge polls. |
| `signal_catch_sync::Tick` | Every tick (1 Hz) | Detector poll. |
| `dish_sync::Tick` | Every tick (4 Hz) | Pose sweep + arm poll. |
| ~40 others | Various (1-60 Hz) | Most cheap when idle. |

**`TickPoseStream` is the dominant ongoing cost** — it reads reflection
properties (location, rotation, velocity, CMC mode, kerfur state) for every
single tracked NPC, every single tick, on the game thread. With ~50 NPCs this
is ~50 × (several UFunction/reflection reads) per tick = thousands of
reflection reads per second.

### 2b. These run on the HOST regardless of client count

`TickPoseStream` runs when `connected` is true but the batch is computed ONCE
and published. The cost does NOT scale with the number of connected clients
(the net thread fans out the same batch to all peers). So the ongoing drop
is **not "per extra client"** — it's "hosting at all vs. not hosting." A solo
host pays the same NPC-streaming cost as a host with 3 clients.

However: `TickGameplay` runs on the host but NOT on a solo non-hosting player.
So the "persistent drop while connected" = the cost of hosting (TickGameplay
chain + TickPoseStream), which is paid continuously.

### 2c. Net thread fan-out

Per `sendHz` tick (60 Hz), the net thread serializes the pose batch and sends
to each connected client. This scales with client count but runs on the net
thread, so it affects net throughput, not game-thread FPS directly.

**Verdict for #2:** The ongoing drop is `TickGameplay`'s ~50 subsystem ticks
per frame (60 Hz), dominated by `TickPoseStream` reading reflection props
for every NPC every tick. Cost is proportional to NPC count, not client count.
A world with many NPCs + active interactables will show a persistent FPS gap
between "solo non-hosting" and "hosting."

---

## 3. NPC AI redundant simulation

**Finding: NO redundant per-client NPC simulation.** The architecture is
correct here:

- NPC mirrors (client-side) have **actor ticks disabled**:
  `npc_mirror.cpp:230` calls `DisableCharacterTicks(actor)` +
  `NeutralizeAiTimers(actor)`. The mirror is driven entirely by the streamed
  pose batch, not by local AI.
- The host runs NPC AI **once** (the real NPCs). The batch is computed once
  and fanned out. No per-client AI simulation.
- `RegisterExistingWorldNpcs` runs on the connect edge (enrolling NPCs) but
  does NOT start AI — it just allocates Elements + binds the existing actor.

So the "host is doing full simulation AND something extra because a client is
connected" hypothesis is **NOT confirmed**. The overhead is the streaming
layer (reading/serializing NPC state every tick), not redundant AI.

**Caveat:** the `npc_state_host.cpp` TODOs (line 161-162, 200-201) show that
`aiTargetEid` and `aiPhaseFloat` are hardcoded 0 — AI target/behavior phase
interception is NOT implemented. So the host isn't syncing AI decisions, but
it also isn't running AI per client. The coherence gap is "AI state isn't
synced," not "AI runs twice."

---

## 4. Debug-only / build-config overhead

### 4a. ImGui rendering (EVERY frame, always active)

`ui/imgui_overlay.cpp:389` `RenderFrameGuarded` runs on every `Present`
(every frame). It draws: HUD (nameplates + chat/event feed), and conditionally
the dev menu, scoreboard, voice panel, server browser, etc. This is a per-frame
cost that is present in ALL builds (it's the coop HUD). Nameplates scale with
visible players.

**This inflates the baseline FPS cost independent of networking.** A release
build would still have the HUD but not the dev menu.

### 4b. object_overlay (OFF by default, heavy when on)

`coop/dev/object_overlay.cpp` — walks the ENTIRE GUObjectArray (~237k slots)
every 120 ticks when enabled. Gated on ini `[dev] object_overlay=1`. **OFF by
default** — only matters if the test build had it enabled.

### 4c. Dev probes (all OFF by default)

~20 dev probes (drone_probe, pinecone_probe, sleep_probe, keypad_probe, etc.)
— all gated on ini flags, all OFF by default. No impact unless explicitly
enabled.

### 4d. perf_probe ScopedWalkTimer / UE_LOG

`TickGameplay` is instrumented with `ScopedWalkTimer` (logs blocks ≥1ms) and
`UE_LOGI`. The logging has a small cost but `ScopedWalkTimer` is read-only
timing. In a release build these would be compiled out or silent.

### 4e. Build configuration

The test was run from a `cmake --build ... --config Release` build (per
BUILDING.md), so the C++ is optimized. BUT: the mod DLL loads into the game
process and runs its own game-thread code (`saveObjects`, reflection reads,
TickGameplay chain) — that code is optimized but still does the same amount of
work. The `UE_LOGI` calls in hot paths (TickPoseStream first-look logging, etc.)
are present in release builds (they're not stripped).

**Verdict for #4:** The test build's FPS cost is dominated by actual
architectural work (save serialization + TickGameplay chain), not by debug
overhead. The ImGui HUD is a real per-frame cost present in all builds. The
dev probes and object_overlay are off by default. Release vs. debug build
would not change the `saveObjects` or `TickPoseStream` cost meaningfully.

---

## Summary of magnitudes

| Phase | Dominant cost | Threading | Scaling |
|---|---|---|---|
| **Join moment** | `saveObjects()` full world serialization + 17MB read/CRC + 237k-slot GUObjectArray scan | Game thread, blocking, synchronous | O(world actors + blob size + GUObjectArray) |
| **Ongoing (hosting)** | `TickPoseStream` reads all NPC reflection props every tick + ~50 subsystem ticks/frame | Game thread, per tick (60 Hz) | O(NPCs) per tick — does NOT scale with client count |
| **Ongoing (network)** | Net thread fan-out of pose batch | Net thread | O(clients) but off game thread |
| **NPC AI redundancy** | NONE — mirrors have ticks disabled | — | — |
| **Debug overhead** | ImGui HUD every frame; dev probes OFF | Game thread | Constant per frame |

**Bottom line:** The join hitch is `saveObjects()` + blob I/O + GUObjectArray
scan, all synchronous. The ongoing drop is `TickPoseStream` (per-NPC
reflection reads every tick) + the TickGameplay subsystem chain. Neither is a
bug; both are the architecture doing its expected work. The fix space is
backgrounding/chunking the join path and reducing per-tick polling frequency.
