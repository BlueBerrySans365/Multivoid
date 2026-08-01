#ifndef UE4SS_SDK_ui_playerInventory_HPP
#define UE4SS_SDK_ui_playerInventory_HPP

class Uui_playerInventory_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_a_disch;                                                    // 0x0268 (size: 0x8)
    class UButton* Button_a_disch_1;                                                  // 0x0270 (size: 0x8)
    class UButton* Button_a_drop_1;                                                   // 0x0278 (size: 0x8)
    class UButton* Button_a_equip;                                                    // 0x0280 (size: 0x8)
    class UButton* Button_a_hold;                                                     // 0x0288 (size: 0x8)
    class UButton* Button_a_info;                                                     // 0x0290 (size: 0x8)
    class UButton* Button_a_place;                                                    // 0x0298 (size: 0x8)
    class UButton* Button_a_take;                                                     // 0x02A0 (size: 0x8)
    class UButton* Button_b;                                                          // 0x02A8 (size: 0x8)
    class UCanvasPanel* canvas_containerInventory;                                    // 0x02B0 (size: 0x8)
    class UCanvasPanel* canvas_hovertext;                                             // 0x02B8 (size: 0x8)
    class UCanvasPanel* canvas_inventory;                                             // 0x02C0 (size: 0x8)
    class UGridPanel* Grid_equipment;                                                 // 0x02C8 (size: 0x8)
    class UImage* Image_1;                                                            // 0x02D0 (size: 0x8)
    class UImage* Image_2;                                                            // 0x02D8 (size: 0x8)
    class UImage* Image_3;                                                            // 0x02E0 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02E8 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02F0 (size: 0x8)
    class UImage* Image_9;                                                            // 0x02F8 (size: 0x8)
    class UImage* Image_10;                                                           // 0x0300 (size: 0x8)
    class UImage* Image_12;                                                           // 0x0308 (size: 0x8)
    class UImage* Image_13;                                                           // 0x0310 (size: 0x8)
    class UImage* Image_14;                                                           // 0x0318 (size: 0x8)
    class UImage* Image_15;                                                           // 0x0320 (size: 0x8)
    class UImage* Image_18;                                                           // 0x0328 (size: 0x8)
    class UImage* Image_19;                                                           // 0x0330 (size: 0x8)
    class UImage* Image_20;                                                           // 0x0338 (size: 0x8)
    class UImage* Image_21;                                                           // 0x0340 (size: 0x8)
    class UImage* Image_24;                                                           // 0x0348 (size: 0x8)
    class UImage* Image_25;                                                           // 0x0350 (size: 0x8)
    class UImage* Image_27;                                                           // 0x0358 (size: 0x8)
    class UImage* Image_33;                                                           // 0x0360 (size: 0x8)
    class UImage* Image_38;                                                           // 0x0368 (size: 0x8)
    class UImage* Image_124;                                                          // 0x0370 (size: 0x8)
    class UImage* Image_134;                                                          // 0x0378 (size: 0x8)
    class UImage* img_desc;                                                           // 0x0380 (size: 0x8)
    class UScrollBox* ScrollBox_75;                                                   // 0x0388 (size: 0x8)
    class UScrollBox* ScrollBox_prop;                                                 // 0x0390 (size: 0x8)
    class UScrollBox* ScrollBox_recipes;                                              // 0x0398 (size: 0x8)
    class UScrollBox* ScrollBox_recipesTxt;                                           // 0x03A0 (size: 0x8)
    class UTextBlock* text_bp;                                                        // 0x03A8 (size: 0x8)
    class UTextBlock* text_recipeName;                                                // 0x03B0 (size: 0x8)
    class UTextBlock* text_recipes;                                                   // 0x03B8 (size: 0x8)
    class UTextBlock* text_recipesAm;                                                 // 0x03C0 (size: 0x8)
    class UTextBlock* text_revcraft;                                                  // 0x03C8 (size: 0x8)
    class UTextBlock* text_stackButton;                                               // 0x03D0 (size: 0x8)
    class UEditableTextBox* textbox_search;                                           // 0x03D8 (size: 0x8)
    class UTextBlock* txt_desc;                                                       // 0x03E0 (size: 0x8)
    class UTextBlock* txt_descName;                                                   // 0x03E8 (size: 0x8)
    class UTextBlock* txt_descVolume;                                                 // 0x03F0 (size: 0x8)
    class UTextBlock* txt_name;                                                       // 0x03F8 (size: 0x8)
    class UTextBlock* txt_v;                                                          // 0x0400 (size: 0x8)
    class UTextBlock* txt_v_pr;                                                       // 0x0408 (size: 0x8)
    class UVerticalBox* vbox_list;                                                    // 0x0410 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_54;                                         // 0x0418 (size: 0x8)
    class Aprop_container_C* as_prop;                                                 // 0x0420 (size: 0x8)
    TArray<class Uuicomp_playerInvSlot_C*> slots_player;                              // 0x0428 (size: 0x10)
    int32 selected;                                                                   // 0x0438 (size: 0x4)
    TArray<class Uuicomp_playerInvContainerSlot_C*> slots_prop;                       // 0x0440 (size: 0x10)
    class Aprop_inventoryContainer_player_C* as_player;                               // 0x0450 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> objs;                                       // 0x0458 (size: 0x10)
    TArray<class Uuicomp_equipmentSlot_C*> equipmentSlots;                            // 0x0468 (size: 0x10)
    bool canEquip;                                                                    // 0x0478 (size: 0x1)
    bool canex;                                                                       // 0x0479 (size: 0x1)
    TArray<int32> amounts_player;                                                     // 0x0480 (size: 0x10)
    TArray<int32> amounts_cont;                                                       // 0x0490 (size: 0x10)
    TArray<FName> name_player;                                                        // 0x04A0 (size: 0x10)
    TArray<FName> name_cont;                                                          // 0x04B0 (size: 0x10)
    TArray<int32> playerListIds;                                                      // 0x04C0 (size: 0x10)
    int32 lastind;                                                                    // 0x04D0 (size: 0x4)
    FName lastName;                                                                   // 0x04D4 (size: 0x8)
    int32 lastSelected;                                                               // 0x04DC (size: 0x4)
    int32 selectedFromHotbar;                                                         // 0x04E0 (size: 0x4)
    bool stackItems;                                                                  // 0x04E4 (size: 0x1)
    class Aprop_container_C* entered;                                                 // 0x04E8 (size: 0x8)
    bool selectFromHotbar;                                                            // 0x04F0 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x04F8 (size: 0x8)
    TArray<class Uuicomp_recipeItemSlot_C*> slots_recipes;                            // 0x0500 (size: 0x10)
    class Uuicomp_recipeItemSlot_C* selectedRecipeSlot;                               // 0x0510 (size: 0x8)
    int32 NewVar_0;                                                                   // 0x0518 (size: 0x4)
    Fui_playerInventory_CInventoryUpdated inventoryUpdated;                           // 0x0520 (size: 0x10)
    void inventoryUpdated();
    class Uuicomp_playerInvContainerSlot_C* hoverContainerSlot;                       // 0x0530 (size: 0x8)
    class UObject* comp;                                                              // 0x0538 (size: 0x8)
    class UObject* NewVar_1;                                                          // 0x0540 (size: 0x8)

    void setHoverContainerSlot(class Uuicomp_playerInvContainerSlot_C* containerSlot);
    int32 makeSelected();
    void searchRecipe(FString Name);
    void formRecipe(Fstruct_crafting Data);
    void selectRecipeSlot(class Uuicomp_recipeItemSlot_C* selectedRecipeSlot);
    void genRecipe();
    int32 getInd();
    void GetName(const Fstruct_save& struct_save, FName& Name, FName& Tag, FName& oName);
    void setHovertext(FText InText, bool showList);
    void upd_equipment();
    void gen();
    void updSelect();
    void Info(int32 Index);
    void Exit();
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void gen_player(class Aprop_container_C* Enter, bool Double);
    void BndEvt__Button_b_2_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_a_drop_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__Button_a_drop_1_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_a_info_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_a+place_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void em_take();
    void em_drop();
    void em_place();
    void em_info();
    void BndEvt__Button_a_hold_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void em_hold();
    void BndEvt__Button_a_equip_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void em_equip();
    void nodelayExit();
    void delayExit();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__umg_propInv_Button_a_disch_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_propInv_Button_a_disch_1_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__Button_b_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_playerInventory_Button_a_recipes_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_playerInventory_textbox_search_K2Node_ComponentBoundEvent_12_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void dischargeFlashlight();
    void ExecuteUbergraph_ui_playerInventory(int32 EntryPoint);
    void inventoryUpdated__DelegateSignature();
}; // Size: 0x548

#endif
