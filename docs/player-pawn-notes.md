# Player Pawn / Character Blueprint Notes

> Auto-derived from `index/blueprint_index.db` via `tools/query.py --compact mainPlayer_C`.
> Source: `Content/main/mainPlayer.uasset` | Path: `main/mainPlayer` | Engine: UE 4.27

---

## 1. Player Class Identification

There is exactly **one** class in the "Player Character" category:

| Field | Value |
|---|---|
| **Class** | `mainPlayer_C` |
| **SuperStruct** | `import /Script/Engine->Character` (native) |
| **Root native** | `Character` |
| **Variables** | 341 (including Kismet-generated timelines) |
| **Functions** | 441 (291 event-graph entries, 150 standalone) |
| **Interfaces implemented** | `int_player_C`, `int_objects_C`, `int_coms_C`, `cppInterface` (all BP-implemented) |

The `mainGamemode_C` and `mainGameInstance_C` both reference `mainPlayer_C` as a known
Blueprint class. The GameMode's `playerInterface` variable is typed to `ui_UI_C` and
the GameMode references `mainPlayer_C` through its Kismet graph (likely via
`GetPlayerCharacter` / `GetActorOfClass`).

No other class is explicitly designated as "default pawn" — `mainPlayer_C` is the
only Character subclass in the project that isn't an NPC or vehicle.

---

## 2. Variables — Multiplayer Sync Candidates

Variable names below omit the Kismet-generated `CallFunc_*` / `Temp_*` / `K2Node_*`
locals that inflate the raw count to ~300+. Only Blueprint-authored variables are
listed, grouped by their likely multiplayer relevance.

### 2.1 Position / Rotation / Velocity / Movement

| Variable | Type | Flags | Notes |
|---|---|---|---|
| `fallVeloc` | StructProperty (Vector) | Edit, BlueprintVisible | Fall velocity vector |
| `spawnLocation` | StructProperty (Vector) | Edit, BlueprintVisible | Player spawn point |
| `lastRagdollTransform` | StructProperty (Transform) | Edit, BlueprintVisible | Last ragdoll pose |
| `lookAtLocation` | StructProperty (Vector) | Edit, BlueprintVisible | Current look-at target |
| `camLocation` | StructProperty (Vector) | Edit, BlueprintVisible | Camera world position |
| `lastWalk` | StructProperty (Vector) | Edit, BlueprintVisible | Last walk direction |
| `noclipFlyVel` | StructProperty (Vector) | Edit, BlueprintVisible | No-clip flight velocity |
| `sliding` | StructProperty (Vector) | Edit, BlueprintVisible | Sliding velocity |
| `ragVel` | StructProperty (Vector) | Edit, BlueprintVisible | Ragdoll velocity |
| `ragLLoc` | StructProperty (Vector) | Edit, BlueprintVisible | Ragdoll location |
| `lastLoc` | StructProperty (Vector) | Edit, BlueprintVisible | Previous frame location |
| `climbLoc` | StructProperty (Vector) | Edit, BlueprintVisible | Climbing target location |
| `grabRelativeLocation` | StructProperty (Vector) | Edit, BlueprintVisible | Held object relative offset |
| `heavyGrabLocation` | StructProperty (Vector) | Edit, BlueprintVisible | Heavy grab world position |
| `heavyGrabArm` | StructProperty (Vector) | Edit, BlueprintVisible | Heavy grab arm attachment |
| `precPrev` | StructProperty (Vector) | Edit, BlueprintVisible | Precision-placement previous pos |
| `mov_forward` | StructProperty (Vector) | Edit, BlueprintVisible | Smoothed forward movement vector |
| `mov_back` | StructProperty (Vector) | Edit, BlueprintVisible | Smoothed back movement vector |
| `mov_right` | StructProperty (Vector) | Edit, BlueprintVisible | Smoothed right movement vector |
| `mov_left` | StructProperty (Vector) | Edit, BlueprintVisible | Smoothed left movement vector |
| `velRes` | StructProperty (Vector) | Edit, BlueprintVisible | Velocity result accumulator |
| `camPrev` | StructProperty (Vector) | Edit, BlueprintVisible | Previous camera location |
| `lastStep` | StructProperty (Vector) | Edit, BlueprintVisible | Last footstep location |
| `hitResult` | StructProperty (HitResult) | Edit, BlueprintVisible | Last trace hit result |
| `throwTrace` | ArrayProperty (HitResult) | Edit, BlueprintVisible | Throw path trace points |
| `step` | FloatProperty | Edit, BlueprintVisible | Footstep distance accumulator |
| `fallTp` | BoolProperty | Edit, BlueprintVisible | Teleport-on-fall flag |
| `isRunning` | BoolProperty | Edit, BlueprintVisible | Is sprinting |
| `recentlyJumped` | BoolProperty | Edit, BlueprintVisible | Jump cooldown flag |
| `canFallDamage` | BoolProperty | Edit, BlueprintVisible | Fall damage enabled |
| `isFallDamageActive` | BoolProperty | Edit, BlueprintVisible | Fall damage window open |
| `enableWaterFallDamage` | BoolProperty | Edit, BlueprintVisible | Water fall damage toggle |
| `input_jump` | BoolProperty | Edit, BlueprintVisible | Jump key held |
| `input_crouch` | BoolProperty | Edit, BlueprintVisible | Crouch key held |
| `waterJump` | BoolProperty | Edit, BlueprintVisible | Can jump while in water |
| `noclip` | BoolProperty | Edit, BlueprintVisible | No-clip mode active |
| `isClimbing` | BoolProperty | Edit, BlueprintVisible | On a ladder |
| `canAlignToFloor` | BoolProperty | Edit, BlueprintVisible | Floor alignment allowed |
| `beforeCrouch_halfHeight` | FloatProperty | Edit, BlueprintVisible | Half-height before crouch |
| `defaultEyeHeight` | FloatProperty | Edit, BlueprintVisible | Default camera height |

> **Sync priority:** `fallVeloc`, `spawnLocation`, `ragVel`, `ragLLoc`, `lastLoc`,
> `sliding`, `noclipFlyVel`, `mov_*`, `velRes`, `isRunning`, `noclip`, `isClimbing`.

### 2.2 Health / State / Condition

| Variable | Type | Flags | Notes |
|---|---|---|---|
| `dead` | BoolProperty | Edit, BlueprintVisible | Player is dead |
| `isBurning` | BoolProperty | Edit, BlueprintVisible | Currently on fire |
| `burningTime` | FloatProperty | Edit, BlueprintVisible | Remaining burn duration |
| `irradiation` | FloatProperty | Edit, BlueprintVisible | Current radiation level |
| `isRagdoll` | BoolProperty | Edit, BlueprintVisible | Ragdoll mode active |
| `canRagdoll` | BoolProperty | Edit, BlueprintVisible | Ragdoll allowed |
| `canGetUp` | BoolProperty | Edit, BlueprintVisible | Can recover from ragdoll |
| `AutoRagdollGetup` | BoolProperty | Edit, BlueprintVisible | Auto-recover from ragdoll |
| `isWakingUp` | BoolProperty | Edit, BlueprintVisible | Waking up animation |
| `noWakeup` | BoolProperty | Edit, BlueprintVisible | Suppress wakeup |
| `isExhausted_bool` | BoolProperty | Edit, BlueprintVisible | Exhaustion state |
| `skipFatigue` | BoolProperty | Edit, BlueprintVisible | Skip fatigue checks |
| `startInvinc` | BoolProperty | Edit, BlueprintVisible | Spawn invincibility window |
| `inWater` | BoolProperty | Edit, BlueprintVisible | Submerged in water |
| `onWater` | BoolProperty | Edit, BlueprintVisible | Standing on water surface |
| `underwaterPlayer` | BoolProperty | Edit, BlueprintVisible | Fully underwater |
| `air` | FloatProperty | Edit, BlueprintVisible | Remaining breath (0-1) |
| `playerDepth` | FloatProperty | Edit, BlueprintVisible | Depth below surface |
| `waterDepth` | FloatProperty | Edit, BlueprintVisible | Water volume depth |
| `scuba` | IntProperty | Edit, BlueprintVisible | Scuba tank level |
| `scubaAir` | BoolProperty | Edit, BlueprintVisible | Using scuba |
| `isKicked` | BoolProperty | Edit, BlueprintVisible | Recently kicked (MP kick) |
| `kickTime` | FloatProperty | Edit, BlueprintVisible | Kick cooldown timer |
| `canKick` | BoolProperty | Edit, BlueprintVisible | Can be kicked |
| `combat` | BoolProperty | Edit, BlueprintVisible | In combat state |
| `diff` | ByteProperty | Edit, BlueprintVisible | Game difficulty |
| `enableBloodLoss` | BoolProperty | Edit, BlueprintVisible | Blood loss enabled |
| `debugDamage` | BoolProperty | Edit, BlueprintVisible | Debug damage overlay |
| `geigerAlert` | BoolProperty | Edit, BlueprintVisible | Geiger counter alert |
| `emf_time` | FloatProperty | Edit, BlueprintVisible | EMF meter cooldown |
| `emf_maxtime` | FloatProperty | Edit, BlueprintVisible | EMF meter max cooldown |
| `batteryUsage` | FloatProperty | Edit, BlueprintVisible | Flashlight battery drain |
| `foodDraining` | FloatProperty | Edit, BlueprintVisible | Hunger rate |
| `sleepDraining` | FloatProperty | Edit, BlueprintVisible | Fatigue rate |
| `agil` | FloatProperty | Edit, BlueprintVisible | Agility stat |
| `str` | FloatProperty | Edit, BlueprintVisible | Strength stat |
| `pooped` | FloatProperty | Edit, BlueprintVisible | Excrement level (survival) |
| `sleepComfort` | FloatProperty | Edit, BlueprintVisible | Sleep quality metric |
| `lookAtState` | ByteProperty | Edit, BlueprintVisible | Look-at FSM state |

> **Sync priority:** `dead`, `isBurning`, `irradiation`, `isRagdoll`, `inWater`,
> `onWater`, `underwaterPlayer`, `air`, `combat`, `agil`, `str`, `dead`.

### 2.3 Inventory / Equipment / Holding

| Variable | Type | Flags | Notes |
|---|---|---|---|
| `equipment` | ArrayProperty | Edit, BlueprintVisible | Equipment item list |
| `equipmentTags` | ArrayProperty | Edit, BlueprintVisible | Equipment tag list |
| `holding_actor` | ObjectProperty (Actor) | Edit, BlueprintVisible | Currently held object |
| `holding_name` | NameProperty | Edit, BlueprintVisible | Held object identifier |
| `holdMesh` | ObjectProperty (StaticMeshComponent) | Edit, BlueprintVisible | Held object mesh |
| `droppedItem` | ObjectProperty (Actor) | Edit, BlueprintVisible | Last dropped item |
| `lastDroppedItem` | ObjectProperty (Actor) | Edit, BlueprintVisible | Previous dropped item |
| `lastDroppedItem_deleted` | BoolProperty | Edit, BlueprintVisible | Was last drop consumed |
| `controlObject` | ObjectProperty (Actor) | Edit, BlueprintVisible | Controlled device/object |
| `grabsHeavy` | BoolProperty | Edit, BlueprintVisible | Holding heavy object |
| `grab_speed` | FloatProperty | Edit, BlueprintVisible | Grab animation speed |
| `grabLen` | FloatProperty | Edit, BlueprintVisible | Grab arm length |
| `Heavy` | BoolProperty | Edit, BlueprintVisible | Heavy-object mode |
| `weaponData` | StructProperty | Edit, BlueprintVisible | Current weapon stats |
| `equipped_emf` | BoolProperty | Edit, BlueprintVisible | EMF reader equipped |
| `equipped_geiger` | BoolProperty | Edit, BlueprintVisible | Geiger counter equipped |
| `equipped_metalDetec` | BoolProperty | Edit, BlueprintVisible | Metal detector equipped |
| `equipped_krampushat` | BoolProperty | Edit, BlueprintVisible | Krampus hat equipped |
| `justDropped` | BoolProperty | Edit, BlueprintVisible | Drop cooldown |
| `drop_dontCollect` | BoolProperty | Edit, BlueprintVisible | Dropped item can't be picked up |
| `dropped` | BoolProperty | Edit, BlueprintVisible | Player has dropped something |
| `drop_place` | BoolProperty | Edit, BlueprintVisible | Precision-place after drop |
| `hasDropped` | BoolProperty | Edit, BlueprintVisible | Has dropped at least once |
| `actionIndex` | IntProperty | Edit, BlueprintVisible | Selected action index |
| `max_actionIndex` | IntProperty | Edit, BlueprintVisible | Max action options count |
| `hotkeyAction_holdE` | ByteProperty | Edit, BlueprintVisible | Hotkey: hold E action |
| `hotkeyAction_holdR` | ByteProperty | Edit, BlueprintVisible | Hotkey: hold R action |
| `hotkeyAction_pressE` | ByteProperty | Edit, BlueprintVisible | Hotkey: press E action |
| `hotkeyAction_pressR` | ByteProperty | Edit, BlueprintVisible | Hotkey: press R action |
| `hotkeyAction_RLMB` | ByteProperty | Edit, BlueprintVisible | Hotkey: release LMB action |
| `hotkeyAction_RRMB` | ByteProperty | Edit, BlueprintVisible | Hotkey: release RMB action |
| `hotkeyAction_swapE` | BoolProperty | Edit, BlueprintVisible | Hotkey swap E toggle |
| `hotkeyAction_swapR` | BoolProperty | Edit, BlueprintVisible | Hotkey swap R toggle |
| `rapidHoldR` | BoolProperty | Edit, BlueprintVisible | Rapid-hold R detection |

> **Sync priority:** `holding_actor`, `holding_name`, `equipment`, `droppedItem`,
> `grabsHeavy`, `Heavy`, `equipped_*` flags.

---

## 3. Event Graph Entry Points (Summarized)

291 total events. Grouped below by function (not raw Kismet).

### 3.1 Core Engine Events

| Event | Purpose |
|---|---|
| `ReceiveTick` | Per-frame update — drives most movement, input polling, state checks |
| `ReceiveBeginPlay` | Initialization on spawn |
| `intComs_gamemodeBeginPlay` | Post-gamemode-ready init hook |

### 3.2 Input Actions (76 events)

Each action key generates two entries (pressed / released). Major groups:

| Input Group | Actions |
|---|---|
| **Movement** | `forward`, `back`, `right`, `left` (×2 for gamepad + KB) |
| **Look** | `mouseX`, `mouseY` (axis), `MouseWheelAxis` |
| **Actions** | `jump`, `crouch`, `run`, `use`, `fire`, `alt`, `rotate`, `zoom` |
| **Inventory** | `inventory`, `scrollUp`, `scrollDown`, `hotbar_1` through `hotbar_10` |
| **Weapons** | `fire`, `drop`, `activateEquipment` |
| **System** | `Escape`, `quicksave`, `backupsave`, `cheatmenu`, `dismount`, `ragdoll`, `noclip`, `undo`, `debugtp`, `throwPath`, `spawnmenu`, `superscreenshot`, `lockObject` |

### 3.3 Montage / Animation Notifies (30+ events)

Pattern: `OnCompleted_{GUID}`, `OnBlendOut_{GUID}`, `OnInterrupted_{GUID}`,
`OnNotifyBegin_{GUID}`, `OnNotifyEnd_{GUID}` — these fire when specific animation
montage sections end or notify. There are at least 6 unique GUIDs (montage assets).

Also: `montageNotify` (delegate), `playerStepped`, `OnJumped`, `OnLanded`,
`event_landed`, `fallen`, `K2_OnStartCrouch`, `K2_OnEndCrouch`.

### 3.4 Interface Callbacks (`intComs_*`)

These are Blueprint Interface message handlers — other systems invoke behavior
on the player by calling these:

| Event | Likely Purpose |
|---|---|
| `intComs_gamemodeMakeKeys` | Gamemode passes key bindings |
| `intComs_gamemodePostKeys` | Post-binding key sync |
| `intComs_anyKey` | Generic key passthrough |
| `intComs_settingsApplied` | User settings changed |
| `intComs_signalDeleted` / `_saved` | Signal data management |
| `intComs_stuffUpgraded` | Object upgrade notification |
| `intComs_unfoc` / `_unfocused` | UI focus lost |
| `intComs_gamemodePreLoad` | Pre-level-load hook |
| `intComs_propRenderer_finishProps` | Prop rendering complete |
| `intComs_applyColor` / `texturePickerApply` / `triggerSnow` | World-state updates |
| `intComs_unfoc` / `intComs_unfocused` | Widget interaction exit |

### 3.5 Gameplay Events

| Event | Purpose |
|---|---|
| `player_use` / `driveDetached` | Object interaction start/end |
| `playerGrabbed` / `_pre` / `playerHoldPost` / `playerHoldPre` | Object holding lifecycle |
| `playerHandUse_LMB` / `_RMB` | Attack/use with held item |
| `playerHandRelease_LMB` / `_RMB` | Stop attacking/use |
| `playerHandMouseWheel` / `playerHandMouse` | Mouse interaction on held items |
| `damageByPlayer` / `addDamage` / `fireDamage` / `receivedPhyiscsDamage` | Damage sources |
| `impactDamage` / `impactDamageCPP` / `impactSquishCPP` / `fallImpulse` | Physics impacts |
| `exploded` / `reachedByExplosion` | Explosion proximity |
| `ignited` / `startBurning` / `extinguishFire` / `attemptIgnite` | Fire state |
| `microwave` / `microwaveElec` | Microwave interaction |
| `eaten` / `poisonedMessage` | Consumable effects |
| `bitten` / `virus` | Creature attacks |
| `hooked` / `hookTension` / `unhook` | Grappling hook |
| `ladderOn` / `ladder_*` | Ladder climbing |
| `playerSit` / `playerUnsit` / `bindSitDestroyed` / `sitDestroyed` | Sitting system |
| `padlock_lock` / `padlock_unlock` | Lockpicking |
| `insertBattery` / `craftDepleted` / `crafted` | Crafting/inventory |
| `cleanSponge` / `slice` / `digUp` / `crowbarOpen` / `useShovel` | Tool interactions |
| `containerInventoryAnimation` / `resetInventoryAnimation` / `actionListAnimation` | UI animations |
| `wakeup` / `forceWakeup` / `forceGetUp` | Wakeup state machine |
| `returnSignal` / `getSignal` | Signal detector |
| `hungerSound` / `cough` / `breathTimer` / `scubaTimer` / `tinnitus` | Survival FX |
| `reachedByLightning` / `lightningInfluence` | Weather |
| `updateStrAgl` | Stat recalculation |
| `beginPath` / `stopDrawingPath` | Throw trajectory preview |
| `weaponReload` / `playFPAnim` / `playFPAnimScripted` / `firstPersonBodyAnimation` / `beginArmAnim` | Viewmodel animation |

### 3.6 Timeline Completed Events (11 timelines)

`getUpTimeline`, `TL_crouchAnim`, `grab`, `zoom`, `tin_close`, `tin_med`, `tin_far`,
`wakingup`, `invSlideOut`, `Timeline_0` — each fires `__UpdateFunc` / `__FinishedFunc`.

---

## 4. Cross-References

### 4.1 Blueprints Referenced BY mainPlayer_C

| Blueprint | Path | Role |
|---|---|---|
| `lib_C` | `main/lib` | Utility function library (453 callers — most common) |
| `lib_obj_C` | `main/lib_obj` | Object utility functions |
| `prop_C` | `objects/prop` | Base prop class |
| `prop_food_C` | `objects/prop_food` | Food item base |
| `prop_equipment_C` | `objects/prop_equipment` | Equipment base |
| `prop_container_C` | `objects/prop_container` | Container base |
| `prop_dronesack_C` | `objects/prop_dronesack` | Drone backpack |
| `prop_dirtball_C` | `objects/prop_dirtball` | Dirt ball projectile |
| `prop_swinger_C` | `objects/prop_swinger` | Swinger tool |
| `prop_nail*` (6 variants) | `objects/prop_nail*` | Nail gun projectiles |
| `drone_C` | `objects/drone` | Drone object |
| `explosion_C` | `objects/misc/explosion` | Explosion effect |
| `playerRagdoll_C` | `objects/misc/playerRagdoll` | Ragdoll pawn |
| `playerRagdoll_crouch_C` | `objects/misc/playerRagdoll_crouch` | Crouch ragdoll |
| `printedObject_C` | `objects/printedObject` | 3D printer output |
| `blackScreen_C` | `umg/blackScreen` | Fullscreen UI overlay |
| `int_player_C` | `main/interfaces/int_player` | Player interface |
| `int_objects_C` | `main/interfaces/int_objects` | Object interaction interface |
| `int_coms_C` | `main/interfaces/int_coms` | Comms/callback interface |
| `int_save_C` | `main/interfaces/int_save` | Save interface |
| `waterVolume_C` | `objects/waterVolume` | Water volume type |
| `actorChipPile_C` | `objects/actorChipPile` | Chip pile spawner |
| `nail_C` / `nail_ax*` | `objects/nail*` | Nail projectiles |
| `shake_explosion_C` | `audio/misc/shake_explosion` | Explosion camera shake |
| `murderKerfuroDig_C` | `objects/murderKerfuroDig` | Enemy dig spawn |
| `kel_lmao_Skeleton_AnimBlueprint_C` | `meshes/kel/` | Kel animation blueprint |
| `AnimBlueprint_kerfurOmega_regular_C` | `meshes/kerfurAnthro/sk/` | Kerfur anim BP |
| `dirthole_C` | `objects/dirthole` | Dirt hole placement |

### 4.2 Blueprints That Reference mainPlayer_C (72 total)

These are classes whose Kismet bytecode interacts with `mainPlayer_C` — typically
via cast, spawn, GetPlayerCharacter, or interface dispatch.

**Systems:**
- `mainGamemode_C` — the game mode owns player lifecycle
- `lib_C` — utility library has player-aware functions

**AI / NPCs (14 classes):**
- `npc_angryErieFlesh_C`, `npc_arirFollower_C`, `npc_arirGunStealer_C`,
  `npc_funguy_C`, `npc_krampus_C`, `npc_orborb_C`, `antibreather_C`,
  `fossilhound_C`, `grayTest_C`, `grayboar_C`, `grayboar_overcharged_C`,
  `eyer_C`, `humpscare_C`, `tentacleBall_C`

**Interactable Props / Items (30+ classes):**
- `altar_C`, `atm_C`, `birch_C`, `bloodClot_C`, `cremator_C`, `door_C`,
  `prop_*` (boarGray, eriePlush, funGun, grunt, lambert, llama, rake,
  shower, snowballRoll, wMannequin), `sitBox_C`, `wellTp_C`, `tutorialHint_C`,
  `waspSwarm_C`, `morningUfo_C`, `igetis_C`, `laserEmitter_C`, `lakeglow_C`,
  `generatorBuilding_C`, `ghostcar_C`, `goat_C`, `watchYourStepVolume_C`,
  `stolasProtectionVolume_C`

**Actor Components (3 classes):**
- `comp_disintegrate_C`, `comp_metalDetector_C`, `comp_radiation_C`

**Triggers (10 classes):**
- `trigger_agrav_C`, `trigger_box_ragdoll_C`, `trigger_button_cake_C`,
  `trigger_forestMoan_C`, `trigger_locationAmbience_C`, `door_C`

**Level Blueprints:**
- `tutorial3_C`, `tutorial3-1_C`, `tutorial3-2_C`, `untitled_untitled_C`

---

## 5. Multiplayer Sync Summary

### Top-priority replicated candidates (position/state):

- `fallVeloc`, `ragVel`, `ragLLoc`, `lastLoc`, `sliding`, `noclipFlyVel`
- `mov_forward/back/right/left`, `velRes`
- `isRunning`, `noclip`, `isClimbing`, `isRagdoll`, `canRagdoll`
- `dead`, `isBurning`, `irradiation`
- `inWater`, `onWater`, `underwaterPlayer`, `air`
- `holding_actor`, `holding_name`, `grabsHeavy`, `Heavy`
- `equipped_emf`, `equipped_geiger`, `equipped_metalDetec`
- `combat`, `agil`, `str`

### Variables that are client-only (likely no sync needed):

- Camera-relative: `camPrev`, `camLocation`, `lookAtLocation`, `camSpeed`
- Animation timelines: `TL_*`, `getUpTimeline`, `invSlideOut`, `wakingup`, `grab`, `zoom`
- Input state: `input_*`, `inpF_*`, `mouseAxis_*`, `mouseSmoothing`
- UI state: `radialMenu`, `deactivateMouseInput`, `wasActiveInterface`
- `activeInterface` (Widget ref), `ppw` (MaterialInstanceDynamic)

### Replication note:

None of these variables currently carry `CPF_Replicated` or `CPF_RepNotify` flags.
This is a Blueprint-only game — there is no native C++ replication graph. If you
are adding multiplayer, you'll need to add `Replicated` or `RepNotify` flags via
C++ or a plugin that patches the generated class, OR implement an override
`GetLifetimeReplicatedProps` in a C++ subclass of `mainPlayer_C`.

### Tightly coupled systems to watch:

1. **Grab/hold system** (`holding_actor`, `grabsHeavy`, `heavyGrab`) — referenced
   by `lib_C`, `lib_obj_C`, and 30+ prop classes.
2. **Equipment system** (`equipment[]`, `equipped_*` flags) — drives UI display.
3. **Ragdoll** (`isRagdoll`, `ragdollActor` → `playerRagdoll_C`) — spawns sub-object.
4. **Water** (`waterVolumes[]`, `inWater`, `air`) — interacts with `waterVolume_C`.
5. **Inventory actions** (`hotkeyAction_*`, `actionIndex`) — consumed by UI widgets.
