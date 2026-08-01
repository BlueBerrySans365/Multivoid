#ifndef UE4SS_SDK_uicomp_settingsSlot_HPP
#define UE4SS_SDK_uicomp_settingsSlot_HPP

class Uuicomp_settingsSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_button;                                                     // 0x0268 (size: 0x8)
    class UButton* Button_hover;                                                      // 0x0270 (size: 0x8)
    class UCheckBox* CheckBox_vres;                                                   // 0x0278 (size: 0x8)
    class UComboBoxString* comboBox_dropbox;                                          // 0x0280 (size: 0x8)
    class USlider* slider_v_flo;                                                      // 0x0288 (size: 0x8)
    class USlider* slider_v_res;                                                      // 0x0290 (size: 0x8)
    class UTextBlock* text_button;                                                    // 0x0298 (size: 0x8)
    class UEditableTextBox* textbox;                                                  // 0x02A0 (size: 0x8)
    class UEditableTextBox* textbox_value;                                            // 0x02A8 (size: 0x8)
    class UTextBlock* textv;                                                          // 0x02B0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_55;                                         // 0x02B8 (size: 0x8)
    int32 Index;                                                                      // 0x02C0 (size: 0x4)
    int32 variableIndex;                                                              // 0x02C4 (size: 0x4)
    int32 Min;                                                                        // 0x02C8 (size: 0x4)
    int32 Max;                                                                        // 0x02CC (size: 0x4)
    class Usave_main_C* save;                                                         // 0x02D0 (size: 0x8)
    FText Name;                                                                       // 0x02D8 (size: 0x18)
    class Uui_settings_C* Parent;                                                     // 0x02F0 (size: 0x8)
    int32 variableType;                                                               // 0x02F8 (size: 0x4)
    bool clampValue;                                                                  // 0x02FC (size: 0x1)
    int32 Decimals;                                                                   // 0x0300 (size: 0x4)
    FText Description;                                                                // 0x0308 (size: 0x18)
    FName specialCase;                                                                // 0x0320 (size: 0x8)
    FText buttonText;                                                                 // 0x0328 (size: 0x18)
    bool useMaxFloat;                                                                 // 0x0340 (size: 0x1)
    float min_f;                                                                      // 0x0344 (size: 0x4)
    float max_f;                                                                      // 0x0348 (size: 0x4)

    void getSearchName(FName& Name);
    void randomize();
    void beginCalc();
    void begin(class Uui_settings_C* Parent);
    void set();
    void upd();
    void Construct();
    void BndEvt__CheckBox_vres_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__slider_v_flo_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void PreConstruct(bool IsDesignTime);
    void setIndex(int32 Index);
    void BndEvt__slider_v_res_K2Node_ComponentBoundEvent_0_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void resume();
    void BndEvt__ui_settingsSlot_textbox_value_K2Node_ComponentBoundEvent_4_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_settingsSlot_Button_hover_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ui_settingsSlot_Button_hover_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ui_settingsSlot_comboBox_dropbox_K2Node_ComponentBoundEvent_8_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__ui_settingsSlot_Button_button_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_settingsSlot_textbox_K2Node_ComponentBoundEvent_13_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void triggerRandom();
    void ExecuteUbergraph_uicomp_settingsSlot(int32 EntryPoint);
}; // Size: 0x34C

#endif
