#ifndef UE4SS_SDK_uicomp_serverMG_simonButton_HPP
#define UE4SS_SDK_uicomp_serverMG_simonButton_HPP

class Uuicomp_serverMG_simonButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_press;                                                      // 0x0268 (size: 0x8)
    class UImage* Image_81;                                                           // 0x0270 (size: 0x8)
    class UTextBlock* text_note;                                                      // 0x0278 (size: 0x8)
    FIntPoint Position;                                                               // 0x0280 (size: 0x8)
    FIntPoint maxPos;                                                                 // 0x0288 (size: 0x8)
    float Pitch;                                                                      // 0x0290 (size: 0x4)
    class Uui_serverMinigame_C* Owner;                                                // 0x0298 (size: 0x8)
    FText noteText;                                                                   // 0x02A0 (size: 0x18)

    void sound_press();
    void Init();
    void Construct();
    void BndEvt__uicomp_serverMG_simonButton_button_press_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_serverMG_simonButton(int32 EntryPoint);
}; // Size: 0x2B8

#endif
