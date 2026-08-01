#ifndef UE4SS_SDK_uicomp_settingsSlot_controller_HPP
#define UE4SS_SDK_uicomp_settingsSlot_controller_HPP

class Uuicomp_settingsSlot_controller_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UComboBoxString* ComboBoxString_103;                                        // 0x0268 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x0270 (size: 0x8)
    class Uui_settings_C* Parent;                                                     // 0x0278 (size: 0x8)
    TArray<TEnumAsByte<enum_difficulty::Type>> E;                                     // 0x0280 (size: 0x10)

    void upd();
    void BndEvt__ComboBoxString_103_K2Node_ComponentBoundEvent_0_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_uicomp_settingsSlot_controller(int32 EntryPoint);
}; // Size: 0x290

#endif
