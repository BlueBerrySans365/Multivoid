#!/usr/bin/env bash
# deploy-probe.sh -- Deploy a UE4SS Lua probe to the dev copy's Mods folder.
# 2026-07-10, EndeavourOS (Linux) + Wine/Proton environment.
#
# Usage:
#   ./tools/deploy-probe.sh <ProbeName>
#
# Example:
#   ./tools/deploy-probe.sh probe_v10_spawners
#   ./tools/deploy-probe.sh probe_v10_hillroller
#
# Prerequisites:
#   - The probe source must exist at tools/probes/<ProbeName>/Scripts/main.lua
#   - The dev copy must be at $DEV_COPY_PATH (default: Game_0.9.0n_CLIENT_3)
#   - UE4SS must be installed in the dev copy's Binaries/Win64/Mods/

set -euo pipefail

# ---- Configuration ----
# Adjust these paths for your Wine/Proton setup.
# The dev copy is the one with UE4SS enabled for probing.
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(dirname "$SCRIPT_DIR")"

# Default dev copy path (adjust for your setup).
# If running inside Wine, this should be the Windows path mapped to Z: drive.
# If running natively with Proton, use the Proton prefix path.
DEV_COPY_PATH="${DEV_COPY_PATH:-${PROJECT_ROOT}/Game_0.9.0n_CLIENT_3}"

# UE4SS Mods folder inside the dev copy.
UE4SS_MODS="${DEV_COPY_PATH}/Binaries/Win64/Mods"

# ---- Validate ----
PROBE_NAME="${1:-}"
if [[ -z "$PROBE_NAME" ]]; then
    echo "Usage: $0 <ProbeName>"
    echo ""
    echo "Available probes:"
    ls -1 "$SCRIPT_DIR"/../probes/ 2>/dev/null | grep -v README.md || echo "  (none found)"
    exit 1
fi

PROBE_SRC="${SCRIPT_DIR}/../probes/${PROBE_NAME}"
if [[ ! -d "$PROBE_SRC" ]]; then
    echo "ERROR: Probe source not found at $PROBE_SRC"
    exit 1
fi

MAIN_LUA="${PROBE_SRC}/Scripts/main.lua"
if [[ ! -f "$MAIN_LUA" ]]; then
    echo "ERROR: ${PROBE_NAME}/Scripts/main.lua not found"
    exit 1
fi

# ---- Deploy ----
echo "Deploying probe: ${PROBE_NAME}"
echo "  Source: ${PROBE_SRC}"
echo "  Target: ${UE4SS_MODS}/${PROBE_NAME}"

# Create the target directory.
mkdir -p "${UE4SS_MODS}/${PROBE_NAME}/Scripts"

# Copy the main.lua.
cp "${MAIN_LUA}" "${UE4SS_MODS}/${PROBE_NAME}/Scripts/main.lua"
echo "  Copied: main.lua"

# Enable the mod in mods.txt (UE4SS reads this to know which mods to load).
MODS_TXT="${UE4SS_MODS}/mods.txt"
if [[ -f "$MODS_TXT" ]]; then
    # Check if the mod is already enabled.
    if grep -q "${PROBE_NAME}" "$MODS_TXT"; then
        echo "  Mod already enabled in mods.txt"
    else
        # Add the mod entry.
        echo "" >> "$MODS_TXT"
        echo "+${PROBE_NAME}" >> "$MODS_TXT"
        echo "  Enabled in mods.txt"
    fi
else
    # Create mods.txt with the mod enabled.
    echo "+${PROBE_NAME}" > "$MODS_TXT"
    echo "  Created mods.txt with mod enabled"
fi

echo ""
echo "Deploy complete. To use:"
echo "  1. Launch the dev copy of VOTV"
echo "  2. Load into gameplay"
echo "  3. Check UE4SS.log for [SPAWNER-PROBE] or [HILLROLLER-PROBE] output"
echo ""
echo "To read the log:"
echo "  tail -f '${DEV_COPY_PATH}/Binaries/Win64/UE4SS.log' | grep -E '\\[SPAWNER-PROBE\\]|\\[HILLROLLER-PROBE\\]'"
