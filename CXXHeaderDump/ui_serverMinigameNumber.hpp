#ifndef UE4SS_SDK_ui_serverMinigameNumber_HPP
#define UE4SS_SDK_ui_serverMinigameNumber_HPP

class Uui_serverMinigameNumber_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_num;                                                        // 0x0268 (size: 0x8)
    class UTextBlock* Text_num;                                                       // 0x0270 (size: 0x8)
    int32 Num;                                                                        // 0x0278 (size: 0x4)
    class Uuicomp_serverMathMGSlot_C* Owner;                                          // 0x0280 (size: 0x8)

    void Construct();
    void BndEvt__button_num_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_serverMinigameNumber(int32 EntryPoint);
}; // Size: 0x288

#endif
