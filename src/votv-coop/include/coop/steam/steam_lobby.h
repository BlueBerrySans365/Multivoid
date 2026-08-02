// coop/steam/steam_lobby.h -- Steam lobby management for Multivoid.
//
// Wraps ISteamMatchmaking for lobby create/join/list/leave operations.
// Requires the Steamworks SDK (ENABLE_STEAM cmake flag + steam_api64.lib).
// When ENABLE_STEAM is not defined, all functions are no-ops.
//
// Config (multivoid.ini [Steam]):
//   EnableLobby=true/false (default true)
//   LobbyMaxMembers=4 (default 4)
//   LobbyPublic=true/false (default false = friends-only)

#pragma once

#include <cstdint>
#include <string>
#include <vector>

namespace coop::steam {

struct LobbyInfo {
    uint64_t lobbyId = 0;
    std::string hostName;
    std::string joinCode;     // connection string for direct connect
    int32_t currentMembers = 0;
    int32_t maxMembers = 4;
    bool isPublic = false;
};

// Initialize the Steam lobby system. Call once at startup.
// Returns true if Steam is available and initialized.
bool InitLobby();

// Shut down the Steam lobby system. Call at exit.
void ShutdownLobby();

// Create a new lobby. `maxMembers` is the lobby capacity (default 4).
// `isPublic` controls visibility: true = public (visible in lobby list),
// false = friends-only (only friends can see and join).
// Fires a callback when complete; check IsLobbyCreated() / GetLobbyId().
void CreateLobby(int32_t maxMembers = 4, bool isPublic = false);

// Join an existing lobby by its Steam Lobby ID.
void JoinLobby(uint64_t lobbyId);

// Join a lobby by a human-readable join code (the string from RichPresence).
void JoinLobbyByCode(const std::string& code);

// Leave the current lobby.
void LeaveLobby();

// Query the list of available lobbies. Results arrive asynchronously;
// check GetLobbyList() after a short delay.
void RequestLobbyList();

// Get the results of the last RequestLobbyList().
const std::vector<LobbyInfo>& GetLobbyList() const;

// Get the current lobby ID (0 if not in a lobby).
uint64_t GetLobbyId() const;

// Is the local player currently in a lobby?
bool IsInLobby() const;

// Did the last CreateLobby succeed?
bool IsLobbyCreated() const;

// Get the Steam ID of the lobby owner (host).
uint64_t GetLobbyOwner() const;

// Get the number of members in the current lobby.
int32_t GetLobbyMemberCount() const;

// Set the lobby join code (a string that friends can use to join via RichPresence).
void SetLobbyJoinCode(const std::string& code);

// Poll for Steam lobby callbacks. Call once per frame on the game thread.
void TickLobby();

}  // namespace coop::steam
