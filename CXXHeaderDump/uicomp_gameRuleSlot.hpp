#ifndef UE4SS_SDK_uicomp_gameRuleSlot_HPP
#define UE4SS_SDK_uicomp_gameRuleSlot_HPP

class Uuicomp_gameRuleSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_147;                                                        // 0x0268 (size: 0x8)
    class UCheckBox* checkbox_rule;                                                   // 0x0270 (size: 0x8)
    class UComboBoxString* ComboBox_0;                                                // 0x0278 (size: 0x8)
    class UImage* img_disabled;                                                       // 0x0280 (size: 0x8)
    class UImage* img_locked;                                                         // 0x0288 (size: 0x8)
    class USlider* Slider_0;                                                          // 0x0290 (size: 0x8)
    class UWidgetSwitcher* switchevariable;                                           // 0x0298 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x02A0 (size: 0x8)
    class UTextBlock* TextBlock_39;                                                   // 0x02A8 (size: 0x8)
    class UTextBlock* txt_slider;                                                     // 0x02B0 (size: 0x8)
    FText DisplayName;                                                                // 0x02B8 (size: 0x18)
    FText Description;                                                                // 0x02D0 (size: 0x18)
    int32 variableType;                                                               // 0x02E8 (size: 0x4)
    int32 variableIndex;                                                              // 0x02EC (size: 0x4)
    TArray<FString> comboBoxNames;                                                    // 0x02F0 (size: 0x10)
    float slider_min;                                                                 // 0x0300 (size: 0x4)
    float slider_max;                                                                 // 0x0304 (size: 0x4)
    int32 slider_decimals;                                                            // 0x0308 (size: 0x4)
    class Uui_gameRulesList_C* Owner;                                                 // 0x0310 (size: 0x8)
    bool Enabled;                                                                     // 0x0318 (size: 0x1)
    int32 unlockableAfterDay;                                                         // 0x031C (size: 0x4)
    TArray<FName> unlockableAchievements;                                             // 0x0320 (size: 0x10)
    bool isUnlocked;                                                                  // 0x0330 (size: 0x1)
    TArray<FName> unlockedAchievements;                                               // 0x0338 (size: 0x10)

    void getTexts(FText& DisplayName, FText& Description);
    void updEnabled();
    void updVariables(bool Condition);
    void upd();
    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__ui_gameRuleSlot_Button_147_K2Node_ComponentBoundEvent_0_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ui_gameRuleSlot_checkbox_rule_K2Node_ComponentBoundEvent_1_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__ui_gameRuleSlot_Slider_0_K2Node_ComponentBoundEvent_4_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__ui_gameRuleSlot_combobox_0_K2Node_ComponentBoundEvent_5_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__ui_gameRuleSlot_Slider_0_K2Node_ComponentBoundEvent_6_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ui_gameRuleSlot_Button_147_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ui_gameRuleSlot_Button_147_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_gameRuleSlot_Button_147_K2Node_ComponentBoundEvent_9_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_gameRuleSlot_Button_147_K2Node_ComponentBoundEvent_10_OnButtonReleasedEvent__DelegateSignature();
    void ExecuteUbergraph_uicomp_gameRuleSlot(int32 EntryPoint);
}; // Size: 0x348

#endif
