#ifndef UE4SS_SDK_uicomp_settingsSlot_screenResolution_HPP
#define UE4SS_SDK_uicomp_settingsSlot_screenResolution_HPP

class Uuicomp_settingsSlot_screenResolution_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_add;                                                        // 0x0268 (size: 0x8)
    class UButton* Button_find;                                                       // 0x0270 (size: 0x8)
    class UButton* Button_hover;                                                      // 0x0278 (size: 0x8)
    class UButton* Button_remove;                                                     // 0x0280 (size: 0x8)
    class UComboBoxString* comboBox_dropbox;                                          // 0x0288 (size: 0x8)
    class UTextBlock* text_button_1;                                                  // 0x0290 (size: 0x8)
    class UTextBlock* text_button_2;                                                  // 0x0298 (size: 0x8)
    class UTextBlock* text_button_3;                                                  // 0x02A0 (size: 0x8)
    class UEditableTextBox* textbox_search;                                           // 0x02A8 (size: 0x8)
    class UTextBlock* textv;                                                          // 0x02B0 (size: 0x8)
    int32 Index;                                                                      // 0x02B8 (size: 0x4)
    int32 variableIndex;                                                              // 0x02BC (size: 0x4)
    class Usave_main_C* save;                                                         // 0x02C0 (size: 0x8)
    class Uui_settings_C* Parent;                                                     // 0x02C8 (size: 0x8)
    int32 variableType;                                                               // 0x02D0 (size: 0x4)
    FText Description;                                                                // 0x02D8 (size: 0x18)
    FIntPoint resolutionInTextbox;                                                    // 0x02F0 (size: 0x8)

    void getSearchName(FName& Name);
    void sortList(FString A, FString B, bool& Result);
    void removeResolution(const FString& res);
    void addResolution(const FString& res);
    bool stringToResolution(FString sourceString, int32& X, int32& Y, FString& asString);
    void updateList();
    void Init(class Uui_settings_C* Parent);
    void resume();
    void setIndex(int32 Index);
    void triggerRandom();
    void BndEvt__ui_settingsSlot_Button_hover_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ui_settingsSlot_Button_hover_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__uicomp_settingsSlot_screenResolution_Button_button_3_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__uicomp_settingsSlot_screenResolution_textbox_search_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__uicomp_settingsSlot_screenResolution_Button_button_2_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__uicomp_settingsSlot_screenResolution_Button_button_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__uicomp_settingsSlot_screenResolution_comboBox_dropbox_K2Node_ComponentBoundEvent_14_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void ExecuteUbergraph_uicomp_settingsSlot_screenResolution(int32 EntryPoint);
}; // Size: 0x2F8

#endif
