#ifndef UE4SS_SDK_ui_mess_HPP
#define UE4SS_SDK_ui_mess_HPP

class Uui_mess_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_back;                                                       // 0x0268 (size: 0x8)
    class UButton* button_okay;                                                       // 0x0270 (size: 0x8)
    class UImage* Image_106;                                                          // 0x0278 (size: 0x8)
    class UTextBlock* txt_msg;                                                        // 0x0280 (size: 0x8)
    class UTextBlock* txt_top;                                                        // 0x0288 (size: 0x8)
    int32 Action;                                                                     // 0x0290 (size: 0x4)
    class Uuicomp_saveSlot_C* acSlot;                                                 // 0x0298 (size: 0x8)

    void hide();
    void upd(int32 Action, class Uuicomp_saveSlot_C* Slot);
    void BndEvt__button_back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_okay_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_mess(int32 EntryPoint);
}; // Size: 0x2A0

#endif
