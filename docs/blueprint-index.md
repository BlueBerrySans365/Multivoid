# VotV Blueprint Index — Overview

> Auto-generated summary of the Blueprint class corpus. 1815 classes total.
> See `tools/query.py <ClassName>` for detailed per-class lookup.

---

## Player & Control

| Category | Count | Key Classes |
|---|---|---|
| **Player Character** | 1 | `mainPlayer_C` — the main player (extends `Character`) |
| **Player / Pawn (other)** | 56 | `drballsack_C`, `grayTest_C`, `antibreather_C`, `npc_zombie_C`, various enemy player-pawns |
| **Player Controller** | 2 | `MyPlayerController_C`, `BP_RadioPlayerController_C` |
| **AI Controller** | 1 | `firetankController_C` |

The player character (`mainPlayer_C`) is a 341-variable, 441-function behemoth with 291 event-graph entry points. It implements the `int_player`, `int_objects`, `int_coms`, and `cppInterface` interfaces.

---

## AI / NPCs / Enemies

| Category | Count | Examples |
|---|---|---|
| **AI / NPC / Enemy** | 26 | `npc_zombie_C`, `npc_angryErieFlesh_C`, `npc_arirFollower_C`, `npc_goreSlither_C`, `npc_krampus_C`, `npc_funguy_C` |

NPCs include a zombie family (buckethead, conehead, pumpkinhead, skele, etc.), arir aliens, and various wildlife. Most derive from `Character`/`Pawn`.

---

## Interactable Props / Items

| Category | Count | Examples |
|---|---|---|
| **Interactable Prop / Item** | 1057 | `prop_C`, `prop_food_C`, `prop_equipment_C`, `prop_container_C`, `prop_medkit`, `prop_notebook_paper`, `altar_C`, `bed_C`, `atm_C` |

This is the largest category by far — every pickup, usable object, container, food item, equipment piece, etc.

---

## World / Environment / Managers

| Category | Count | Key Classes |
|---|---|---|
| **Game System / Manager** | 3 | `mainGamemode_C`, `mainGameInstance_C`, `GM_StarterGameMode_C` |
| **Level / Map Blueprint** | 52 | `Starter_C`, `preLoad_C`, `sl_alexpdim_C`, `voidroom_C` |
| **Save System** | 3 | `save_main_C`, `save_settings_C`, `saveSlot_C` |
| **Navigation** | 3 | `NewNavArea_C`, `nav_door_C`, `nav_heavyProp_C` |

---

## Triggers & Volumes

| Category | Count | Examples |
|---|---|---|
| **Trigger / Volume** | 93 | `trigger_*`, `waterVolume_C`, `dreamBase_C` triggers |

---

## UI / UMG Widgets

| Category | Count | Examples |
|---|---|---|
| **UI / UMG Widget** | 132 | `UMG_Copyright_C`, `UMG_RadioPlayerUI_C`, `umg_rufusDea_C`, `blackScreen_C`, various `uicomp_*` slots |

---

## Animation

| Category | Count | Examples |
|---|---|---|
| **Animation** | 88 | `*_Skeleton_AnimBlueprint_C`, `notify_ABstep_C`, `notify_Rufusstep_C`, `*_CtrlRig_*` |

Animation blueprints, anim notifies, and control rigs.

---

## Ticker / Timer System

| Category | Count | Examples |
|---|---|---|
| **Ticker / Timer System** | 31 | `ticker_base_C`, `ticker_beehiveSpawner_C`, `ticker_bushSpawning_C`, `ticker_deerSpawner_C` |

World spawners and periodic systems.

---

## Actor Components

| Category | Count | Examples |
|---|---|---|
| **Actor Component** | 23 | `comp_cognitive_C`, `comp_disintegrate_C`, `comp_emf_C`, `comp_flamethrower_C`, `comp_radiation_C`, `comp_metalDetector_C` |

---

## Cave System

| Category | Count | Examples |
|---|---|---|
| **Cave System** | 21 | `caveMaster_C`, `caveSegment_C`, `coalveinSpawner_C`, `ironVeinSpawner_C` |

---

## Dream Sequences

| Category | Count | Examples |
|---|---|---|
| **Dream Sequence** | 14 | `dreamBase_C`, `dreamBoulder_C`, `dream_burger_C`, `dream_boulders_C` |

---

## Interfaces

| Category | Count | Examples |
|---|---|---|
| **Interface** | 15 | `int_player_C`, `int_objects_C`, `int_coms_C`, `int_save_C`, `int_wire_C`, `int_upgrade_C`, `int_ttrigger_C`, `int_animEvents_C` |

Blueprint interfaces (contracts). `mainPlayer_C` implements `int_player`, `int_objects`, `int_coms`.

---

## Minigames

| Category | Count | Examples |
|---|---|---|
| **Minigame** | 5 | `minigameRoot_C`, `minigame_platformer_C`, `platformer_block_C`, `platformer_enemy_C` |

---

## Camera

| Category | Count | Examples |
|---|---|---|
| **Camera** | 10 | `borgRozitShake_C`, `obeliskEnterShake_C`, `obeliskLandShake_C`, `piramidPingShake_C` |

Camera shake blueprints.

---

## Function Libraries

| Category | Count | Examples |
|---|---|---|
| **Function Library** | 5 | `lib_C`, `lib_converters_C`, `lib_getFunc_C`, `lib_math_C`, `lib_obj_C` |

Blueprint function libraries (static utility functions). `lib_C` is referenced by ~50+ other classes.

---

## Vehicles

| Category | Count | Examples |
|---|---|---|
| **Vehicle** | 2 | `ae_C` (extends `WheeledVehicle`), `wheel1_C` |

---

## Other / Unclassified

| Category | Count | Examples |
|---|---|---|
| **Other / Unclassified** | 170 | `effect_sleepy_C`, `ladder_wood_C`, `playerRagdoll_C` |

---

## Quick Stats

- **Total Blueprint classes:** 1815
- **Total functions:** 16016
- **Total cross-class references:** 3459
- **Total interface implementations:** 231
- **Largest class:** `mainPlayer_C` — 341 variables, 441 functions (291 event entries)
- **Most referenced class:** likely `lib_C` or `mainPlayer_C` — run `python3 tools/query.py --refs lib_C` to confirm

---

## How to Use This Index

```bash
# Look up a class by name (partial match):
python3 tools/query.py mainPlayer

# Exact lookup:
python3 tools/query.py --exact mainPlayer_C

# Look up by file path:
python3 tools/query.py --path main/mainPlayer

# What references this class?
python3 tools/query.py --refs lib_C

# List all categories:
python3 tools/query.py --categories

# List classes in a category:
python3 tools/query.py --category "AI / NPC / Enemy"

# Search across all names/paths/functions:
python3 tools/query.py --search "radiation"
```

---

## Native Class Layouts (CXXHeaderDump)

In addition to Blueprint data, the index includes native C++ class layouts extracted by
UE4SS's **CXXHeaderDump** module. These dumps provide the real memory offsets for every
member variable and function in a class — essential for C++ modding, memory patching, or
understanding what a Blueprint inherits under the hood.

**Source:** `CXXHeaderDump/*.hpp` — parsed by `tools/parse_cxx_headers.py`

### What's in the `native_classes` table

- **class_name** — UE4 name with prefix (`AmainPlayer_C`, `ACharacter`, `USaveGame`)
- **parent_class** — declared parent (walk the chain for full inheritance)
- **native_size** — struct size where available
- **module** — top-level folder the .hpp was found in
- **kind** — `class`, `struct`, or flattened enum-as-struct
- **variables_json** — list of `{type, name, offset, size}` for every member
- **functions_json** — list of `{signature}` for every declared method

### Blueprint ↔ Native linking

The `bp_native_link` table connects Blueprint classes to their native counterparts:
- **`self`** — the Blueprint class's own native layout (e.g. `mainPlayer_C` ↔ `AmainPlayer_C`)
- **`direct_parent`**, **`ancestor_N`** — parents found in the dump
- **`external_root`** — the engine root class (not in dump, e.g. `ACharacter`)

### Example queries

```bash
# Look up native layout of the player class (offsets for every field):
python3 tools/query.py --native AmainPlayer_C

# Show full inheritance chain for a Blueprint class:
python3 tools/query.py --native-chain mainPlayer_C
# Output:
#   AmainPlayer_C (self) -> ACharacter
#   Character (engine root)

# When looking up any Blueprint, native chain shows inline:
python3 tools/query.py --compact mainPlayer_C
# ... includes:
#   Native inheritance chain:
#     AmainPlayer_C (self) -> parent: ACharacter
#     Character (engine root)
```

### Coverage

- **2230** native class/struct layouts (includes engine classes like `ACharacter`, `APawn`)
- **177** USTRUCT definitions
- **76** UENUM definitions
- **1815** Blueprint↔native links

### Notes for C++ modding

- Member offsets in the dump are hex (e.g. `0x04C0`). Add the module base address at runtime.
- Blueprint-only variables (added in the Blueprint editor) appear at offsets after the
  native base class layout — the dump captures them since they're serialized into the
  generated class.
- Not every engine class is in the dump; classes from engine modules that weren't
  explicitly dumped will appear as `external_root` links pointing to their declared name.
- To add more classes to the dump, run UE4SS's CXXHeaderDump again with a broader filter
  or target specific modules, then re-run `python3 tools/parse_cxx_headers.py`.
