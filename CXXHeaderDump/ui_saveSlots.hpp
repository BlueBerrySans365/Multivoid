#ifndef UE4SS_SDK_ui_saveSlots_HPP
#define UE4SS_SDK_ui_saveSlots_HPP

class Uui_saveSlots_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UWidgetAnimation* rulesSLideOut;                                            // 0x0268 (size: 0x8)
    class UButton* button_back;                                                       // 0x0270 (size: 0x8)
    class UButton* Button_button;                                                     // 0x0278 (size: 0x8)
    class UButton* button_createNew;                                                  // 0x0280 (size: 0x8)
    class UButton* button_createSlot;                                                 // 0x0288 (size: 0x8)
    class UButton* button_delete;                                                     // 0x0290 (size: 0x8)
    class UButton* button_duplicate;                                                  // 0x0298 (size: 0x8)
    class UButton* button_exit;                                                       // 0x02A0 (size: 0x8)
    class UButton* button_launch;                                                     // 0x02A8 (size: 0x8)
    class UButton* button_openSaveDir;                                                // 0x02B0 (size: 0x8)
    class UButton* button_play;                                                       // 0x02B8 (size: 0x8)
    class UButton* button_regen;                                                      // 0x02C0 (size: 0x8)
    class UButton* button_reset;                                                      // 0x02C8 (size: 0x8)
    class UButton* button_updatelist;                                                 // 0x02D0 (size: 0x8)
    class UCanvasPanel* canvas_loading;                                               // 0x02D8 (size: 0x8)
    class UCanvasPanel* canvas_rules;                                                 // 0x02E0 (size: 0x8)
    class UCanvasPanel* canvas_saveMessage;                                           // 0x02E8 (size: 0x8)
    class UCanvasPanel* canvas_window;                                                // 0x02F0 (size: 0x8)
    class UCanvasPanel* canvasMapSelect;                                              // 0x02F8 (size: 0x8)
    class UCanvasPanel* canvasMapSelect_2;                                            // 0x0300 (size: 0x8)
    class UCanvasPanel* canvasMapSelect_3;                                            // 0x0308 (size: 0x8)
    class UCanvasPanel* CanvasPanel_48;                                               // 0x0310 (size: 0x8)
    class UComboBoxString* cbox_sboxLevel;                                            // 0x0318 (size: 0x8)
    class UCheckBox* checkbox_dontShow;                                               // 0x0320 (size: 0x8)
    class UEditableTextBox* ETB_days;                                                 // 0x0328 (size: 0x8)
    class UEditableTextBox* ETB_slotName;                                             // 0x0330 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0340 (size: 0x8)
    class UImage* Image_64;                                                           // 0x0348 (size: 0x8)
    class UImage* Image_70;                                                           // 0x0350 (size: 0x8)
    class UImage* Image_96;                                                           // 0x0358 (size: 0x8)
    class UImage* Image_126;                                                          // 0x0360 (size: 0x8)
    class UImage* Image_302;                                                          // 0x0368 (size: 0x8)
    class UMultiLineEditableTextBox* MLTB_ruleDesc_newslot;                           // 0x0370 (size: 0x8)
    class UMultiLineEditableTextBox* MLTB_ruleDesc_updSlot;                           // 0x0378 (size: 0x8)
    class UScrollBox* ScrollBox_list;                                                 // 0x0380 (size: 0x8)
    class UTextBlock* text_button;                                                    // 0x0388 (size: 0x8)
    class UTextBlock* text_button_1;                                                  // 0x0390 (size: 0x8)
    class UTextBlock* text_button_2;                                                  // 0x0398 (size: 0x8)
    class UTextBlock* text_button_3;                                                  // 0x03A0 (size: 0x8)
    class UEditableTextBox* textbox_ruleName_newslot;                                 // 0x03A8 (size: 0x8)
    class UEditableTextBox* textbox_ruleName_updSlot;                                 // 0x03B0 (size: 0x8)
    class UTextBlock* txt_days;                                                       // 0x03B8 (size: 0x8)
    class UTextBlock* txt_days_1;                                                     // 0x03C0 (size: 0x8)
    class UTextBlock* txt_msg;                                                        // 0x03C8 (size: 0x8)
    class UTextBlock* txt_ruleSaveSlot;                                               // 0x03D0 (size: 0x8)
    class UTextBlock* txt_top;                                                        // 0x03D8 (size: 0x8)
    class Uui_gameRulesList_C* ui_gameRulesList_changeSLot;                           // 0x03E0 (size: 0x8)
    class Uui_gameRulesList_C* ui_gameRulesList_newSlot;                              // 0x03E8 (size: 0x8)
    class UVerticalBox* vbox_subsaves;                                                // 0x03F0 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_308;                                        // 0x03F8 (size: 0x8)
    TArray<class Uuicomp_saveSlot_C*> Slots;                                          // 0x0400 (size: 0x10)
    TArray<FString> slotsNames;                                                       // 0x0410 (size: 0x10)
    class Uuicomp_saveSlot_C* selected;                                               // 0x0420 (size: 0x8)
    int32 startDay;                                                                   // 0x0428 (size: 0x4)
    int32 maxDay;                                                                     // 0x042C (size: 0x4)
    TArray<class UsaveSlot_C*> saves;                                                 // 0x0430 (size: 0x10)
    TArray<FString> valid_savesNames;                                                 // 0x0440 (size: 0x10)
    int32 selectedId;                                                                 // 0x0450 (size: 0x4)
    class UsaveSlot_C* tempSave;                                                      // 0x0458 (size: 0x8)
    FName selectedMap;                                                                // 0x0460 (size: 0x8)
    TArray<FString> savesNames_infront;                                               // 0x0468 (size: 0x10)
    TArray<class UsaveSlot_C*> saves_infront;                                         // 0x0478 (size: 0x10)
    TArray<class Uuicomp_saveSlot_C*> slots_infront;                                  // 0x0488 (size: 0x10)
    TArray<class Uuicomp_saveSlot_C*> slots_putInfront;                               // 0x0498 (size: 0x10)
    TArray<class Uuicomp_saveSlot_C*> allSaveSlots;                                   // 0x04A8 (size: 0x10)
    TArray<FString> slotsSubNames;                                                    // 0x04B8 (size: 0x10)
    int32 selectedId_sub;                                                             // 0x04C8 (size: 0x4)
    class Uuicomp_saveSlotFolder_C* selectedParent;                                   // 0x04D0 (size: 0x8)
    TArray<FString> allSlotsSaves;                                                    // 0x04D8 (size: 0x10)
    TArray<class UsaveSlot_C*> saves_subslots;                                        // 0x04E8 (size: 0x10)
    TArray<FString> slotsSubsaves;                                                    // 0x04F8 (size: 0x10)
    TArray<FString> slotsSaves;                                                       // 0x0508 (size: 0x10)
    TArray<FString> allSlotsNames;                                                    // 0x0518 (size: 0x10)
    TMap<class FString, class FString> sboxMaps_map;                                  // 0x0528 (size: 0x50)
    int32 selectedIndex;                                                              // 0x0578 (size: 0x4)
    FString selectedSB;                                                               // 0x0580 (size: 0x10)
    TArray<class Uuicomp_saveSlotFolder_C*> folders;                                  // 0x0590 (size: 0x10)
    float rulesAlpha;                                                                 // 0x05A0 (size: 0x4)
    class Uui_menu_C* Owner;                                                          // 0x05A8 (size: 0x8)
    bool checkboxDontShowSaveMessage;                                                 // 0x05B0 (size: 0x1)

    void sortEmptySlots(TArray<class Uuicomp_saveSlot_C*>& Slots, TArray<class Uuicomp_saveSlot_C*>& return);
    void sortEmptyFolders(TArray<class Uuicomp_saveSlotFolder_C*>& res1);
    void isStringLegal(FString InputPin, bool& legal);
    FString getSavePrefix(TEnumAsByte<enum_gamemode::Type> Index);
    void switchMainSwitcher(int32 Index, bool Anim);
    void regenObjects(TArray<Fstruct_save>& InputPin, int32& totalObjects1, int32& propObj1);
    void regenSave();
    void findSBMap_string(FString DisplayName, FString& LevelName, bool& Valid);
    void makeSboxMaps();
    void makeArray(TArray<class UObject*>& InputPin);
    void sortFunc_saveFolders(class UObject* ObjectA, class UObject* ObjectB, bool& Result);
    void sortFunc_saveSlots(class UObject* ObjectA, class UObject* ObjectB, bool& Result);
    void createSubsaves(FString parentSave, int32 Index, class Uuicomp_saveSlotFolder_C* folder, bool removeOnly, int32& Amount);
    void getSaveObject(const FString& ItemToFind, bool subsave, class UsaveSlot_C*& Output);
    void loadSlots();
    void findSBMap_name(FString MapName, FString& DisplayName, bool& Valid);
    void upd();
    void selectSlot_sub(class Uuicomp_saveSlot_C* slotSub);
    void gen();
    void BndEvt__button_apply_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_back_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_launch_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_reset_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_delete_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_saveSlots_ETB_days_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__umg_saveSlots_button_create_1_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_create_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__umg_saveSlots_button_openSaveDir_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_saveSlots_button_duplicate_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_saveSlots_button_updatelist_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void updateList();
    void BndEvt__ui_saveSlots_cbox_sboxLevel_K2Node_ComponentBoundEvent_1_OnSelectionChangedEvent__DelegateSignature(FString SelectedItem, TEnumAsByte<ESelectInfo::Type> SelectionType);
    void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_saveSlots_button_regen_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void ruleHovered(class Uuicomp_gameRuleSlot_C* Slot);
    void assignSlotForRuleChange();
    void rulesSaved(Fstruct_gameRules Rules);
    void ruleHoveredUpd(class Uuicomp_gameRuleSlot_C* Slot);
    void BndEvt__ui_saveSlots_checkbox_dontShow_K2Node_ComponentBoundEvent_14_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__ui_saveSlots_Button_button_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_saveSlots(int32 EntryPoint);
}; // Size: 0x5B1

#endif
