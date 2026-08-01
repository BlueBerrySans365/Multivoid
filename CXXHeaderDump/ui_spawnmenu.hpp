#ifndef UE4SS_SDK_ui_spawnmenu_HPP
#define UE4SS_SDK_ui_spawnmenu_HPP

class Uui_spawnmenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_97;                                                         // 0x0268 (size: 0x8)
    class UButton* button_focusOnParams;                                              // 0x0270 (size: 0x8)
    class UButton* Button_search;                                                     // 0x0278 (size: 0x8)
    class UCanvasPanel* canvas_hovertext;                                             // 0x0280 (size: 0x8)
    class UCheckBox* CheckBox_spoiler;                                                // 0x0288 (size: 0x8)
    class UGridPanel* GridPanel_148;                                                  // 0x0290 (size: 0x8)
    class UHorizontalBox* hb_tabs;                                                    // 0x0298 (size: 0x8)
    class UImage* Image_134;                                                          // 0x02A0 (size: 0x8)
    class UImage* Image_142;                                                          // 0x02A8 (size: 0x8)
    class UImage* image_border;                                                       // 0x02B0 (size: 0x8)
    class UScrollBox* scrollbox_toolList;                                             // 0x02B8 (size: 0x8)
    class UScrollBox* scrollbox_toolProps;                                            // 0x02C0 (size: 0x8)
    class USlider* slider_page;                                                       // 0x02C8 (size: 0x8)
    class UTextBlock* text_toolName;                                                  // 0x02D0 (size: 0x8)
    class UTextBlock* text_toolName_1;                                                // 0x02D8 (size: 0x8)
    class UEditableTextBox* textbox_search;                                           // 0x02E0 (size: 0x8)
    class UTextBlock* txt_name;                                                       // 0x02E8 (size: 0x8)
    TArray<class Uuicomp_spawnmenuSlot_C*> Slots;                                     // 0x02F0 (size: 0x10)
    int32 settype;                                                                    // 0x0300 (size: 0x4)
    TSubclassOf<class AActor> spec;                                                   // 0x0308 (size: 0x8)
    int32 is;                                                                         // 0x0310 (size: 0x4)
    FString Search;                                                                   // 0x0318 (size: 0x10)
    bool searching;                                                                   // 0x0328 (size: 0x1)
    bool showSpoilers;                                                                // 0x0329 (size: 0x1)
    TArray<TEnumAsByte<enum_spawnmenuTabs::Type>> categoriesActive;                   // 0x0330 (size: 0x10)
    TArray<bool> hs;                                                                  // 0x0340 (size: 0x10)
    int32 page;                                                                       // 0x0350 (size: 0x4)
    int32 maxPage;                                                                    // 0x0354 (size: 0x4)
    FName toolgunSpawn;                                                               // 0x0358 (size: 0x8)
    FIntPoint GridSize;                                                               // 0x0360 (size: 0x8)
    TEnumAsByte<enum_spawnmenuTabs::Type> selectedTab;                                // 0x0368 (size: 0x1)
    TArray<class Uui_spawnMenuTabButton_C*> Tabs;                                     // 0x0370 (size: 0x10)
    int32 maxObj;                                                                     // 0x0380 (size: 0x4)
    TArray<class Uuicomp_spawnmenuSlot_C*> slots_visible;                             // 0x0388 (size: 0x10)
    TArray<class Uuicomp_spawnmenuSlot_C*> slots_available;                           // 0x0398 (size: 0x10)
    int32 availableLength;                                                            // 0x03A8 (size: 0x4)
    TArray<class Uui_toolCategory_C*> toolCategories;                                 // 0x03B0 (size: 0x10)
    TArray<TEnumAsByte<enum_toolCategory::Type>> Categories;                          // 0x03C0 (size: 0x10)
    TArray<class Uui_spawnmenuToolButton_C*> toolList;                                // 0x03D0 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x03E0 (size: 0x8)
    FName activeTool;                                                                 // 0x03E8 (size: 0x8)
    Fstruct_toolParameters toolParameters;                                            // 0x03F0 (size: 0x280)
    TArray<class Uui_toolParameter_C*> toolParamsSlots;                               // 0x0670 (size: 0x10)
    TArray<class AtoolObject_C*> toolObjectReferences;                                // 0x0680 (size: 0x10)
    Fstruct_toolData toolData;                                                        // 0x0690 (size: 0x48)
    bool focusedOnParams;                                                             // 0x06D8 (size: 0x1)
    Fui_spawnmenu_CToolPicked toolPicked;                                             // 0x06E0 (size: 0x10)
    void toolPicked(class AtoolObject_C* toolReference);
    class AtoolObject_C* selectedToolReference;                                       // 0x06F0 (size: 0x8)
    bool hoverOverSpawnMenu;                                                          // 0x06F8 (size: 0x1)
    FEventReply Reply;                                                                // 0x0700 (size: 0xB8)

    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void updateToolParameters(int32 toolObjectRef);
    void opened();
    void setParam(FName Name, int32 Index, TEnumAsByte<enum_toolParameterType::Type> Type, class Uui_toolParameter_C* Slot);
    void genToolParamaters(int32 toolObjectRef, Fstruct_toolData toolData, bool upd);
    void genToolList();
    void filterList();
    void setMaxSlider();
    void setPageList();
    void SetName(FText InText);
    void Spawn(FName Name);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__umg_spawnmenu_textbox_search_K2Node_ComponentBoundEvent_0_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__umg_spawnmenu_Button_186_K2Node_ComponentBoundEvent_1_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__umg_spawnmenu_CheckBox_spoiler_K2Node_ComponentBoundEvent_2_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__ui_spawnmenu_slider_page_K2Node_ComponentBoundEvent_14_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ui_spawnmenu_button_focusOnParams_K2Node_ComponentBoundEvent_5_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_spawnmenu_Button_97_K2Node_ComponentBoundEvent_4_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ui_spawnmenu_Button_97_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void ExecuteUbergraph_ui_spawnmenu(int32 EntryPoint);
    void toolPicked__DelegateSignature(class AtoolObject_C* toolReference);
}; // Size: 0x7B8

#endif
