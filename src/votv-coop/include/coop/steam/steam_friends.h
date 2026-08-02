// coop/steam/steam_friends.h -- Steam friends list for Multivoid.
//
// Wraps ISteamFriends for querying online friends and their game status.
// Requires the Steamworks SDK (ENABLE_STEAM cmake flag).
// When ENABLE_STEAM is not defined, all functions return empty/zero.

#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace coop::steam {

struct FriendInfo {
    uint64_t steamId = 0;
    std::string name;
    std::string status;      // persona state text (Online, Away, Busy, etc.)
    bool isInGame = false;   // is the friend playing a game?
    bool isInMultivoid = false;  // is the friend playing Multivoid?
    bool canJoin = false;    // can we join this friend's game?
};

// Get a list of all online friends.
// `includeInMultivoid` filters to only friends currently playing Multivoid.
const std::vector<FriendInfo>& GetFriendsList();

// Refresh the friends list from Steam. Call once per second or on demand.
void RefreshFriendsList();

// Get the local player's Steam ID.
uint64_t GetLocalSteamId();

// Get the local player's display name.
std::string GetLocalName();

// Check if the Steamworks social features are available.
bool IsSteamAvailable();

}  // namespace coop::steam
