#!/usr/bin/env python3
"""
build_index.py — builds blueprint_index.db (SQLite) for the VotV Blueprint corpus.

Two data sources are merged per Blueprint class:

1. index/uasset_dump.jsonl — produced by tools/uasset_dump (a small C# tool built on
   UAssetAPI) which binary-parses each .uasset/.uexp directly. This gives authoritative,
   fully-typed structural data: class name, SuperStruct (parent), ClassFlags, implemented
   Interfaces, and every property/function-param with its resolved inner type
   (e.g. an ObjectProperty's PropertyClass, a StructProperty's Struct, an ArrayProperty's
   element type, interface/enum/delegate-signature targets, etc).

2. ANALYZED/cfgs/**/*.html — Kismet-analysis dumps (graphviz/SVG-in-HTML, one per
   Blueprint) produced by the `kismet-analyzer` tool. These contain the fully
   disassembled Kismet bytecode as a control-flow graph. We do NOT re-derive class/
   property/function *signatures* from these (the binary dump is authoritative for
   that) — we only mine two behavioral signals that are NOT recoverable from static
   structural data alone:
     a. Which functions are "event graph" entry stubs (jump straight into the shared
        ExecuteUbergraph_<Class> function) vs standalone callable Functions with their
        own bytecode body.
     b. Which other Blueprint classes (import paths ending in `_C`) this class's
        bytecode references anywhere — i.e. casts to, spawns, or calls into (covers
        EX_DynamicCast/EX_MetaCast targets, EX_ObjectConst literals, function-library
        CDO calls, component class refs, etc). This is a deliberately flat, deduped,
        per-class signal (not broken down instruction-by-instruction).

Usage:
    python3 build_index.py [--content DIR] [--analyzed DIR] [--dump JSONL] [--db OUTPUT.db]

Defaults assume this script lives in <project>/tools/ with siblings Content/, ANALYZED/,
index/ under <project>/.
"""
import argparse
import json
import re
import sqlite3
import sys
from pathlib import Path

# ---------------------------------------------------------------------------
# HTML mining: event-stub detection + cross-Blueprint reference extraction
# ---------------------------------------------------------------------------

# Graphviz edge comments of the form:
#   <!-- someFunc__block_0-&gt;ExecuteUbergraph_ClassName -->
# (the literal text in the file uses the HTML entity &#45;&gt; for "->")
# identify "event graph entry stub" functions: they jump straight into the class's
# shared ubergraph rather than having their own standalone bytecode body.
UBERGRAPH_JUMP_RE = re.compile(r'<!-- (\w+)__block_\d+&#45;&gt;ExecuteUbergraph_\w+ -->')

# Any reference to another *Blueprint* class (by convention, UE always names the
# generated class of a Blueprint asset "<AssetName>_C"). We only match /Game/ paths
# (project content) since /Script/ paths are native C++ engine classes, not Blueprints.
CROSS_BP_REF_RE = re.compile(r'import (/Game/[^<]*?)&#45;&gt;(\w+_C)\b')


def parse_html(path: Path):
    """Return (event_stub_function_names: set[str], class_refs: set[(path, class)])."""
    try:
        content = path.read_text(errors="ignore")
    except OSError:
        return set(), set()

    event_stubs = set(UBERGRAPH_JUMP_RE.findall(content))

    refs = set()
    for game_path, class_name in CROSS_BP_REF_RE.findall(content):
        norm = class_name
        if norm.startswith("Default__"):
            norm = norm[len("Default__"):]
        refs.add((game_path, norm))

    return event_stubs, refs


# ---------------------------------------------------------------------------
# Categorization heuristics (folder path + resolved native root + BP ancestor chain)
# ---------------------------------------------------------------------------

def leaf_of(ref: str) -> str:
    """'import /Script/Engine->Character' -> 'Character'; 'null' -> ''"""
    if not ref or ref in ("null",):
        return ""
    return ref.split("->")[-1]


def is_native(ref: str) -> bool:
    return ref.startswith("import /Script/")


def is_project_bp(ref: str) -> bool:
    return ref.startswith("import /Game/")


def categorize(rel_path: str, root_native: str, bp_chain: list, class_name: str) -> str:
    folder = rel_path.rsplit("/", 1)[0] if "/" in rel_path else ""
    chain_set = set(bp_chain)

    if folder.startswith("umg/") or root_native == "UserWidget" or root_native == "RichTextBlockImageDecorator":
        return "UI / UMG Widget"
    if "/interfaces/" in ("/" + folder + "/") or root_native == "Interface":
        return "Interface"
    if rel_path == "main/mainPlayer":
        return "Player Character"
    if root_native in ("Character", "Pawn") and folder.startswith("objects/npc"):
        return "AI / NPC / Enemy"
    if root_native in ("Character", "Pawn"):
        return "Player / Pawn (other)"
    if root_native == "AIController":
        return "AI Controller"
    if root_native == "PlayerController":
        return "Player Controller"
    if root_native in ("GameModeBase", "GameInstance"):
        return "Game System / Manager"
    if root_native == "LevelScriptActor":
        return "Level / Map Blueprint"
    if root_native == "SaveGame":
        return "Save System"
    if root_native in ("AnimInstance", "AnimNotify", "AnimNotify_PlayMontageNotify", "VehicleAnimInstance", "ControlRig"):
        return "Animation"
    if root_native in ("WheeledVehicle", "VehicleWheel"):
        return "Vehicle"
    if root_native in ("NavArea", "NavArea_Obstacle"):
        return "Navigation"
    if root_native in ("MatineeCameraShake", "RecordCameraManager", "Camera2D"):
        return "Camera"
    if root_native == "BlueprintFunctionLibrary":
        return "Function Library"
    if root_native in ("ActorComponent", "SceneComponent") or folder.startswith("objects/components"):
        return "Actor Component"
    if folder.startswith("objects/triggers") or "triggerBase_C" in chain_set or "trigger_box_C" in chain_set:
        return "Trigger / Volume"
    if folder.startswith("objects/tickers") or "ticker_base_C" in chain_set:
        return "Ticker / Timer System"
    if folder.startswith("objects/minigames"):
        return "Minigame"
    if folder.startswith("objects/dreams"):
        return "Dream Sequence"
    if folder.startswith("objects/caves"):
        return "Cave System"
    if root_native == "Actor" or "prop_C" in chain_set or "actor_save_C" in chain_set:
        return "Interactable Prop / Item"
    if root_native == "Object":
        return "Utility Object"
    return "Other / Unclassified"


# ---------------------------------------------------------------------------
# Main build
# ---------------------------------------------------------------------------

def build(content_root: Path, analyzed_root: Path, dump_path: Path, db_path: Path):
    records = {}
    with dump_path.open() as f:
        for line in f:
            line = line.strip()
            if not line:
                continue
            d = json.loads(line)
            rel = d.get("relPath")
            if not rel or "className" not in d:
                continue
            records[rel] = d

    print(f"Loaded {len(records)} class records from {dump_path}", file=sys.stderr)

    html_data = {}
    html_files = list(analyzed_root.rglob("*.html"))
    for i, hp in enumerate(html_files):
        rel = hp.relative_to(analyzed_root).with_suffix("").as_posix()
        stubs, refs = parse_html(hp)
        html_data[rel] = (stubs, refs, hp.stat().st_size)
        if (i + 1) % 300 == 0:
            print(f"  parsed {i+1}/{len(html_files)} html files...", file=sys.stderr)

    print(f"Parsed {len(html_data)} html files from {analyzed_root}", file=sys.stderr)

    # Build class_name -> superStruct lookup for BP ancestor-chain resolution
    super_by_class = {d["className"]: d.get("superStruct", "null") for d in records.values()}

    def resolve_chain(class_name):
        """Walk SuperStruct chain. Returns (root_native_ref, bp_ancestor_chain[list of class names, nearest first])."""
        chain = []
        seen = set()
        cur = class_name
        while True:
            if cur in seen:
                break
            seen.add(cur)
            sup = super_by_class.get(cur)
            if sup is None:
                return "", chain
            if is_native(sup):
                return leaf_of(sup), chain
            if is_project_bp(sup):
                parent_class = leaf_of(sup)
                chain.append(parent_class)
                cur = parent_class
                continue
            return "", chain
        return "", chain

    db_path.parent.mkdir(parents=True, exist_ok=True)
    if db_path.exists():
        db_path.unlink()
    conn = sqlite3.connect(str(db_path))
    cur = conn.cursor()
    cur.executescript(
        """
        PRAGMA journal_mode=WAL;

        CREATE TABLE classes (
            id INTEGER PRIMARY KEY,
            class_name TEXT NOT NULL,
            rel_path TEXT UNIQUE NOT NULL,
            source_uasset TEXT,
            html_path TEXT,
            html_size_bytes INTEGER,
            super_struct TEXT,
            super_class_name TEXT,
            is_native_parent INTEGER,
            root_native_base TEXT,
            bp_ancestor_chain TEXT,
            class_flags_json TEXT,
            category TEXT,
            num_properties INTEGER,
            num_functions INTEGER,
            num_event_functions INTEGER,
            variables_json TEXT,
            functions_json TEXT
        );

        CREATE TABLE interfaces (
            class_id INTEGER NOT NULL REFERENCES classes(id),
            interface_ref TEXT,
            interface_class TEXT,
            implemented_by_blueprint INTEGER
        );

        CREATE TABLE class_refs (
            class_id INTEGER NOT NULL REFERENCES classes(id),
            ref_path TEXT,
            ref_class TEXT
        );

        CREATE TABLE function_index (
            class_id INTEGER NOT NULL REFERENCES classes(id),
            function_name TEXT,
            is_event_entry INTEGER,
            function_flags_json TEXT
        );

        CREATE INDEX idx_classes_name ON classes(class_name);
        CREATE INDEX idx_classes_category ON classes(category);
        CREATE INDEX idx_interfaces_class ON interfaces(interface_class);
        CREATE INDEX idx_class_refs_ref ON class_refs(ref_class);
        CREATE INDEX idx_function_index_name ON function_index(function_name);
        """
    )

    for rel, d in sorted(records.items()):
        class_name = d["className"]
        super_struct = d.get("superStruct", "null")
        super_class_name = leaf_of(super_struct)
        native_parent = is_native(super_struct)
        root_native, bp_chain = resolve_chain(class_name)

        stubs, refs, html_size = html_data.get(rel, (set(), set(), None))

        properties = d.get("properties", [])
        functions = d.get("functions", [])

        # annotate each function with event-entry classification derived from HTML
        for fn in functions:
            fn["isEventEntry"] = fn["name"] in stubs

        num_events = sum(1 for fn in functions if fn["isEventEntry"])
        category = categorize(rel, root_native, bp_chain, class_name)

        source_uasset = f"Content/{rel}.uasset"
        if not (content_root / f"{rel}.uasset").exists() and (content_root / f"{rel}.umap").exists():
            source_uasset = f"Content/{rel}.umap"

        cur.execute(
            """INSERT INTO classes (class_name, rel_path, source_uasset, html_path, html_size_bytes,
                super_struct, super_class_name, is_native_parent, root_native_base, bp_ancestor_chain,
                class_flags_json, category, num_properties, num_functions, num_event_functions,
                variables_json, functions_json)
               VALUES (?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?,?)""",
            (
                class_name,
                rel,
                source_uasset,
                f"ANALYZED/cfgs/{rel}.html",
                html_size,
                super_struct,
                super_class_name,
                int(native_parent),
                root_native,
                json.dumps(bp_chain),
                json.dumps(d.get("classFlags", [])),
                category,
                len(properties),
                len(functions),
                num_events,
                json.dumps(properties),
                json.dumps(functions),
            ),
        )
        class_id = cur.lastrowid

        for iface in d.get("interfaces", []):
            cur.execute(
                "INSERT INTO interfaces (class_id, interface_ref, interface_class, implemented_by_blueprint) VALUES (?,?,?,?)",
                (class_id, iface.get("class"), leaf_of(iface.get("class", "")), int(bool(iface.get("implementedByBlueprint")))),
            )

        for ref_path, ref_class in sorted(refs):
            cur.execute(
                "INSERT INTO class_refs (class_id, ref_path, ref_class) VALUES (?,?,?)",
                (class_id, ref_path, ref_class),
            )

        for fn in functions:
            cur.execute(
                "INSERT INTO function_index (class_id, function_name, is_event_entry, function_flags_json) VALUES (?,?,?,?)",
                (class_id, fn["name"], int(fn["isEventEntry"]), json.dumps(fn.get("functionFlags", []))),
            )

    conn.commit()

    n_classes = cur.execute("SELECT COUNT(*) FROM classes").fetchone()[0]
    n_funcs = cur.execute("SELECT COUNT(*) FROM function_index").fetchone()[0]
    n_refs = cur.execute("SELECT COUNT(*) FROM class_refs").fetchone()[0]
    n_ifaces = cur.execute("SELECT COUNT(*) FROM interfaces").fetchone()[0]
    print(f"Built {db_path}: {n_classes} classes, {n_funcs} functions, {n_refs} class_refs, {n_ifaces} interface impls", file=sys.stderr)
    conn.close()


def main():
    here = Path(__file__).resolve().parent
    project_root = here.parent
    ap = argparse.ArgumentParser()
    ap.add_argument("--content", type=Path, default=project_root / "Content")
    ap.add_argument("--analyzed", type=Path, default=project_root / "ANALYZED" / "cfgs")
    ap.add_argument("--dump", type=Path, default=project_root / "index" / "uasset_dump.jsonl")
    ap.add_argument("--db", type=Path, default=project_root / "index" / "blueprint_index.db")
    args = ap.parse_args()
    build(args.content, args.analyzed, args.dump, args.db)


if __name__ == "__main__":
    main()
