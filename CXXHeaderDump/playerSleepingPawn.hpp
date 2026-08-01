#ifndef UE4SS_SDK_playerSleepingPawn_HPP
#define UE4SS_SDK_playerSleepingPawn_HPP

class AplayerSleepingPawn_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0288 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x0290 (size: 0x8)

    void InpActEvt_pause_K2Node_InputActionEvent_0(FKey Key);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_playerSleepingPawn(int32 EntryPoint);
}; // Size: 0x298

#endif
