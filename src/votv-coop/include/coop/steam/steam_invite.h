// coop/steam/steam_invite.h -- Steam game invite management for Multivoid.
//
// Wraps ISteamFriends for sending/receiving Rich Invites.
// Requires the Steamworks SDK (ENABLE_STEAM cmake flag).
// When ENABLE_STEAM is not defined, all functions are no-ops.

#pragma once

#include <cstdint>
#include <string>

namespace coop::steam {

// Send a game invite to a friend by their Steam ID.
// The invite includes the lobby connection info so the friend can join directly.
// Returns true if the invite was sent successfully.
bool SendInvite(uint64_t steamIdFriend);

// Send a game invite to a friend by their Steam name (fuzzy match).
// Returns true if a matching friend was found and the invite was sent.
bool SendInviteByName(const std::string& friendName);

// Send a game invite to ALL online friends who are NOT already in the lobby.
// This is the "Invite All" action from the invite panel.
void SendInviteToAllFriends();

// Check if a Steam Rich Presence join request was received.
// Returns the Steam ID of the friend who requested to join, or 0 if none.
uint64_t PollJoinRequest();

// Set the Rich Presence key for the current game.
// This controls what friends see in their Steam overlay ("In Game - Multivoid (Host)").
void SetRichPresence(const char* key, const char* value);

// Set the Rich Presence for the current lobby.
// Friends will see "In Game - Multivoid (Host)" with a "Join" button.
void SetLobbyRichPresence(const char* hostName, int32_t playerCount, int32_t maxPlayers);

// Clear the Rich Presence (e.g., when leaving a lobby).
void ClearRichPresence();

}  // namespace coop::steam
