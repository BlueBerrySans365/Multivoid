// coop/steam/steam_friends.cpp -- see coop/steam/steam_friends.h.

#include "coop/steam/steam_friends.h"

#include "ue_wrap/core/log.h"

#ifdef ENABLE_STEAM
#include <steam/steam_api.h>
#endif

#include <mutex>

namespace coop::steam {
namespace {

std::vector<FriendInfo> g_friendsList;
std::mutex g_friendsMutex;
bool g_steamAvailable = false;

}  // namespace

bool IsSteamAvailable() {
#ifdef ENABLE_STEAM
    return SteamFriends() != nullptr;
#else
    return false;
#endif
}

uint64_t GetLocalSteamId() {
#ifdef ENABLE_STEAM
    ISteamUser* user = SteamUser();
    if (user) return user->GetSteamID().ConvertToUint64();
#endif
    return 0;
}

std::string GetLocalName() {
#ifdef ENABLE_STEAM
    ISteamFriends* friends = SteamFriends();
    if (friends) {
        const char* name = friends->GetPersonaName();
        if (name) return name;
    }
#endif
    return "Unknown";
}

void RefreshFriendsList() {
#ifdef ENABLE_STEAM
    ISteamFriends* friends = SteamFriends();
    if (!friends) return;
    std::lock_guard<std::mutex> lock(g_friendsMutex);
    g_friendsList.clear();
    int count = friends->GetFriendCount(k_EFriendFlagImmediate);
    for (int i = 0; i < count; ++i) {
        CSteamID fid = friends->GetFriendByIndex(i, k_EFriendFlagImmediate);
        FriendInfo info{};
        info.steamId = fid.ConvertToUint64();
        const char* name = friends->GetFriendPersonaName(fid);
        if (name) info.name = name;
        EPersonaState state = friends->GetFriendPersonaState(fid);
        switch (state) {
            case k_EPersonaStateOnline:    info.status = "Online"; break;
            case k_EPersonaStateBusy:      info.status = "Busy"; break;
            case k_EPersonaStateAway:      info.status = "Away"; break;
            case k_EPersonaStateSnooze:    info.status = "Snooze"; break;
            case k_EPersonaStateLookingToTrade: info.status = "Trading"; break;
            case k_EPersonaStateLookingToPlay:  info.status = "Looking to Play"; break;
            default:                       info.status = "Offline"; break;
        }
        // Check if the friend is playing a game.
        FriendGameInfo_t gameInfo{};
        if (friends->GetFriendGamePlayed(fid, &gameInfo)) {
            info.isInGame = true;
            // Check if it's Multivoid (by app ID or name).
            // For now, we check the lobby ID -- if the friend is in a lobby, they're joinable.
            if (gameInfo.m_steamIDLobby.IsValid()) {
                info.canJoin = true;
            }
        }
        g_friendsList.push_back(std::move(info));
    }
    UE_LOGI("steam_friends: refreshed %zu friends", g_friendsList.size());
#endif
}

const std::vector<FriendInfo>& GetFriendsList() {
    return g_friendsList;
}

}  // namespace coop::steam
