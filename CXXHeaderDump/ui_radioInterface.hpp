#ifndef UE4SS_SDK_ui_radioInterface_HPP
#define UE4SS_SDK_ui_radioInterface_HPP

class Uui_radioInterface_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_104;                                                        // 0x0268 (size: 0x8)
    class UButton* button_play;                                                       // 0x0270 (size: 0x8)
    class UButton* Button_refresh;                                                    // 0x0278 (size: 0x8)
    class UButton* Button_search;                                                     // 0x0280 (size: 0x8)
    class UButton* Button_skip;                                                       // 0x0288 (size: 0x8)
    class UButton* button_stop;                                                       // 0x0290 (size: 0x8)
    class UScrollBox* ScrollBox_list;                                                 // 0x0298 (size: 0x8)
    class USlider* Slider_volume;                                                     // 0x02A0 (size: 0x8)
    class UEditableTextBox* textbox_search;                                           // 0x02A8 (size: 0x8)
    class UTextBlock* txt_playType;                                                   // 0x02B0 (size: 0x8)
    class UTextBlock* txt_station;                                                    // 0x02B8 (size: 0x8)
    class UTextBlock* txt_status;                                                     // 0x02C0 (size: 0x8)
    class UTextBlock* txt_volume;                                                     // 0x02C8 (size: 0x8)
    TArray<FString> stations;                                                         // 0x02D0 (size: 0x10)
    TArray<class Uuicomp_radioInterfaceSlot_C*> Slots;                                // 0x02E0 (size: 0x10)
    FString activeStationUrl;                                                         // 0x02F0 (size: 0x10)
    FString activeName;                                                               // 0x0300 (size: 0x10)
    class Aprop_radio_internet_C* radio;                                              // 0x0310 (size: 0x8)
    bool IsUrl;                                                                       // 0x0318 (size: 0x1)
    Fstruct_tv Data;                                                                  // 0x0320 (size: 0x28)

    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void select(Fstruct_tv Data, bool pausePlayer);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void gen();
    void Open(class Aprop_radio_internet_C* radio);
    void quit();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BndEvt__umg_onlineRadio_Button_play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_onlineRadio_Button_stop_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_onlineRadio_Slider_volume_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__umg_onlineRadio_Button_refresh_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_onlineRadio_Button_104_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_onlineRadio_Button_skip_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_textbox_search_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__ui_radioInterface_Button_search_K2Node_ComponentBoundEvent_8_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_textbox_search_K2Node_ComponentBoundEvent_13_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void ExecuteUbergraph_ui_radioInterface(int32 EntryPoint);
}; // Size: 0x348

#endif
