#ifndef UE4SS_SDK_ui_printer_HPP
#define UE4SS_SDK_ui_printer_HPP

class Uui_printer_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_config;                                                     // 0x0268 (size: 0x8)
    class UButton* button_config_1;                                                   // 0x0270 (size: 0x8)
    class UButton* button_destroy;                                                    // 0x0278 (size: 0x8)
    class UButton* Button_print;                                                      // 0x0280 (size: 0x8)
    class UButton* Button_printCheat;                                                 // 0x0288 (size: 0x8)
    class UButton* Button_refresh;                                                    // 0x0290 (size: 0x8)
    class UButton* button_resetIco;                                                   // 0x0298 (size: 0x8)
    class UButton* Button_search;                                                     // 0x02A0 (size: 0x8)
    class UCheckBox* checkbox_confirm;                                                // 0x02A8 (size: 0x8)
    class UGridPanel* grid_list;                                                      // 0x02B0 (size: 0x8)
    class UScrollBox* ScrollBox_list;                                                 // 0x02B8 (size: 0x8)
    class UEditableTextBox* textbox_search;                                           // 0x02C0 (size: 0x8)
    class UTextBlock* txt_coll;                                                       // 0x02C8 (size: 0x8)
    class UTextBlock* txt_name;                                                       // 0x02D0 (size: 0x8)
    class UTextBlock* txt_norm;                                                       // 0x02D8 (size: 0x8)
    class UTextBlock* txt_pbr;                                                        // 0x02E0 (size: 0x8)
    class UTextBlock* txt_secs;                                                       // 0x02E8 (size: 0x8)
    class UTextBlock* txt_tex;                                                        // 0x02F0 (size: 0x8)
    class UTextBlock* txt_verts;                                                      // 0x02F8 (size: 0x8)
    FString activeName;                                                               // 0x0300 (size: 0x10)
    TArray<class Uuicomp_printerSlot_C*> Slots;                                       // 0x0310 (size: 0x10)
    class A3dPrinterAnim_C* printer;                                                  // 0x0320 (size: 0x8)
    FString pathToActiveModel;                                                        // 0x0328 (size: 0x10)
    FString currentName;                                                              // 0x0338 (size: 0x10)
    class A3dPrinterProcessor_C* processor;                                           // 0x0348 (size: 0x8)
    TArray<FName> Out Row Names;                                                      // 0x0350 (size: 0x10)
    class Uuicomp_printerSlot_C* selectedSlot;                                        // 0x0360 (size: 0x8)
    FString searchPrompt;                                                             // 0x0368 (size: 0x10)
    bool searching;                                                                   // 0x0378 (size: 0x1)
    int32 counter;                                                                    // 0x037C (size: 0x4)

    void resetConfirm();
    void destroySelectedInstances();
    void Filter();
    void gatherConfigInfo(const Fstruct_multisectionCustomMesh& struct_multisectionCustomMesh, FString C);
    void createConfig(bool skipCheck);
    void gatherConfigCurrentName(const Fstruct_multisectionCustomMesh& struct_multisectionCustomMesh);
    void prepareCfg(FString& cfg);
    void nameToMaterial(FString Name, uint8& Mat);
    void nameToFilter(FString Name, TEnumAsByte<TextureFilter>& Filter);
    void Info(const TArray<FVector>& totalVerts);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void gen();
    void Open();
    void BndEvt__umg_printer_Button_refresh_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void quit();
    void Construct();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BndEvt__umg_printer_Button_print_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_printer_Button_printCheat_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_printer_button_config_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_printer_button_config_1_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_printer_button_resetIco_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_printer_textbox_search_K2Node_ComponentBoundEvent_2_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__ui_printer_Button_search_K2Node_ComponentBoundEvent_4_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_textbox_search_K2Node_ComponentBoundEvent_13_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_printer_button_destroy_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_printer(int32 EntryPoint);
}; // Size: 0x380

#endif
