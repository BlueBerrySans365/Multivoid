#ifndef UE4SS_SDK_ui_signalName_HPP
#define UE4SS_SDK_ui_signalName_HPP

class Uui_signalName_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_tab_upgrades;                                               // 0x0268 (size: 0x8)
    class UEditableTextBox* Etxt_name;                                                // 0x0270 (size: 0x8)
    class UImage* Image_29;                                                           // 0x0278 (size: 0x8)
    class Uuicomp_signalSlot_C* Rename;                                               // 0x0280 (size: 0x8)
    bool qi;                                                                          // 0x0288 (size: 0x1)

    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Init(class Uuicomp_signalSlot_C* Rename);
    void BndEvt__button_tab_upgrades_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Etxt_name_K2Node_ComponentBoundEvent_1_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void exi();
    void ExecuteUbergraph_ui_signalName(int32 EntryPoint);
}; // Size: 0x289

#endif
