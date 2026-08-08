#!/usr/bin/env python3
"""
query.py — quick CLI lookup tool for the VotV Blueprint index.

Usage:
    query.py <ClassName>            # look up by exact or partial class name
    query.py --path <relPath>      # look up by relative path (e.g. "main/mainPlayer")
    query.py --refs <ClassName>    # show what <ClassName> is referenced BY (dependents)
    query.py --category <Cat>      # list all classes in a category
    query.py --categories         # list all categories with counts
    query.py --search <keyword>    # search class names, function names, and paths

The index database lives at ../index/blueprint_index.db relative to this script.
"""
import argparse
import json
import sqlite3
import sys
from pathlib import Path


def db_path():
    return Path(__file__).resolve().parent.parent / "index" / "blueprint_index.db"


def connect():
    p = db_path()
    if not p.exists():
        print(f"Database not found at {p}. Run tools/build_index.py first.", file=sys.stderr)
        sys.exit(1)
    return sqlite3.connect(str(p))


def row_to_dict(cursor, row):
    if row is None:
        return None
    return {col[0]: row[i] for i, col in enumerate(cursor.description)}


def query_class(conn, name, exact=False):
    cur = conn.cursor()
    if exact:
        cur.execute("SELECT * FROM classes WHERE class_name = ?", (name,))
    else:
        cur.execute("SELECT * FROM classes WHERE class_name LIKE ?", (f"%{name}%",))
    rows = cur.fetchall()
    cols = [d[0] for d in cur.description]
    return [{cols[i]: r[i] for i in range(len(cols))} for r in rows]


def query_by_path(conn, rel_path):
    cur = conn.cursor()
    cur.execute("SELECT * FROM classes WHERE rel_path = ?", (rel_path,))
    row = cur.fetchone()
    if row is None:
        return None
    cols = [d[0] for d in cur.description]
    return {cols[i]: row[i] for i in range(len(cols))}


def query_referrers(conn, class_name):
    """Find all classes that reference the given class."""
    cur = conn.cursor()
    cur.execute("""
        SELECT c.class_name, c.rel_path, c.category, cr.ref_path
        FROM class_refs cr
        JOIN classes c ON cr.class_id = c.id
        WHERE cr.ref_class = ?
        ORDER BY c.class_name
    """, (class_name,))
    return cur.fetchall()


def query_category(conn, category):
    cur = conn.cursor()
    cur.execute("SELECT class_name, rel_path, num_properties, num_functions FROM classes WHERE category = ? ORDER BY class_name", (category,))
    return cur.fetchall()


def query_categories(conn):
    cur = conn.cursor()
    cur.execute("SELECT category, COUNT(*) as cnt FROM classes GROUP BY category ORDER BY cnt DESC")
    return cur.fetchall()


def search_all(conn, keyword):
    cur = conn.cursor()
    kw = f"%{keyword}%"
    cur.execute("""
        SELECT DISTINCT c.class_name, c.rel_path, c.category
        FROM classes c
        WHERE c.class_name LIKE ? OR c.rel_path LIKE ?
        UNION
        SELECT c.class_name, c.rel_path, c.category
        FROM function_index fi
        JOIN classes c ON fi.class_id = c.id
        WHERE fi.function_name LIKE ?
        LIMIT 100
    """, (kw, kw, kw))
    return cur.fetchall()


def get_functions(conn, class_name):
    cur = conn.cursor()
    cur.execute("""
        SELECT fi.function_name, fi.is_event_entry, fi.function_flags_json
        FROM function_index fi
        JOIN classes c ON fi.class_id = c.id
        WHERE c.class_name = ?
        ORDER BY fi.is_event_entry DESC, fi.function_name
    """, (class_name,))
    return cur.fetchall()


def get_refs(conn, class_name):
    cur = conn.cursor()
    cur.execute("""
        SELECT cr.ref_path, cr.ref_class
        FROM class_refs cr
        JOIN classes c ON cr.class_id = c.id
        WHERE c.class_name = ?
        ORDER BY cr.ref_class
    """, (class_name,))
    return cur.fetchall()


def get_interfaces(conn, class_name):
    cur = conn.cursor()
    cur.execute("""
        SELECT i.interface_ref, i.interface_class, i.implemented_by_blueprint
        FROM interfaces i
        JOIN classes c ON i.class_id = c.id
        WHERE c.class_name = ?
    """, (class_name,))
    return cur.fetchall()


def get_native_links(conn, class_name):
    """Return list of (native_class_name, link_type, parent_class) for a Blueprint class."""
    cur = conn.cursor()
    cur.execute("""
        SELECT bnl.native_class_name, bnl.link_type, nc.parent_class
        FROM bp_native_link bnl
        JOIN classes c ON bnl.class_id = c.id
        LEFT JOIN native_classes nc ON bnl.native_class_name = nc.class_name
        WHERE c.class_name = ?
        ORDER BY bnl.link_type
    """, (class_name,))
    return cur.fetchall()


def get_native_class(conn, class_name):
    """Look up a native class by exact name."""
    cur = conn.cursor()
    cur.execute("""
        SELECT class_name, parent_class, native_size, module, kind, source_file,
               variables_json, functions_json
        FROM native_classes
        WHERE class_name = ?
    """, (class_name,))
    row = cur.fetchone()
    if row is None:
        return None
    cols = [d[0] for d in cur.description]
    return {cols[i]: row[i] for i in range(len(cols))}


def get_native_chain(conn, class_name):
    """Return the full native inheritance chain from a Blueprint class to root native."""
    chain = []
    cur = conn.cursor()
    cur.execute("""
        SELECT bnl.native_class_name, bnl.link_type
        FROM bp_native_link bnl
        JOIN classes c ON bnl.class_id = c.id
        WHERE c.class_name = ?
        ORDER BY
            CASE bnl.link_type
                WHEN 'self' THEN 0
                WHEN 'direct_parent' THEN 1
                WHEN 'ancestor_1' THEN 2
                WHEN 'ancestor_2' THEN 3
                WHEN 'ancestor_3' THEN 4
                WHEN 'ancestor_4' THEN 5
                WHEN 'root_native' THEN 6
                WHEN 'external_root' THEN 7
                ELSE 8
            END
    """, (class_name,))
    rows = cur.fetchall()
    for native_name, link_type in rows:
        nrow = cur.execute(
            "SELECT parent_class FROM native_classes WHERE class_name = ?",
            (native_name,)
        ).fetchone()
        parent = nrow[0] if nrow else None
        chain.append((native_name, link_type, parent))
    return chain


def is_internal_var(name):
    """Kismet decompiled bytecode exposes implicit locals as function params.

    These start with CallFunc_, Temp_, K2Node_, EX_, etc — filter them out
    so the output shows only the Blueprint-authored parameters.
    """
    prefixes = ("CallFunc_", "Temp_", "K2Node_", "EX_", "NodeCentric_", "Temp_object_",
                "Temp_bool_", "Temp_float_", "Temp_int_", "Temp_byte_", "Temp_name_",
                "Temp_text_", "Temp_wildcard_", "Temp_struct_", "Temp_array_")
    return any(name.startswith(p) for p in prefixes)


def print_native_detail(conn, native_cls, show_members=True):
    name = native_cls["class_name"]
    print(f"\n{'='*70}")
    print(f"  {name}  [NATIVE]")
    print(f"{'='*70}")
    print(f"  Kind:            {native_cls['kind']}")
    if native_cls.get("parent_class"):
        print(f"  Parent:          {native_cls['parent_class']}")
    if native_cls.get("native_size"):
        print(f"  Native size:     {native_cls['native_size']}")
    if native_cls.get("module"):
        print(f"  Module:          {native_cls['module']}")
    print(f"  Source file:     {native_cls['source_file']}")

    variables = json.loads(native_cls["variables_json"]) if native_cls["variables_json"] else []
    functions = json.loads(native_cls["functions_json"]) if native_cls["functions_json"] else []

    if show_members and variables:
        print(f"\n  Native members ({len(variables)}):")
        for v in variables[:50]:
            vtype = v.get("type", "?")
            vname = v.get("name", "?")
            offset = v.get("offset", "?")
            size = v.get("size", "?")
            print(f"    {offset:8s} {size:5s} {vtype:40s} {vname}")
        if len(variables) > 50:
            print(f"    ... and {len(variables) - 50} more (use --full-members)")

    if functions:
        print(f"\n  Native functions ({(len(functions))}):")
        for f in functions[:30]:
            print(f"    {f['signature']}")
        if len(functions) > 30:
            print(f"    ... and {len(functions) - 30} more")

    bp_refs = search_all(conn, name)
    if bp_refs:
        print(f"\n  Referenced by Blueprint classes ({len(bp_refs)}):")
        for bp_name, bp_path, bp_cat in bp_refs[:15]:
            print(f"    {bp_name:40s} [{bp_cat}]")
        if len(bp_refs) > 15:
            print(f"    ... and {len(bp_refs) - 15} more")

    print()


def print_class_detail(conn, cls, compact=False):
    name = cls["class_name"]
    print(f"\n{'='*70}")
    print(f"  {name}")
    print(f"{'='*70}")
    print(f"  Path:            {cls['rel_path']}")
    print(f"  Source:          {cls['source_uasset']}")
    print(f"  Category:        {cls['category']}")
    print(f"  SuperStruct:     {cls['super_class_name']} {'(native)' if cls['is_native_parent'] else '(blueprint)'}")
    if cls["root_native_base"]:
        print(f"  Root native:     {cls['root_native_base']}")
    if cls["bp_ancestor_chain"]:
        chain = json.loads(cls["bp_ancestor_chain"])
        if chain:
            print(f"  BP ancestor:     {' -> '.join(chain)}")

    # Variables
    variables = json.loads(cls["variables_json"]) if cls["variables_json"] else []
    if compact:
        variables = [v for v in variables if not is_internal_var(v.get("name", ""))]
    print(f"\n  Variables ({len(variables)}):")
    for v in variables:
        vtype = v.get("type", "?")
        vname = v.get("name", "?")
        flags = v.get("flags", [])
        flag_str = "|".join(flags) if flags else ""
        extra = ""
        if "propertyClass" in v:
            extra = f" [{v['propertyClass'].split('->')[-1]}]"
        elif "struct" in v:
            extra = f" [{v['struct'].split('->')[-1]}]"
        replicated = " [REPLICATED]" if any("Replicated" in f for f in flags) else ""
        print(f"    {vtype:24s} {vname:40s} {flag_str}{extra}{replicated}")

    # Functions
    functions = json.loads(cls["functions_json"]) if cls["functions_json"] else []
    events = [f for f in functions if f.get("isEventEntry")]
    non_events = [f for f in functions if not f.get("isEventEntry")]
    print(f"\n  Event Graph Entries ({len(events)}):")
    for f in events:
        print(f"    [EVENT] {f['name']}")
    print(f"\n  Functions ({len(non_events)}):")
    for f in non_events:
        params = f.get("params", [])
        if compact:
            params = [p for p in params if not is_internal_var(p.get("name", ""))]
        param_strs = []
        for p in params:
            ptype = p.get("type", "?")
            pname = p.get("name", "?")
            is_out = " [out]" if any("OutParm" in fl for fl in p.get("flags", [])) else ""
            param_strs.append(f"{ptype} {pname}{is_out}")
        print(f"    {f['name']}({', '.join(param_strs)})")

    # Cross-references
    refs = get_refs(conn, name)
    if refs:
        print(f"\n  References to other Blueprints ({len(refs)}):")
        for ref_path, ref_class in refs:
            print(f"    {ref_class}  ({ref_path})")

    # Referred BY
    referrers = query_referrers(conn, name)
    if referrers:
        print(f"\n  Referenced BY ({len(referrers)} classes):")
        for rname, rpath, rcat, _ in referrers[:30]:
            print(f"    {rname}  ({rpath})  [{rcat}]")
        if len(referrers) > 30:
            print(f"    ... and {len(referrers) - 30} more")

    # Interfaces
    ifaces = get_interfaces(conn, name)
    if ifaces:
        print(f"\n  Implements interfaces:")
        for iref, iclass, ibp in ifaces:
            bp_str = " (BP-implemented)" if ibp else " (native)"
            print(f"    {iclass}{bp_str}")

    # Native class chain
    native_chain = get_native_chain(conn, name)
    if native_chain:
        print(f"\n  Native inheritance chain:")
        for nname, link_type, parent in native_chain:
            type_label = ""
            if link_type == "self":
                type_label = " (self)"
            elif link_type == "external_root":
                type_label = " (engine root)"
            elif link_type and link_type.startswith("ancestor"):
                type_label = f" ({link_type})"
            parent_str = f" -> parent: {parent}" if parent else ""
            print(f"    {nname}{type_label}{parent_str}")

    print()


def main():
    ap = argparse.ArgumentParser(description="Query the VotV Blueprint index")
    ap.add_argument("name", nargs="?", help="Class name (or partial) to look up")
    ap.add_argument("--path", help="Look up by relative path (e.g. main/mainPlayer)")
    ap.add_argument("--exact", action="store_true", help="Match class name exactly")
    ap.add_argument("--refs", metavar="CLASS", help="Show classes that reference CLASS")
    ap.add_argument("--category", help="List all classes in a category")
    ap.add_argument("--categories", action="store_true", help="List all categories")
    ap.add_argument("--search", help="Search across names, paths, and functions")
    ap.add_argument("--compact", action="store_true",
                    help="Hide Kismet-generated internal variables/params (CallFunc_*, Temp_*, K2Node_*)")
    ap.add_argument("--native", metavar="CLASS",
                    help="Look up a native class by name (from CXXHeaderDump) with full layout")
    ap.add_argument("--native-chain", metavar="CLASS",
                    help="Show full native inheritance chain for a Blueprint class")
    args = ap.parse_args()

    conn = connect()

    if args.categories:
        print("\nBlueprint categories:")
        for cat, cnt in query_categories(conn):
            print(f"  {cat:40s} {cnt}")
        conn.close()
        return

    if args.category:
        rows = query_category(conn, args.category)
        if not rows:
            print(f"No classes found in category '{args.category}'")
            print("Available categories:")
            for cat, cnt in query_categories(conn):
                print(f"  {cat}")
        else:
            print(f"\nClasses in category '{args.category}' ({len(rows)}):")
            for name, path, nprop, nfunc in rows:
                print(f"  {name:50s} {path}  ({nprop} vars, {nfunc} funcs)")
        conn.close()
        return

    if args.refs:
        referrers = query_referrers(conn, args.refs)
        if not referrers:
            print(f"No classes reference '{args.refs}'")
        else:
            print(f"\nClasses that reference '{args.refs}' ({len(referrers)}):")
            for rname, rpath, rcat, rref in referrers:
                print(f"  {rname:50s} [{rcat}]  ({rpath})")
        conn.close()
        return

    if args.search:
        results = search_all(conn, args.search)
        if not results:
            print(f"No results for '{args.search}'")
        else:
            print(f"\nSearch results for '{args.search}' ({len(results)}):")
            for name, path, cat in results:
                print(f"  {name:50s} [{cat}]  ({path})")
        conn.close()
        return

    if args.native:
        native_cls = get_native_class(conn, args.native)
        if native_cls is None:
            print(f"No native class '{args.native}' found in CXXHeaderDump index")
            print("Tip: use --search to find similar names")
        else:
            print_native_detail(conn, native_cls)
        conn.close()
        return

    if args.native_chain:
        chain = get_native_chain(conn, args.native_chain)
        if not chain:
            print(f"No native chain found for '{args.native_chain}'")
        else:
            print(f"\nNative inheritance chain for {args.native_chain}:")
            for nname, link_type, parent in chain:
                type_label = ""
                if link_type == "self":
                    type_label = " (self)"
                elif link_type == "external_root":
                    type_label = " (engine root)"
                elif link_type and link_type.startswith("ancestor"):
                    type_label = f" ({link_type})"
                parent_str = f" -> {parent}" if parent else ""
                print(f"  {nname}{type_label}{parent_str}")
        conn.close()
        return

    if args.path:
        cls = query_by_path(conn, args.path)
        if cls is None:
            print(f"No class found with path '{args.path}'")
        else:
            print_class_detail(conn, cls, compact=args.compact)
        conn.close()
        return

    if args.name:
        results = query_class(conn, args.name, exact=args.exact)
        if not results:
            print(f"No class matching '{args.name}'")
            print("Tip: use --search for broader search across functions and paths")
        elif len(results) == 1:
            print_class_detail(conn, results[0], compact=args.compact)
        else:
            print(f"\n{len(results)} classes matching '{args.name}':")
            for cls in results:
                print(f"  {cls['class_name']:50s} [{cls['category']}]  ({cls['rel_path']})")
            print("\nRun with --exact or a more specific name to narrow down.")
    else:
        ap.print_help()

    conn.close()


if __name__ == "__main__":
    main()
