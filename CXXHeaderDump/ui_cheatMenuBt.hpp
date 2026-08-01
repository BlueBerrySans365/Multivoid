#ifndef UE4SS_SDK_ui_cheatMenuBt_HPP
#define UE4SS_SDK_ui_cheatMenuBt_HPP

class Uui_cheatMenuBt_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_51;                                                         // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_92;                                                   // 0x0270 (size: 0x8)
    int32 Index;                                                                      // 0x0278 (size: 0x4)
    FName Name;                                                                       // 0x027C (size: 0x8)
    FText DisplayName;                                                                // 0x0288 (size: 0x18)
    class Uui_cheatMenu_C* Parent;                                                    // 0x02A0 (size: 0x8)
    FString Option;                                                                   // 0x02A8 (size: 0x10)
    FText Description;                                                                // 0x02B8 (size: 0x18)

    void BndEvt__Button_51_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__ui_cheatMenuBt_Button_51_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ui_cheatMenuBt_Button_51_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ui_cheatMenuBt(int32 EntryPoint);
}; // Size: 0x2D0

#endif
