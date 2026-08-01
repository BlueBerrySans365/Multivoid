#ifndef UE4SS_SDK_ui_tvInterface_HPP
#define UE4SS_SDK_ui_tvInterface_HPP

class Uui_tvInterface_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_104;                                                        // 0x0268 (size: 0x8)
    class UButton* Button_channel0_0;                                                 // 0x0270 (size: 0x8)
    class UButton* Button_channel0_1;                                                 // 0x0278 (size: 0x8)
    class UButton* Button_channel0_2;                                                 // 0x0280 (size: 0x8)
    class UButton* Button_channel0_3;                                                 // 0x0288 (size: 0x8)
    class UButton* Button_channel0_4;                                                 // 0x0290 (size: 0x8)
    class UButton* Button_channel0_5;                                                 // 0x0298 (size: 0x8)
    class UButton* Button_channel0_6;                                                 // 0x02A0 (size: 0x8)
    class UButton* Button_channel0_7;                                                 // 0x02A8 (size: 0x8)
    class UButton* Button_channel0_8;                                                 // 0x02B0 (size: 0x8)
    class UButton* Button_channel0_9;                                                 // 0x02B8 (size: 0x8)
    class UButton* Button_channel0_10;                                                // 0x02C0 (size: 0x8)
    class UButton* Button_channel0_11;                                                // 0x02C8 (size: 0x8)
    class UButton* Button_channel0_12;                                                // 0x02D0 (size: 0x8)
    class UButton* Button_channel0_13;                                                // 0x02D8 (size: 0x8)
    class UButton* Button_channel0_14;                                                // 0x02E0 (size: 0x8)
    class UButton* Button_channel0_15;                                                // 0x02E8 (size: 0x8)
    class UButton* button_play;                                                       // 0x02F0 (size: 0x8)
    class UButton* Button_refresh;                                                    // 0x02F8 (size: 0x8)
    class UButton* Button_search;                                                     // 0x0300 (size: 0x8)
    class UButton* Button_search_1;                                                   // 0x0308 (size: 0x8)
    class UButton* Button_skip;                                                       // 0x0310 (size: 0x8)
    class UButton* button_stop;                                                       // 0x0318 (size: 0x8)
    class UImage* img_scr;                                                            // 0x0320 (size: 0x8)
    class UScrollBox* ScrollBox_list;                                                 // 0x0328 (size: 0x8)
    class USlider* Slider_brightness;                                                 // 0x0330 (size: 0x8)
    class USlider* Slider_playback;                                                   // 0x0338 (size: 0x8)
    class USlider* Slider_squeezeX;                                                   // 0x0340 (size: 0x8)
    class USlider* Slider_squeezeY;                                                   // 0x0348 (size: 0x8)
    class USlider* Slider_volume;                                                     // 0x0350 (size: 0x8)
    class UEditableTextBox* textbox_search;                                           // 0x0358 (size: 0x8)
    class UEditableTextBox* textbox_search_1;                                         // 0x0360 (size: 0x8)
    class UTextBlock* txt_playback;                                                   // 0x0368 (size: 0x8)
    class UTextBlock* txt_playType;                                                   // 0x0370 (size: 0x8)
    class UTextBlock* txt_squeezeX;                                                   // 0x0378 (size: 0x8)
    class UTextBlock* txt_squeezeY;                                                   // 0x0380 (size: 0x8)
    class UTextBlock* txt_station;                                                    // 0x0388 (size: 0x8)
    class UTextBlock* txt_status;                                                     // 0x0390 (size: 0x8)
    class UTextBlock* txt_volume;                                                     // 0x0398 (size: 0x8)
    class UTextBlock* txt_volume_1;                                                   // 0x03A0 (size: 0x8)
    TArray<FString> stations;                                                         // 0x03A8 (size: 0x10)
    TArray<class Uuicomp_tvInterfaceSlot_C*> Slots;                                   // 0x03B8 (size: 0x10)
    class Aprop_tv2_C* radio;                                                         // 0x03C8 (size: 0x8)
    Fstruct_tv Data;                                                                  // 0x03D0 (size: 0x28)
    FTimespan Duration;                                                               // 0x03F8 (size: 0x8)
    bool sliderGrab;                                                                  // 0x0400 (size: 0x1)
    bool searching;                                                                   // 0x0401 (size: 0x1)
    int32 selectedChannel;                                                            // 0x0404 (size: 0x4)
    TArray<class UButton*> channelButtons;                                            // 0x0408 (size: 0x10)

    void makeButtons();
    void updateButtons();
    void setChannel(int32 Add);
    void updChannel();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void setValues();
    void setPB(float Scalar);
    void setPlaybackTime(FTimespan InTimespan);
    void SetDuration(FTimespan Duration);
    void selectDeco();
    void select(Fstruct_tv Data, bool pausePlayer);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void gen();
    void Open(class Aprop_tv2_C* radio);
    void quit();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BndEvt__umg_onlineRadio_Button_play_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_onlineRadio_Button_stop_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_onlineRadio_Slider_volume_K2Node_ComponentBoundEvent_3_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__umg_onlineRadio_Button_refresh_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_tvOffline_Button_104_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_tvOffline_Slider_playback_K2Node_ComponentBoundEvent_2_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void BndEvt__umg_tvOffline_Slider_playback_K2Node_ComponentBoundEvent_6_OnMouseCaptureBeginEvent__DelegateSignature();
    void BndEvt__umg_tvOffline_Slider_playback_K2Node_ComponentBoundEvent_7_OnMouseCaptureEndEvent__DelegateSignature();
    void BndEvt__umg_tvOffline_Button_skip_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvOffline_Slider_brightness_K2Node_ComponentBoundEvent_9_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ui_tvInterface_textbox_search_K2Node_ComponentBoundEvent_10_OnEditableTextBoxChangedEvent__DelegateSignature(const FText& Text);
    void BndEvt__ui_tvInterface_Button_search_K2Node_ComponentBoundEvent_12_OnButtonPressedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_textbox_search_K2Node_ComponentBoundEvent_13_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_tvInterface_textbox_search_1_K2Node_ComponentBoundEvent_14_OnEditableTextBoxCommittedEvent__DelegateSignature(const FText& Text, TEnumAsByte<ETextCommit::Type> CommitMethod);
    void BndEvt__ui_tvInterface_Button_search_1_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channelUp_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__ui_tvInterface_Button_channel0_1_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_2_K2Node_ComponentBoundEvent_21_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_3_K2Node_ComponentBoundEvent_22_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_4_K2Node_ComponentBoundEvent_23_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_5_K2Node_ComponentBoundEvent_24_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_6_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_7_K2Node_ComponentBoundEvent_26_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_8_K2Node_ComponentBoundEvent_27_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_9_K2Node_ComponentBoundEvent_28_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_10_K2Node_ComponentBoundEvent_29_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_11_K2Node_ComponentBoundEvent_30_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_12_K2Node_ComponentBoundEvent_31_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_13_K2Node_ComponentBoundEvent_32_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_14_K2Node_ComponentBoundEvent_33_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Button_channel0_15_K2Node_ComponentBoundEvent_34_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_tvInterface_Slider_squeezeX_K2Node_ComponentBoundEvent_11_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ui_tvInterface_Slider_squeezeY_K2Node_ComponentBoundEvent_17_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void ExecuteUbergraph_ui_tvInterface(int32 EntryPoint);
}; // Size: 0x418

#endif
