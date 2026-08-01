#ifndef UE4SS_SDK_uicomp_camSlot_HPP
#define UE4SS_SDK_uicomp_camSlot_HPP

class Uuicomp_camSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_33;                                                         // 0x0268 (size: 0x8)
    class UEditableTextBox* EditableTextBox_342;                                      // 0x0270 (size: 0x8)
    class UImage* Image_81;                                                           // 0x0278 (size: 0x8)
    class UTextBlock* TextBlock_name;                                                 // 0x0280 (size: 0x8)
    FString txt;                                                                      // 0x0288 (size: 0x10)
    int32 Index;                                                                      // 0x0298 (size: 0x4)
    class Uui_laptop_C* laptop;                                                       // 0x02A0 (size: 0x8)
    class Aprop_rdrone_C* drone;                                                      // 0x02A8 (size: 0x8)
    class Aprop_camera_bad_C* cam;                                                    // 0x02B0 (size: 0x8)

    void upd();
    void BndEvt__umg_camSlot_EditableTextBox_342_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__Button_33_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__umg_camSlot_EditableTextBox_342_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_uicomp_camSlot(int32 EntryPoint);
}; // Size: 0x2B8

#endif
