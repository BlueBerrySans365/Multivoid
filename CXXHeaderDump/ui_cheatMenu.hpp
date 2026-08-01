#ifndef UE4SS_SDK_ui_cheatMenu_HPP
#define UE4SS_SDK_ui_cheatMenu_HPP

class Uui_cheatMenu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_cheats;                                                     // 0x0268 (size: 0x8)
    class UButton* button_events;                                                     // 0x0270 (size: 0x8)
    class UButton* button_lvl;                                                        // 0x0278 (size: 0x8)
    class UButton* button_places;                                                     // 0x0280 (size: 0x8)
    class UButton* button_signals;                                                    // 0x0288 (size: 0x8)
    class UCanvasPanel* CanvasPanel_events;                                           // 0x0290 (size: 0x8)
    class UCanvasPanel* CanvasPanel_places;                                           // 0x0298 (size: 0x8)
    class UCanvasPanel* CanvasPanel_sigs;                                             // 0x02A0 (size: 0x8)
    class UEditableTextBox* Etb_ach;                                                  // 0x02A8 (size: 0x8)
    class UEditableTextBox* Etb_ach_r;                                                // 0x02B0 (size: 0x8)
    class UEditableTextBox* Etb_ach_r_1;                                              // 0x02B8 (size: 0x8)
    class UEditableTextBox* etb_forceSignal;                                          // 0x02C0 (size: 0x8)
    class UEditableTextBox* etb_forceSignal_1;                                        // 0x02C8 (size: 0x8)
    class UEditableTextBox* Etb_hash;                                                 // 0x02D0 (size: 0x8)
    class UEditableTextBox* Etb_hash_1;                                               // 0x02D8 (size: 0x8)
    class UEditableTextBox* Etb_search;                                               // 0x02E0 (size: 0x8)
    class UEditableTextBox* Etb_search_events;                                        // 0x02E8 (size: 0x8)
    class UEditableTextBox* Etb_search_places;                                        // 0x02F0 (size: 0x8)
    class UEditableTextBox* Etb_search_signals;                                       // 0x02F8 (size: 0x8)
    class UImage* Image_36;                                                           // 0x0300 (size: 0x8)
    class UImage* Image_161;                                                          // 0x0308 (size: 0x8)
    class UImage* image_border;                                                       // 0x0310 (size: 0x8)
    class UScrollBox* ScrollBox_cheats;                                               // 0x0318 (size: 0x8)
    class UScrollBox* ScrollBox_events;                                               // 0x0320 (size: 0x8)
    class UScrollBox* ScrollBox_lvl;                                                  // 0x0328 (size: 0x8)
    class UScrollBox* ScrollBox_lvl_1;                                                // 0x0330 (size: 0x8)
    class UScrollBox* ScrollBox_places;                                               // 0x0338 (size: 0x8)
    class UScrollBox* ScrollBox_signals;                                              // 0x0340 (size: 0x8)
    class UTextBlock* text_levelDesc;                                                 // 0x0348 (size: 0x8)
    class UWidgetSwitcher* WidgetSwitcher_72;                                         // 0x0350 (size: 0x8)
    TMap<class FName, class FText> cheats;                                            // 0x0358 (size: 0x50)
    TArray<float> ws;                                                                 // 0x03A8 (size: 0x10)
    float sum;                                                                        // 0x03B8 (size: 0x4)
    class AmainGamemode_C* GameMode;                                                  // 0x03C0 (size: 0x8)
    bool isred;                                                                       // 0x03C8 (size: 0x1)
    FString searchPrompt;                                                             // 0x03D0 (size: 0x10)
    TArray<class Uuicomp_signalMenuSlot_C*> slots_signals;                            // 0x03E0 (size: 0x10)
    TArray<class Uui_eventRun_C*> slots_events;                                       // 0x03F0 (size: 0x10)
    TArray<class Uuicomp_cheatMenuSlot_C*> slots_cheats;                              // 0x0400 (size: 0x10)
    TArray<class Uui_placeTp_C*> slots_places;                                        // 0x0410 (size: 0x10)
    TArray<FString> names_cheats;                                                     // 0x0420 (size: 0x10)
    TArray<FString> names_places;                                                     // 0x0430 (size: 0x10)
    TArray<FString> names_signals;                                                    // 0x0440 (size: 0x10)
    TArray<FString> names_events;                                                     // 0x0450 (size: 0x10)
    bool digitems;                                                                    // 0x0460 (size: 0x1)

    void setLvlDesc(class Uui_cheatMenuBt_C* Slot);
    void NewFunction_0(TMap<class FName, class FText>& NewParam);
    void Filter();
    void spawnDailyTask();
    void cheat(int32 Type, FName Name);
    void Construct();
    void BndEvt__EditableTextBox_forceSignal_1_K2Node_ComponentBoundEvent_0_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__Etb_hash_K2Node_ComponentBoundEvent_2_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__umg_cheatMenu_button_cheats_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_cheatMenu_button_signals_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_cheatMenu_button_places_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_cheatMenu_button_events_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_cheatMenu_Etb_hash_1_K2Node_ComponentBoundEvent_7_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_cheatMenu_button_lvl_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_cheatMenu_Etb_ach_K2Node_ComponentBoundEvent_5_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_cheatMenu_Etb_ach_r_K2Node_ComponentBoundEvent_10_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_cheatMenu_Etb_search_K2Node_ComponentBoundEvent_15_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__ui_cheatMenu_Etb_search_events_K2Node_ComponentBoundEvent_16_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__ui_cheatMenu_Etb_search_places_K2Node_ComponentBoundEvent_17_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__ui_cheatMenu_Etb_search_signals_K2Node_ComponentBoundEvent_18_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void Result(bool Result);
    void ExecuteUbergraph_ui_cheatMenu(int32 EntryPoint);
}; // Size: 0x461

#endif
