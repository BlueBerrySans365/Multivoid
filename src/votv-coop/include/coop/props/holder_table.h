// coop/props/holder_table.h -- shared holder-authority predicate.
//
// Extracted from trash_grab_intent.cpp (2026-08-01, A3 Half 2): the g_heldBy
// map tracks which peer slot currently holds which entity. The predicate
// IsHeldBy(eid, slot) is consulted by PropDestroy/PropConvert authorization:
// only the current holder of an entity may destroy or convert it.
//
// Game-thread only. No mutex (single writer: the grab/throw/release edge).

#pragma once

#include <cstdint>
#include <unordered_map>

namespace coop::holder_table {

// True iff `slot` is the current holder of entity `eid`.
// False if the entity is not held by anyone, or held by a different slot.
// Game-thread only.
bool IsHeldBy(uint32_t eid, uint8_t slot);

// Record that `slot` now holds `eid`. Called on grab/convert edges.
void SetHeldBy(uint32_t eid, uint8_t slot);

// Clear the hold for `eid`. Called on throw/release/destroy edges.
void ClearHeldBy(uint32_t eid);

// Clear all holds for a departing slot (disconnect cleanup).
void ClearSlot(uint8_t slot);

}  // namespace coop::holder_table
