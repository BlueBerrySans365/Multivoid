#ifndef UE4SS_SDK_menu_HPP
#define UE4SS_SDK_menu_HPP

class Amenu_C : public ALevelScriptActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0228 (size: 0x8)
    float Tick;                                                                       // 0x0230 (size: 0x4)
    class ACameraActor* CameraActor_1_ExecuteUbergraph_menu_RefProperty;              // 0x0238 (size: 0x8)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_menu(int32 EntryPoint);
}; // Size: 0x240

#endif
