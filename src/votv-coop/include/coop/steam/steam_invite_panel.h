// coop/steam/steam_invite_panel.h -- ImGui panel for Steam friend invites.
//
// Renders a "Steam Friends" panel in the dev menu / multiplayer browser.
// Shows online friends with "Invite" buttons and lobby list.
// Requires ENABLE_STEAM + ImGui.

#pragma once

namespace coop::steam {

// Render the Steam invite panel as an ImGui window.
// Call from the dev menu or multiplayer browser.
// Returns true if the panel is visible (it self-hides when closed).
bool RenderInvitePanel();

// Show/hide the invite panel.
void ShowInvitePanel(bool show);
bool IsInvitePanelVisible();

}  // namespace coop::steam
