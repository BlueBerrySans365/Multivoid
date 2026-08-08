#!/usr/bin/env python3
"""
parse_cxx_headers.py — parses UE4SS CXXHeaderDump .hpp files into blueprint_index.db.

CXXHeaderDump (a UE4SS dumper module) produces one .hpp per class/struct/enum:
  - Classes:  class AClassName : public ParentClass { ... };
  - Structs:  struct FStructName { ... }; // Size: 0xNN
  - Enums:    enum class EName { ... }; or namespace EName { enum Type { ... }; };
  - Members:  type Name; // 0xOFFSET (size: 0xSIZE)
  - Functions: returntype funcName(params);  (no body, no offset)

Output: populates native_classes, native_variables, native_functions, native_enums,
and bp_native_link in the same blueprint_index.db so that Blueprint classes can be
cross-referenced with their native base class layouts.

Usage:
    python3 tools/parse_cxx_headers.py [--dir PATH] [--db PATH]

Defaults: dir=CXXHeaderDump/ sibling, db=index/blueprint_index.db sibling.
"""
import argparse
import json
import re
import sqlite3
import sys
from pathlib import Path

MEMBER_RE = re.compile(
    r'^\s+([\w<>:,\*\&\s\?]+?)\s+(\w+)\s*;\s*//\s*(0x[0-9A-Fa-f]+)\s*\(size:\s*(0x[0-9A-Fa-f]+)\)'
)
FUNC_RE = re.compile(
    r'^\s+((?:virtual\s+)?[\w<>:,\*\&\s\?]+?\s+\w+\s*\([^)]*\))\s*;'
)
CLASS_DECL_RE = re.compile(
    r'^class\s+(\w+)\s*:\s*public\s+(\w+)'
)
STRUCT_DECL_RE = re.compile(
    r'^struct\s+(\w+)\s*(//\s*Size:\s*(0x[0-9A-Fa-f]+))?'
)
STRUCT_END_RE = re.compile(
    r'^\};\s*//\s*Size:\s*(0x[0-9A-Fa-f]+)'
)
ENUM_CLASS_RE = re.compile(
    r'^enum\s+class\s+(\w+)\s*(?::s*\w+)?\s*\{'
)
ENUM_NAMESPACE_RE = re.compile(
    r'^namespace\s+(\w+)\s*\{\s*enum\s+Type\s*\{'
)
ENUM_VALUE_RE = re.compile(
    r'^\s+(\w+)\s*(?:=\s*(\d+))?\s*,?'
)


def strip_comments(line):
    """Remove C++ line comments but keep // inside strings (rare in dumps)."""
    idx = line.find('//')
    if idx >= 0:
        return line[:idx].rstrip()
    return line.rstrip()


def parse_file(path: Path):
    """Parse a single .hpp file. Returns a dict describing what was found."""
    try:
        content = path.read_text(errors="ignore")
    except OSError:
        return None

    lines = content.splitlines()
    result = {
        "kind": None,
        "name": None,
        "parent": None,
        "size": None,
        "module": None,
        "is_enum_class": False,
        "members": [],
        "functions": [],
        "enum_values": [],
    }

    in_enum = False
    enum_name = None
    enum_class = False
    brace_depth = 0
    in_class_body = False
    class_brace_depth = 0

    for raw_line in lines:
        line = raw_line.rstrip()

        if not result["kind"]:
            m = ENUM_NAMESPACE_RE.match(line)
            if m:
                result["kind"] = "enum"
                result["name"] = m.group(1)
                enum_name = m.group(1)
                in_enum = True
                continue

            m = ENUM_CLASS_RE.match(line)
            if m:
                result["kind"] = "enum"
                result["name"] = m.group(1)
                result["is_enum_class"] = True
                in_enum = True
                continue

            m = CLASS_DECL_RE.match(line)
            if m:
                result["kind"] = "class"
                result["name"] = m.group(1)
                result["parent"] = m.group(2)
                continue

            m = STRUCT_DECL_RE.match(line)
            if m:
                result["kind"] = "struct"
                result["name"] = m.group(1)
                result["size"] = m.group(3)
                continue

        if in_enum:
            if '=' in line or ',' in line or re.match(r'^\s+\w+', line):
                m = ENUM_VALUE_RE.match(raw_line)
                if m:
                    result["enum_values"].append((m.group(1), m.group(2)))
            if '}' in line:
                in_enum = False
            continue

        if result["kind"] == "class":
            if '{' in line and not in_class_body:
                in_class_body = True
                class_brace_depth = 1
                continue
            if in_class_body:
                class_brace_depth += line.count('{') - line.count('}')
                if class_brace_depth <= 0:
                    break

                m = MEMBER_RE.match(raw_line)
                if m:
                    vtype = m.group(1).strip()
                    vname = m.group(2)
                    offset = m.group(3)
                    size = m.group(4)
                    result["members"].append({
                        "type": vtype,
                        "name": vname,
                        "offset": offset,
                        "size": size,
                    })
                    continue

                m = FUNC_RE.match(raw_line)
                if m:
                    sig = m.group(1).strip()
                    result["functions"].append({"signature": sig})
                    continue

        if result["kind"] == "struct":
            m = MEMBER_RE.match(raw_line)
            if m:
                vtype = m.group(1).strip()
                vname = m.group(2)
                offset = m.group(3)
                size = m.group(4)
                result["members"].append({
                    "type": vtype,
                    "name": vname,
                    "offset": offset,
                    "size": size,
                })
                continue
            m = STRUCT_END_RE.match(line)
            if m:
                result["size"] = m.group(1)
                break

    if result["kind"] is None:
        return None

    return result


def ensure_tables(conn):
    cur = conn.cursor()
    cur.executescript("""
        CREATE TABLE IF NOT EXISTS native_classes (
            id INTEGER PRIMARY KEY,
            class_name TEXT UNIQUE NOT NULL,
            parent_class TEXT,
            native_size TEXT,
            module TEXT,
            kind TEXT,
            source_file TEXT,
            variables_json TEXT,
            functions_json TEXT
        );

        CREATE TABLE IF NOT EXISTS native_enums (
            id INTEGER PRIMARY KEY,
            enum_name TEXT NOT NULL,
            is_enum_class INTEGER,
            module TEXT,
            source_file TEXT,
            values_json TEXT
        );

        CREATE TABLE IF NOT EXISTS bp_native_link (
            class_id INTEGER NOT NULL REFERENCES classes(id),
            native_class_name TEXT NOT NULL,
            link_type TEXT NOT NULL
        );

        CREATE INDEX IF NOT EXISTS idx_native_classes_name ON native_classes(class_name);
        CREATE INDEX IF NOT EXISTS idx_native_enums_name ON native_enums(enum_name);
        CREATE INDEX IF NOT EXISTS idx_bp_native_link_native ON bp_native_link(native_class_name);
    """)


def infer_module(path: Path, analyzed_root: Path) -> str:
    try:
        rel = path.relative_to(analyzed_root)
        parts = rel.parts
        if len(parts) > 1:
            return parts[0]
    except ValueError:
        pass
    return ""


def build_native_index(dump_dir: Path, db_path: Path):
    conn = sqlite3.connect(str(db_path))
    ensure_tables(conn)
    cur = conn.cursor()

    hpp_files = sorted(dump_dir.glob("*.hpp"))
    print(f"Found {len(hpp_files)} .hpp files in {dump_dir}", file=sys.stderr)

    n_classes = 0
    n_structs = 0
    n_enums = 0

    for i, hpp in enumerate(hpp_files):
        parsed = parse_file(hpp)
        if parsed is None:
            continue

        kind = parsed["kind"]
        name = parsed["name"]
        source = hpp.name

        if kind == "class":
            n_classes += 1
            cur.execute(
                """INSERT OR REPLACE INTO native_classes
                    (class_name, parent_class, native_size, module, kind, source_file,
                     variables_json, functions_json)
                   VALUES (?,?,?,?,?,?,?,?)""",
                (
                    name,
                    parsed.get("parent"),
                    parsed.get("size"),
                    infer_module(hpp, dump_dir),
                    "class",
                    source,
                    json.dumps(parsed["members"]),
                    json.dumps(parsed["functions"]),
                ),
            )
        elif kind == "struct":
            n_structs += 1
            cur.execute(
                """INSERT OR REPLACE INTO native_classes
                    (class_name, parent_class, native_size, module, kind, source_file,
                     variables_json, functions_json)
                   VALUES (?,?,?,?,?,?,?,?)""",
                (
                    name,
                    None,
                    parsed.get("size"),
                    infer_module(hpp, dump_dir),
                    "struct",
                    source,
                    json.dumps(parsed["members"]),
                    "[]",
                ),
            )
        elif kind == "enum":
            n_enums += 1
            cur.execute(
                """INSERT OR REPLACE INTO native_enums
                    (enum_name, is_enum_class, module, source_file, values_json)
                   VALUES (?,?,?,?,?)""",
                (
                    name,
                    1 if parsed.get("is_enum_class") else 0,
                    infer_module(hpp, dump_dir),
                    source,
                    json.dumps(parsed["enum_values"]),
                ),
            )

        if (i + 1) % 1000 == 0:
            print(f"  processed {i+1}/{len(hpp_files)} files...", file=sys.stderr)

    conn.commit()
    print(
        f"Loaded {n_classes} classes, {n_structs} structs, {n_enums} enums",
        file=sys.stderr,
    )

    build_bp_native_link(conn)

    conn.close()
    print(f"Database updated: {db_path}", file=sys.stderr)


def ue_prefix(name: str) -> list:
    """Given a raw class name like 'Character', return possible UE4 prefixed variants."""
    if not name:
        return []
    if name.startswith("U") or name.startswith("A") or name.startswith("F"):
        return [name]
    return [f"A{name}", f"U{name}", f"F{name}", name]


def normalize_ue(name: str) -> str:
    """Strip UE4 prefix for comparison: ACharacter -> Character."""
    if name and len(name) > 1 and name[0] in ("A", "U", "F") and name[1].isupper():
        return name[1:]
    return name


def build_bp_native_link(conn):
    """Link Blueprint classes to their ultimate native base class.

    The Blueprint 'classes' table uses names like 'mainPlayer_C' (no prefix).
    The native dump uses 'AmainPlayer_C' (with UE4 prefix).
    We match by stripping prefixes for comparison.
    """
    cur = conn.cursor()

    cur.execute("SELECT id, class_name, super_struct FROM classes")
    bp_classes = [(row[0], row[1], row[2]) for row in cur.fetchall()]

    cur.execute("SELECT class_name, parent_class FROM native_classes WHERE kind='class'")
    raw_native_parents = {row[0]: row[1] for row in cur.fetchall()}

    # Build normalized lookup: "Character" -> "ACharacter"
    normalized_to_native = {}
    for nname in raw_native_parents:
        normalized_to_native[normalize_ue(nname)] = nname

    links = 0
    for bp_id, bp_name, super_struct in bp_classes:
        super_raw = ""
        if super_struct and super_struct.startswith("import "):
            parts = super_struct.split("->")
            if len(parts) >= 2:
                super_raw = parts[-1].strip()

        if not super_raw:
            continue

        # Try to find a matching native class for the direct parent
        for candidate in ue_prefix(super_raw):
            if candidate in raw_native_parents:
                cur.execute(
                    "INSERT INTO bp_native_link (class_id, native_class_name, link_type) VALUES (?,?,?)",
                    (bp_id, candidate, "direct_parent"),
                )
                links += 1
                trace_native_chain(cur, bp_id, candidate, raw_native_parents)
                break
        else:
            # Direct parent not in dump — might be engine class (ACharacter etc.)
            # Record it as external_root
            cur.execute(
                "INSERT INTO bp_native_link (class_id, native_class_name, link_type) VALUES (?,?,?)",
                (bp_id, super_raw, "external_root"),
            )
            links += 1

        # Also try to link the Blueprint class itself to its native dump entry
        for candidate in ue_prefix(bp_name):
            if candidate in raw_native_parents:
                cur.execute(
                    "INSERT INTO bp_native_link (class_id, native_class_name, link_type) VALUES (?,?,?)",
                    (bp_id, candidate, "self"),
                )
                break

    conn.commit()
    print(f"Created {links} Blueprint->native links", file=sys.stderr)


def trace_native_chain(cur, class_id, start_native, native_parents):
    """Walk native parent chain and record all ancestors."""
    seen = {start_native}
    cur_name = start_native
    depth = 0
    while cur_name in native_parents and depth < 30:
        parent = native_parents[cur_name]
        if parent is None or parent in seen:
            break
        seen.add(parent)
        depth += 1
        link_type = "root_native" if parent not in native_parents else f"ancestor_{depth}"
        cur.execute(
            "INSERT INTO bp_native_link (class_id, native_class_name, link_type) VALUES (?,?,?)",
            (class_id, parent, link_type),
        )
        cur_name = parent


def main():
    here = Path(__file__).resolve().parent
    project_root = here.parent
    ap = argparse.ArgumentParser()
    ap.add_argument("--dir", type=Path, default=project_root / "CXXHeaderDump")
    ap.add_argument("--db", type=Path, default=project_root / "index" / "blueprint_index.db")
    args = ap.parse_args()
    build_native_index(args.dir, args.db)


if __name__ == "__main__":
    main()
