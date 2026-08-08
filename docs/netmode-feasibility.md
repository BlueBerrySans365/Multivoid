# Networking / Multiplayer Feasibility Assessment

> **Conclusion: Default engine noise, nothing to build on.**
>
> The OnlineSubsystem/NetDriver infrastructure classes exist in the dump only because UE4
> loads those engine modules — but no game Blueprint or C++ class in the project references,
> overrides, or calls into them. This was built as a pure single-player game. The networking
> layer is dormant engine boilerplate.

---

## What the dump contains (engine infrastructure)

The following classes appear in `native_classes` from engine modules that ship with every UE4.27 project:

### OnlineSubsystemUtils.hpp (full dump file)

| Class | Parent | Notes |
|---|---|---|
| `AOnlineBeacon` | `AActor` | Base beacon — minimal members |
| `AOnlineBeaconClient` | `AOnlineBeacon` | Has `UNetDriver*` and `UNetConnection*` member refs |
| `AOnlineBeaconHost` | `AOnlineBeacon` | Manages `ClientActors` array |
| `APartyBeaconClient` | `AOnlineBeaconClient` | Party matchmaking client (unused) |
| `APartyBeaconHost` | `AOnlineBeaconHostObject` | Party matchmaking host (unused) |
| `ASpectatorBeaconClient` | `AOnlineBeaconClient` | Spectator beacon (unused) |
| `ASpectatorBeaconHost` | `AOnlineBeaconHostObject` | Spectator host (unused) |
| `UIpConnection` | `UNetConnection` | IP net connection override |
| `UIpNetDriver` | `UNetDriver` | IP net driver override |
| `UOnlineSessionClient` | `UOnlineSession` | Session client |
| `UOnlineEngineInterfaceImpl` | `UOnlineEngineInterface` | Engine interface impl |
| `UCreateSessionCallbackProxy` | `UOnlineBlueprintCallProxyBase` | `CreateSession()` static helper |
| `UFindSessionsCallbackProxy` | `UOnlineBlueprintCallProxyBase` | `FindSessions()` static helper |
| `UJoinSessionCallbackProxy` | `UOnlineBlueprintCallProxyBase` | `JoinSession()` static helper |
| `UDestroySessionCallbackProxy` | `UOnlineBlueprintCallProxyBase` | `DestroySession()` static helper |
| `UConnectionCallbackProxy` | `UOnlineBlueprintCallProxyBase` | Connection proxy |
| `UAchievementQueryCallbackProxy` | `UOnlineBlueprintCallProxyBase` | Achievements |
| `UAchievementWriteCallbackProxy` | `UOnlineBlueprintCallProxyBase` | Achievements |
| `ULeaderboardFlushCallbackProxy` | `UOnlineBlueprintCallProxyBase` | Leaderboards |

### What's NOT in the dump (referenced but not defined)

These classes are referenced as parents or member types but the dump doesn't include their definitions:

- `UNetDriver` — referenced by `AOnlineBeacon` member and `UIpNetDriver` parent
- `UNetConnection` — referenced by `AOnlineBeaconClient` member and `UIpConnection` parent
- `UOnlineSession` — parent of `UOnlineSessionClient`
- `UOnlineSubsystem` — not referenced anywhere in game code
- `AGameSession` — not referenced
- `AGameModeBase` — parent of `AmainGamemode_C` but not defined in dump
- `UGameInstance` — parent of `UmainGameInstance_C` but not defined in dump
- `APlayerController` — parent of `MyPlayerController_C` but not defined in dump

This is expected: CXXHeaderDump only captures classes it encounters during the dump session, not the entire engine.

---

## What the game code actually does (or doesn't) with networking

### Replication flags

- **0** Blueprint variables have `CPF_Replicated` or `CPF_RepNotify` flags
- **0** Blueprint functions have `Server`, `Client`, `NetMulticast`, `Reliable`, or `Unreliable` function flags

Every Blueprint variable is either `CPF_Edit`, `CPF_BlueprintVisible`, or `CPF_Transient` — none opt into replication.

### GameMode / GameInstance overrides

**`AmainGamemode_C`** (parent: `AGameModeBase`) — 348 members, 207 functions:
- Functions with "server" in the name: `getRandomServerMinigameType`, `launchServerMinigame`,
  `breakServer`, `calcServerEff` — these refer to in-game "server boxes" (craftable objects
  that produce resources), NOT network servers. No `InitGame`, `PreLogin`, `PostLogin`,
  `Logout`, `HandleStartingNewPlayer`, or `HandleSeamlessTravel` overrides.

**`UmainGameInstance_C`** (parent: `UGameInstance`) — 37 members, 2 functions:
- Only `keepPlayer()` and `setSaveSlotObject()`. No session creation, no travel URLs,
  no `Init()`/`Shutdown()` overrides. Default engine stub.

### PlayerController

**`MyPlayerController_C`** (parent: `PlayerController`) — no native dump entry, no
multiplayer-related functions detected. `BP_RadioPlayerController_C` is for the in-game
radio system (audio streaming), not networking.

### Player pawn

**`AmainPlayer_C`** (parent: `ACharacter`) — 341 members, 475 functions:
- Zero replication-related flags.
- No `Server*`, `Client*`, `Multicast*` functions.
- No `OnRep_*` callback handlers.
- Network-relevant ACharacter base class members (`ReplicatedBasedMovement`,
  `ReplicatedServerLastTransformUpdateTimeStamp`, `RepRootMotion`) exist in the engine
  but are never touched.

### Party Beacon / Matchmaking

The `APartyBeaconClient` and `APartyBeaconHost` classes are present in the dump with
their full member layouts. These are used for UE4's built-in matchmaking flow. However:

- **No Blueprint references them** in `bp_native_link`
- **No Blueprint calls them** in function signatures
- **No Blueprint variable** holds a reference to them

They exist because the engine module was loaded, not because the game uses them.

### FBlueprintSessionResult

Defined in `OnlineSubsystemUtils.hpp` as an empty struct (size 0x108, no members dumped).
This is the return type for `UFindSessionsCallbackProxy::FindSessions()`. The dump
captures the size but not individual members — this is a known limitation of
CXXHeaderDump for some engine structs. The struct exists in memory layout but the
game never instantiates or reads it.

---

## "Server" references in context

Many game classes have "server" in their names, but it refers to in-game **server boxes**
(craftable electronics that provide signals/power), not network servers:

| Class | What "server" means |
|---|---|
| `AserverBox_C` | Craftable server hardware (processing, downloading, power) |
| `Aprop_serverBreaker_C` | Breaks server boxes |
| `Aprop_physModule_serveralert_C` | Server status alert module |
| `Aticker_serverBreaker_C` | Timer that damages servers |
| `AmainGamemode_C::launchServerMinigame` | Starts a minigame on a server box |
| `AmainGamemode_C::breakServer` | Damage/destroy a server box |
| `Uui_serverMinigame_C` | UI for server-box minigames |

---

## What this means for adding multiplayer

### The good (engine infrastructure is intact)

- The `OnlineSubsystemUtils` and `OnlineSubsystem` modules are present and linkable.
- `UIpDriver`, `UIpConnection`, callback proxies all exist in the binary.
- Engine networking RPCs (`UCharacterMovementComponent::ServerMove_*`, etc.) are
  compiled into the engine and functional at the C++ level.

### The bad (nothing is wired up)

- **No replication graph**: Nothing opts into replication, so the NetDriver will have
  zero actors to replicate. Adding multiplayer requires flagging hundreds of variables.
- **No server travel / session management**: `mainGamemode` has no session-aware
  `HandleStartingNewPlayer`, no `HandleSeamlessTravel`, no `GenericPlayerInitialization`.
- **No client-side prediction helpers**: The character movement exists but nothing
  calls ServerMove or flags movement as replicated.
- **Game state is entirely in Blueprints**: `mainPlayer_C` has 341 Blueprint-authored
  variables that would all need replication added. None currently are.

### The realistic path

Adding real multiplayer would require:
1. C++ base class for `mainPlayer_C` with `GetLifetimeReplicatedProps` and Server/Client RPCs
2. C++ GameMode override with `HandleStartingNewPlayer`, `HandleSeamlessTravel`
3. Session management (either via OnlineSubsystemUtils or a custom transport)
4. Replication flags on ~50-100 key variables (position, health, inventory, equipment)
5. Server-authoritative movement (override `UCharacterMovementComponent`)
6. Save-game system rewrite (currently single-slot local-only in `saveSlot_C`)

This is not a "flip a switch" situation — the game was architected ground-up as single-player.

### Ambiguous / needs runtime testing

- Whether the OnlineSubsystem Steam/Null interface actually initializes (the modules
  are loaded but whether `UOnlineSubsystem::Get()` returns a working instance depends
  on command-line args and INI settings that may not be configured).
- Whether the `AOnlineBeacon` hierarchy could be repurposed for a custom lobby without
  using OnlineSubsystem (raw UDP via sockets plugin).
- Whether the existing `AserverBox_C` "server" logic (which has some replication-like
  patterns for syncing between multiple in-game server boxes) could hint at prior
  multiplayer prototyping — needs runtime inspection to confirm.

---

## Summary table

| Layer | Status | Evidence |
|---|---|---|
| NetDriver / NetConnection | **Dormant** | Engine classes referenced but never instantiated by game code |
| OnlineSubsystem | **Dormant** | Present in modules, never called from Blueprints |
| Replication flags | **Absent** | 0 replicated variables, 0 RPC functions across all Blueprints |
| GameMode overrides | **Default only** | No session/travel/player-management overrides |
| PlayerController | **Default only** | No server-travel or multiplayer menu functions |
| Save system | **Single-player** | Local-only save slots, no player separation |
| Party Beacon | **Unused** | Present in dump, zero references from game code |
| Callback Proxies | **Unused** | Engine boilerplate, never called |

**Verdict: Default engine noise, nothing to build on.**
