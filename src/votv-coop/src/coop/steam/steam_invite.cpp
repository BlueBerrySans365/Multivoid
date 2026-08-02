// coop/steam/steam_invite.cpp -- see coop/steam/steam_invite.h.

#include "coop/steam/steam_invite.h"

#include "coop/steam/steam_lobby.h"
#include "ue_wrap/core/log.h"

#ifdef ENABLE_STEAM
#include <steam/steam_api.h>
#endif

namespace coop::steam {

bool SendInvite(uint64_t steamIdFriend) {
#ifdef ENABLE_STEAM
    ISteamFriends* friends = SteamFriends();
    ISteamMatchmaking* mm = SteamMatchmaking();
    if (!friends || !mm || !IsInLobby()) {
        UE_LOGW("steam_invite: cannot send invite (friends=%p mm=%p inLobby=%d)",
                friends, mm, IsInLobby() ? 1 : 0);
        return false;
    }
    CSteamID friendId(steamIdFriend);
    CSteamID lobbyId(GetLobbyId());
    bool ok = friends->InviteUserToGame(friendId, lobbyId);
    UE_LOGI("steam_invite: sent invite to %llu ok=%d", (unsigned long long)steamIdFriend, ok);
    return ok;
#else
    return false;
#endif
}

bool SendInviteByName(const std::string& friendName) {
#ifdef ENABLE_STEAM
    ISteamFriends* friends = SteamFriends();
    if (!friends) return false;
    int count = friends->GetFriendCount(k_EFriendFlagImmediate);
    for (int i = 0; i < count; ++i) {
        CSteamID fid = friends->GetFriendByIndex(i, k_EFriendFlagImmediate);
        const char* name = friends->GetFriendPersonaName(fid);
        if (name && friendName == name) {
            return SendInvite(fid.ConvertToUint64());
        }
    }
    UE_LOGW("steam_invite: friend '%s' not found", friendName.c_str());
#endif
    return false;
}

void SendInviteToAllFriends() {
#ifdef ENABLE_STEAM
    ISteamFriends* friends = SteamFriends();
    if (!friends || !IsInLobby()) return;
    int count = friends->GetFriendCount(k_EFriendFlagImmediate);
    int sent = 0;
    for (int i = 0; i < count; ++i) {
        CSteamID fid = friends->GetFriendByIndex(i, k_EFriendFlagImmediate);
        EFriendRelationship rel = friends->GetFriendRelationship(fid);
        if (rel != k_EFriendRelationshipFriend) continue;
        // Check if the friend is already in the lobby.
        // TODO: iterate lobby members to skip them
        if (SendInvite(fid.ConvertToUint64())) ++sent;
    }
    UE_LOGI("steam_invite: sent invites to %d friends", sent);
#endif
}

uint64_t PollJoinRequest() {
#ifdef ENABLE_STEAM
    // The callback is handled in steam_lobby.cpp; this is a polling interface
    // for modules that prefer polling over callbacks.
    // For now, return 0 (no pending request).
#endif
    return 0;
}

void SetRichPresence(const char* key, const char* value) {
#ifdef ENABLE_STEAM
    ISteamFriends* friends = SteamFriends();
    if (friends) {
        friends->SetRichPresence(key, value);
    }
#endif
}

void SetLobbyRichPresence(const char* hostName, int32_t playerCount, int32_t maxPlayers) {
#ifdef ENABLE_STEAM
    ISteamFriends* friends = SteamFriends();
    if (!friends) return;
    friends->SetRichPresence("status", "In Multivoid Co-op");
    friends->SetRichPresence("steam_display", "#StatusPlaying");
    char buf[32];
    snprintf(buf, sizeof(buf), "%d/%d", playerCount, maxPlayers);
    friends->SetRichPresence("player_count", buf);
    if (hostName) friends->SetRichPresence("host_name", hostName);
    // Set the connect string so friends can join via the overlay.
    if (IsInLobby()) {
        char connectStr[64];
        snprintf(connectStr, sizeof(connectStr), "%llu", (unsigned long long)GetLobbyId());
        friends->SetRichPresence("connect", connectStr);
    }
#endif
}

void ClearRichPresence() {
#ifdef ENABLE_STEAM
    ISteamFriends* friends = SteamFriends();
    if (friends) {
        friends->ClearRichPresence();
    }
#endif
}

}  // namespace coop::steam
