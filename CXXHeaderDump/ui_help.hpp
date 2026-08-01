#ifndef UE4SS_SDK_ui_help_HPP
#define UE4SS_SDK_ui_help_HPP

class Uui_help_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_exit;                                                       // 0x0268 (size: 0x8)
    class UScrollBox* helpbox;                                                        // 0x0270 (size: 0x8)
    class UScrollBox* helpbox_desc;                                                   // 0x0278 (size: 0x8)
    class UImage* Image_99;                                                           // 0x0280 (size: 0x8)
    class UImage* Image_302;                                                          // 0x0288 (size: 0x8)
    class UTextBlock* text_helpTopic;                                                 // 0x0290 (size: 0x8)
    class UEditableTextBox* textbox_search;                                           // 0x0298 (size: 0x8)
    class UVerticalBox* vbox_list;                                                    // 0x02A0 (size: 0x8)
    class Usave_main_C* sav;                                                          // 0x02A8 (size: 0x8)
    TArray<class Uuicomp_settingsSlot_C*> sliders;                                    // 0x02B0 (size: 0x10)
    TArray<class Uuicomp_settingsSlot_C*> v_slots;                                    // 0x02C0 (size: 0x10)
    TArray<class Uuicomp_settingsSlot_C*> s_slots;                                    // 0x02D0 (size: 0x10)
    Fstruct_settings1 settingsCopy;                                                   // 0x02E0 (size: 0x220)
    TArray<class Uui_helpButton_C*> helpButtons;                                      // 0x0500 (size: 0x10)
    class Uui_helpCategoryButton_C* Active;                                           // 0x0510 (size: 0x8)
    FText searchTxt;                                                                  // 0x0518 (size: 0x18)
    TArray<TEnumAsByte<enum_helpCategory::Type>> allCategories;                       // 0x0530 (size: 0x10)
    TArray<class Uui_helpCategory_C*> slots_categories;                               // 0x0540 (size: 0x10)
    TArray<class Uui_helpSubCategory_C*> slots_subcats;                               // 0x0550 (size: 0x10)
    TArray<FName> allSubCategories;                                                   // 0x0560 (size: 0x10)
    TArray<class Uui_helpCategoryButton_C*> slots_entries;                            // 0x0570 (size: 0x10)
    TArray<class Uuicomp_helpText_C*> slots_text;                                     // 0x0580 (size: 0x10)
    TArray<class Uuicomp_helpImage_C*> slots_images;                                  // 0x0590 (size: 0x10)

    void getSearchName(FName& Name);
    void checkIfEmpty(class UWidget* widgetParent, TArray<class UWidget*>& Children);
    void generateList();
    void Search(FText prompt);
    void press(class Uui_helpCategoryButton_C* Button);
    void triggerRandom();
    void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void resume();
    void setIndex(int32 Index);
    void Construct();
    void BndEvt__umg_help_textbox_search_K2Node_ComponentBoundEvent_1_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void ExecuteUbergraph_ui_help(int32 EntryPoint);
}; // Size: 0x5A0

#endif
