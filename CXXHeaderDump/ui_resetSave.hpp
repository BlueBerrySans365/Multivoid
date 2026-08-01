#ifndef UE4SS_SDK_ui_resetSave_HPP
#define UE4SS_SDK_ui_resetSave_HPP

class Uui_resetSave_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_back;                                                       // 0x0268 (size: 0x8)
    class UButton* button_back_1;                                                     // 0x0270 (size: 0x8)
    class UButton* button_day_minus;                                                  // 0x0278 (size: 0x8)
    class UButton* button_day_plus;                                                   // 0x0280 (size: 0x8)
    class UButton* button_okay;                                                       // 0x0288 (size: 0x8)
    class UCheckBox* checkbox_atvEq;                                                  // 0x0290 (size: 0x8)
    class UCheckBox* checkbox_atvPos;                                                 // 0x0298 (size: 0x8)
    class UCheckBox* checkbox_atvStats;                                               // 0x02A0 (size: 0x8)
    class UCheckBox* checkbox_cleanTrashBits;                                         // 0x02A8 (size: 0x8)
    class UCheckBox* checkbox_cleanWallCracks;                                        // 0x02B0 (size: 0x8)
    class UCheckBox* checkbox_days;                                                   // 0x02B8 (size: 0x8)
    class UCheckBox* checkbox_grime;                                                  // 0x02C0 (size: 0x8)
    class UCheckBox* checkbox_lvls;                                                   // 0x02C8 (size: 0x8)
    class UCheckBox* checkbox_objs;                                                   // 0x02D0 (size: 0x8)
    class UCheckBox* checkbox_playerEff;                                              // 0x02D8 (size: 0x8)
    class UCheckBox* checkbox_playerEquip;                                            // 0x02E0 (size: 0x8)
    class UCheckBox* checkbox_playerInv;                                              // 0x02E8 (size: 0x8)
    class UCheckBox* checkbox_playerPos;                                              // 0x02F0 (size: 0x8)
    class UCheckBox* checkbox_playerStats;                                            // 0x02F8 (size: 0x8)
    class UCheckBox* checkbox_points;                                                 // 0x0300 (size: 0x8)
    class UCheckBox* checkbox_prints;                                                 // 0x0308 (size: 0x8)
    class UCheckBox* checkbox_removeGarbagePiles;                                     // 0x0310 (size: 0x8)
    class UExpandableArea* EA_atv;                                                    // 0x0318 (size: 0x8)
    class UExpandableArea* EA_debug;                                                  // 0x0320 (size: 0x8)
    class UExpandableArea* EA_example;                                                // 0x0328 (size: 0x8)
    class UExpandableArea* EA_misc;                                                   // 0x0330 (size: 0x8)
    class UExpandableArea* EA_player;                                                 // 0x0338 (size: 0x8)
    class UExpandableArea* EA_world;                                                  // 0x0340 (size: 0x8)
    class UImage* Image_106;                                                          // 0x0348 (size: 0x8)
    class UScrollBox* scrollboxRoot;                                                  // 0x0350 (size: 0x8)
    class UEditableTextBox* textbox_set_level;                                        // 0x0358 (size: 0x8)
    class UEditableTextBox* textbox_set_mainmap;                                      // 0x0360 (size: 0x8)
    class UEditableTextBox* textbox_set_movesavedata;                                 // 0x0368 (size: 0x8)
    class UEditableTextBox* textbox_set_subarea;                                      // 0x0370 (size: 0x8)
    class UEditableTextBox* textbox_set_sublevel_find;                                // 0x0378 (size: 0x8)
    class UEditableTextBox* textbox_set_sublevel_replace;                             // 0x0380 (size: 0x8)
    class UTextBlock* txt_days;                                                       // 0x0388 (size: 0x8)
    class UTextBlock* txt_days_1;                                                     // 0x0390 (size: 0x8)
    class UTextBlock* txt_top;                                                        // 0x0398 (size: 0x8)
    class Uuicomp_saveSlot_C* saveSlot;                                               // 0x03A0 (size: 0x8)
    int32 startDay_res;                                                               // 0x03A8 (size: 0x4)
    int32 maxDay;                                                                     // 0x03AC (size: 0x4)
    class UsaveSlot_C* loadedSaveSlot;                                                // 0x03B0 (size: 0x8)

    void getSearchName(FName& Name);
    void updTxt();
    void upd();
    void setIndex(int32 Index);
    void triggerRandom();
    void BndEvt__button_okay_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_back_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void resume();
    void BndEvt__button_day_plus_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_day_minus_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_resetSave_button_back_1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_resetSave(int32 EntryPoint);
}; // Size: 0x3B8

#endif
