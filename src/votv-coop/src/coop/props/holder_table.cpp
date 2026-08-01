// coop/props/holder_table.cpp -- see coop/props/holder_table.h.

#include "coop/props/holder_table.h"

#include <unordered_map>
#include <unordered_set>

namespace coop::holder_table {
namespace {

// eid -> slot that holds it.
std::unordered_map<uint32_t, uint8_t> g_heldBy;

// slot -> set of eids held (for efficient cleanup on disconnect).
std::unordered_map<uint8_t, std::unordered_set<uint32_t>> g_heldBySlot;

}  // namespace

bool IsHeldBy(uint32_t eid, uint8_t slot) {
    auto it = g_heldBy.find(eid);
    return it != g_heldBy.end() && it->second == slot;
}

void SetHeldBy(uint32_t eid, uint8_t slot) {
    // Clear any previous holder of this eid.
    auto prev = g_heldBy.find(eid);
    if (prev != g_heldBy.end() && prev->second != slot) {
        auto& prevSet = g_heldBySlot[prev->second];
        prevSet.erase(eid);
        if (prevSet.empty()) g_heldBySlot.erase(prev->second);
    }
    g_heldBy[eid] = slot;
    g_heldBySlot[slot].insert(eid);
}

void ClearHeldBy(uint32_t eid) {
    auto it = g_heldBy.find(eid);
    if (it == g_heldBy.end()) return;
    auto& slotSet = g_heldBySlot[it->second];
    slotSet.erase(eid);
    if (slotSet.empty()) g_heldBySlot.erase(it->second);
    g_heldBy.erase(it);
}

void ClearSlot(uint8_t slot) {
    auto it = g_heldBySlot.find(slot);
    if (it == g_heldBySlot.end()) return;
    for (uint32_t eid : it->second) {
        g_heldBy.erase(eid);
    }
    g_heldBySlot.erase(it);
}

}  // namespace coop::holder_table
