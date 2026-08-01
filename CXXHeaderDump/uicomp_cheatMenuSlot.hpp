#ifndef UE4SS_SDK_uicomp_cheatMenuSlot_HPP
#define UE4SS_SDK_uicomp_cheatMenuSlot_HPP

class Uuicomp_cheatMenuSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_51;                                                         // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_92;                                                   // 0x0270 (size: 0x8)
    int32 Index;                                                                      // 0x0278 (size: 0x4)
    FName Name;                                                                       // 0x027C (size: 0x8)
    FText DisplayName;                                                                // 0x0288 (size: 0x18)
    class Uui_cheatMenu_C* Parent;                                                    // 0x02A0 (size: 0x8)

    void Construct();
    void BndEvt__Button_51_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_cheatMenuSlot(int32 EntryPoint);
}; // Size: 0x2A8

#endif
