// coop/steam/steam_lobby.cpp -- see coop/steam/steam_lobby.h.
//
// When ENABLE_STEAM is defined, this wraps the Steamworks ISteamMatchmaking API
// for lobby management. When ENABLE_STEAM is not defined, all functions are
// no-ops and IsSteamAvailable() returns false.

#include "coop/steam/steam_lobby.h"

#include "coop/config/config.h"
#include "ue_wrap/core/log.h"

#ifdef ENABLE_STEAM
#include <steam/steam_api.h>
#endif

#include <atomic>
#include <mutex>

namespace coop::steam {
namespace {

std::atomic<bool> g_initialized{false};
std::atomic<bool> g_inLobby{false};
std::atomic<bool> g_lobbyCreated{false};
std::atomic<uint64_t> g_lobbyId{0};
std::atomic<uint64_t> g_lobbyOwner{0};
std::string g_lobbyJoinCode;
std::vector<LobbyInfo> g_lobbyList;
std::mutex g_lobbyListMutex;

bool LobbyEnabled() {
    static const bool s = coop::config::ResolveFlag(
        ::coop::config_registry::rows::steam_lobby);
    return s;
}

#ifdef ENABLE_STEAM

// Callback for lobby creation result.
STEAM_CALLBACK(CoopLobbyCallback, OnLobbyCreated, LobbyCreated_t) {
    if (pParam->m_eResult == k_EResultOK) {
        g_lobbyId.store(pParam->m_ulSteamIDLobby);
        g_lobbyCreated.store(true);
        g_inLobby.store(true);
        UE_LOGI("steam_lobby: created lobby id=%llu", (unsigned long long)pParam->m_ulSteamIDLobby);
    } else {
        UE_LOGW("steam_lobby: create FAILED result=%d", pParam->m_eResult);
    }
}

// Callback for lobby join result.
STEAM_CALLBACK(CoopLobbyCallback, OnJoinLobby, LobbyEnter_t) {
    if (pParam->m_ulSteamIDLobby) {
        g_lobbyId.store(pParam->m_ulSteamIDLobby);
        g_inLobby.store(true);
        // Get the lobby owner.
        ISteamMatchmaking* mm = SteamMatchmaking();
        if (mm) {
            g_lobbyOwner.store(mm->GetLobbyOwner(pParam->m_ulSteamIDLobby));
        }
        UE_LOGI("steam_lobby: joined lobby id=%llu", (unsigned long long)pParam->m_ulSteamIDLobby);
    }
}

// Callback for lobby list results.
STEAM_CALLBACK(CoopLobbyCallback, OnLobbyList, LobbyMatchList_t) {
    ISteamMatchmaking* mm = SteamMatchmaking();
    if (!mm) return;
    std::lock_guard<std::mutex> lock(g_lobbyListMutex);
    g_lobbyList.clear();
    for (uint32 i = 0; i < pParam->m_nLobbiesMatching; ++i) {
        CSteamID lobbyId = mm->GetLobbyByIndex(i);
        if (!lobbyId.IsValid()) continue;
        LobbyInfo info{};
        info.lobbyId = lobbyId.ConvertToUint64();
        info.currentMembers = mm->GetNumLobbyMembers(lobbyId);
        info.maxMembers = mm->GetLobbyDataLimit(lobbyId);
        // Get host name from lobby data.
        const char* hostData = mm->GetLobbyData(lobbyId, "host_name");
        if (hostData && hostData[0]) info.hostName = hostData;
        const char* joinData = mm->GetLobbyData(lobbyId, "join_code");
        if (joinData && joinData[0]) info.joinCode = joinData;
        const char* publicData = mm->GetLobbyData(lobbyId, "public");
        info.isPublic = publicData && std::string(publicData) == "1";
        g_lobbyList.push_back(std::move(info));
    }
    UE_LOGI("steam_lobby: received %zu lobbies", g_lobbyList.size());
}

// Callback for lobby chat messages (unused but required by the API).
STEAM_CALLBACK(CoopLobbyCallback, OnLobbyChatMsg, LobbyChatMsg_t) {
    // Not used for gameplay; could be repurposed for lobby-level signaling.
}

// Callback for Rich Presence join requests.
STEAM_CALLBACK(CoopLobbyCallback, OnGameRichPresenceJoinRequested, GameRichPresenceJoinRequested_t) {
    // A friend clicked "Join Game" in Steam. Parse the connect string.
    const char* connectStr = pParam->m_rgchConnect;
    if (connectStr && connectStr[0]) {
        UE_LOGI("steam_lobby: join request from friend '%ls' connect='%s'",
                pParam->m_steamIDFriend.Render(), connectStr);
        // TODO: parse connectStr and trigger JoinLobbyByCode
    }
}

static CoopLobbyCallback* g_callbackInstance = nullptr;

#endif  // ENABLE_STEAM

}  // namespace

bool InitLobby() {
    if (g_initialized.load()) return true;
    if (!LobbyEnabled()) {
        UE_LOGI("steam_lobby: disabled by config");
        g_initialized.store(true);
        return false;
    }
#ifdef ENABLE_STEAM
    if (!SteamAPI_Init()) {
        UE_LOGW("steam_lobby: SteamAPI_Init failed -- Steam not running or SDK mismatch");
        g_initialized.store(true);
        return false;
    }
    g_callbackInstance = new CoopLobbyCallback();
    g_initialized.store(true);
    UE_LOGI("steam_lobby: initialized (Steam available)");
    return true;
#else
    UE_LOGI("steam_lobby: ENABLE_STEAM not defined -- Steam features unavailable");
    g_initialized.store(true);
    return false;
#endif
}

void ShutdownLobby() {
#ifdef ENABLE_STEAM
    LeaveLobby();
    delete g_callbackInstance;
    g_callbackInstance = nullptr;
    SteamAPI_Shutdown();
#endif
    g_initialized.store(false);
    g_inLobby.store(false);
    g_lobbyCreated.store(false);
    g_lobbyId.store(0);
}

void CreateLobby(int32_t maxMembers, bool isPublic) {
#ifdef ENABLE_STEAM
    ISteamMatchmaking* mm = SteamMatchmaking();
    if (!mm) { UE_LOGW("steam_lobby: SteamMatchmaking not available"); return; }
    ELobbyType lobbyType = isPublic ? k_ELobbyTypePublic : k_ELobbyTypeFriendsOnly;
    mm->CreateLobby(lobbyType, maxMembers);
    UE_LOGI("steam_lobby: creating lobby maxMembers=%d public=%d", maxMembers, isPublic);
#else
    UE_LOGW("steam_lobby: CreateLobby not available (ENABLE_STEAM not defined)");
#endif
}

void JoinLobby(uint64_t lobbyId) {
#ifdef ENABLE_STEAM
    ISteamMatchmaking* mm = SteamMatchmaking();
    if (!mm) return;
    mm->JoinLobby(CSteamID(lobbyId));
    UE_LOGI("steam_lobby: joining lobby id=%llu", (unsigned long long)lobbyId);
#endif
}

void JoinLobbyByCode(const std::string& code) {
    // The join code is the lobby ID as a string.
    uint64_t id = 0;
    try { id = std::stoull(code); } catch (...) {
        UE_LOGW("steam_lobby: invalid join code '%s'", code.c_str());
        return;
    }
    JoinLobby(id);
}

void LeaveLobby() {
#ifdef ENABLE_STEAM
    if (!g_inLobby.load()) return;
    ISteamMatchmaking* mm = SteamMatchmaking();
    if (mm && g_lobbyId.load()) {
        mm->LeaveLobby(CSteamID(g_lobbyId.load()));
    }
    g_inLobby.store(false);
    g_lobbyCreated.store(false);
    g_lobbyId.store(0);
    UE_LOGI("steam_lobby: left lobby");
#endif
}

void RequestLobbyList() {
#ifdef ENABLE_STEAM
    ISteamMatchmaking* mm = SteamMatchmaking();
    if (!mm) return;
    mm->AddRequestLobbyListDistanceFilter(k_ELobbyDistanceFilterWorldwide);
    mm->RequestLobbyList();
    UE_LOGI("steam_lobby: requesting lobby list");
#endif
}

const std::vector<LobbyInfo>& GetLobbyList() const {
    return g_lobbyList;
}

uint64_t GetLobbyId() const {
    return g_lobbyId.load();
}

bool IsInLobby() const {
    return g_inLobby.load();
}

bool IsLobbyCreated() const {
    return g_lobbyCreated.load();
}

uint64_t GetLobbyOwner() const {
    return g_lobbyOwner.load();
}

int32_t GetLobbyMemberCount() const {
#ifdef ENABLE_STEAM
    ISteamMatchmaking* mm = SteamMatchmaking();
    if (!mm || !g_inLobby.load()) return 0;
    return mm->GetNumLobbyMembers(CSteamID(g_lobbyId.load()));
#else
    return 0;
#endif
}

void SetLobbyJoinCode(const std::string& code) {
    g_lobbyJoinCode = code;
#ifdef ENABLE_STEAM
    ISteamMatchmaking* mm = SteamMatchmaking();
    if (mm && g_inLobby.load()) {
        mm->SetLobbyData(CSteamID(g_lobbyId.load()), "join_code", code.c_str());
    }
#endif
}

void TickLobby() {
    // SteamAPI_RunCallbacks is called by GNS already; nothing extra needed here.
}

}  // namespace coop::steam
