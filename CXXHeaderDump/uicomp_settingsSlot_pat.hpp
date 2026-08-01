#ifndef UE4SS_SDK_uicomp_settingsSlot_pat_HPP
#define UE4SS_SDK_uicomp_settingsSlot_pat_HPP

class Uuicomp_settingsSlot_pat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_hover;                                                      // 0x0268 (size: 0x8)
    class UCheckBox* CheckBox_vres;                                                   // 0x0270 (size: 0x8)
    class UTextBlock* textv;                                                          // 0x0278 (size: 0x8)
    class Uui_settings_C* Parent;                                                     // 0x0280 (size: 0x8)

    void upd();
    void BndEvt__ui_settingsSlot_pat_CheckBox_vres_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void ExecuteUbergraph_uicomp_settingsSlot_pat(int32 EntryPoint);
}; // Size: 0x288

#endif
