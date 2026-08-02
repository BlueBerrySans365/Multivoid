// coop/steam/steam_invite_panel.cpp -- see coop/steam/steam_invite_panel.h.

#include "coop/steam/steam_invite_panel.h"

#include "coop/steam/steam_friends.h"
#include "coop/steam/steam_invite.h"
#include "coop/steam/steam_lobby.h"
#include "ue_wrap/core/log.h"

#ifdef ENABLE_STEAM
#include <imgui.h>
#endif

#include <atomic>

namespace coop::steam {
namespace {

std::atomic<bool> g_panelVisible{false};
uint64_t g_lastRefreshMs = 0;
constexpr uint64_t kRefreshIntervalMs = 2000;  // refresh friends list every 2s

uint64_t NowMs() {
    return static_cast<uint64_t>(
        std::chrono::duration_cast<std::chrono::milliseconds>(
            std::chrono::steady_clock::now().time_since_epoch()).count());
}

}  // namespace

void ShowInvitePanel(bool show) {
    g_panelVisible.store(show);
}

bool IsInvitePanelVisible() {
    return g_panelVisible.load();
}

bool RenderInvitePanel() {
#ifdef ENABLE_STEAM
    if (!g_panelVisible.load()) return false;
    if (!IsSteamAvailable()) {
        g_panelVisible.store(false);
        return false;
    }

    // Auto-refresh the friends list periodically.
    const uint64_t now = NowMs();
    if (now - g_lastRefreshMs >= kRefreshIntervalMs) {
        g_lastRefreshMs = now;
        RefreshFriendsList();
    }

    ImGui::SetNextWindowSize(ImVec2(450, 500), ImGuiCond_FirstUseEver);
    if (!ImGui::Begin("Steam Friends##SteamInvitePanel", &g_panelVisible)) {
        ImGui::End();
        return true;
    }

    // Local player info.
    ImGui::Text("You: %s (ID: %llu)",
                GetLocalName().c_str(),
                (unsigned long long)GetLocalSteamId());

    // Lobby info.
    if (IsInLobby()) {
        ImGui::Separator();
        ImGui::Text("Lobby: %llu (%d/%d members)",
                    (unsigned long long)GetLobbyId(),
                    GetLobbyMemberCount(), 4);
        if (ImGui::Button("Leave Lobby")) {
            LeaveLobby();
            ClearRichPresence();
        }
        ImGui::SameLine();
        if (ImGui::Button("Invite All Friends")) {
            SendInviteToAllFriends();
        }
    } else {
        ImGui::Separator();
        if (ImGui::Button("Create Friends-Only Lobby")) {
            CreateLobby(4, false);
        }
        ImGui::SameLine();
        if (ImGui::Button("Create Public Lobby")) {
            CreateLobby(4, true);
        }
    }

    ImGui::Separator();

    // Friends list.
    const auto& friends = GetFriendsList();
    ImGui::Text("Friends (%zu online):", friends.size());
    ImGui::Separator();

    ImGui::BeginChild("FriendsList", ImVec2(0, 0), true);
    for (const auto& f : friends) {
        ImGui::PushID(static_cast<int>(f.steamId));
        ImGui::Text("%s", f.name.c_str());
        ImGui::SameLine(200);
        ImGui::TextColored(ImVec4(0.5f, 0.5f, 0.5f, 1.0f), "%s", f.status.c_str());
        if (IsInLobby() && f.canJoin) {
            ImGui::SameLine();
            if (ImGui::SmallButton("Invite")) {
                SendInvite(f.steamId);
            }
        }
        ImGui::PopID();
    }
    ImGui::EndChild();

    ImGui::End();
    return true;
#else
    return false;
#endif
}

}  // namespace coop::steam
