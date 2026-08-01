#ifndef UE4SS_SDK_WindowsDialogBox_HPP
#define UE4SS_SDK_WindowsDialogBox_HPP

#include "WindowsDialogBox_enums.hpp"

class UWindowsDialogBoxFunctionLibrary : public UBlueprintFunctionLibrary
{

    EDialogButtonClicked OpenDialog(FString DialogTitle, FString DialogMessage, EDialogButtons buttons, EDialogIcon Icon);
}; // Size: 0x28

#endif
