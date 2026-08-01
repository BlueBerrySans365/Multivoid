#ifndef UE4SS_SDK_ui_helpButton_HPP
#define UE4SS_SDK_ui_helpButton_HPP

class Uui_helpButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_help_0;                                                     // 0x0268 (size: 0x8)
    class UTextBlock* text_text;                                                      // 0x0270 (size: 0x8)
    class UTextBlock* textspoiler;                                                    // 0x0278 (size: 0x8)
    int32 Index;                                                                      // 0x0280 (size: 0x4)
    Fstruct_help Data;                                                                // 0x0288 (size: 0x58)
    class Uui_help_C* Owner;                                                          // 0x02E0 (size: 0x8)

    void upd();
    void Search();
    void Construct();
    void BndEvt__umg_helpButton_button_help_0_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_helpButton(int32 EntryPoint);
}; // Size: 0x2E8

#endif
