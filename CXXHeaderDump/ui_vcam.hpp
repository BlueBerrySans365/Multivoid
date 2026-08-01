#ifndef UE4SS_SDK_ui_vcam_HPP
#define UE4SS_SDK_ui_vcam_HPP

class Uui_vcam_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_controls_frustrum;                                          // 0x0268 (size: 0x8)
    class UButton* button_controls_microphone;                                        // 0x0270 (size: 0x8)
    class UButton* button_controls_playing;                                           // 0x0278 (size: 0x8)
    class UButton* button_controls_preview;                                           // 0x0280 (size: 0x8)
    class UButton* button_controls_recording;                                         // 0x0288 (size: 0x8)
    class UButton* button_filter_derivative;                                          // 0x0290 (size: 0x8)
    class UButton* button_filter_grayscale;                                           // 0x0298 (size: 0x8)
    class UButton* button_filter_negative;                                            // 0x02A0 (size: 0x8)
    class UButton* button_filter_none;                                                // 0x02A8 (size: 0x8)
    class UButton* button_filter_rainbow;                                             // 0x02B0 (size: 0x8)
    class UButton* button_filter_rainbow_1;                                           // 0x02B8 (size: 0x8)
    class UButton* button_filter_sepia;                                               // 0x02C0 (size: 0x8)
    class UButton* button_filter_shift120;                                            // 0x02C8 (size: 0x8)
    class UButton* button_filter_shift180;                                            // 0x02D0 (size: 0x8)
    class UButton* button_filter_shift240;                                            // 0x02D8 (size: 0x8)
    class UButton* button_filter_tintB;                                               // 0x02E0 (size: 0x8)
    class UButton* button_filter_tintG;                                               // 0x02E8 (size: 0x8)
    class UButton* button_filter_tintR;                                               // 0x02F0 (size: 0x8)
    class UButton* button_tab_controls;                                               // 0x02F8 (size: 0x8)
    class UButton* button_tab_filters;                                                // 0x0300 (size: 0x8)
    class UButton* button_tab_pp;                                                     // 0x0308 (size: 0x8)
    class UButton* button_tab_video;                                                  // 0x0310 (size: 0x8)
    class UCanvasPanel* canvas_option;                                                // 0x0318 (size: 0x8)
    class UCanvasPanel* canvas_optionMenu;                                            // 0x0320 (size: 0x8)
    class UCanvasPanel* canvas_preview;                                               // 0x0328 (size: 0x8)
    class UCanvasPanel* canvas_settings;                                              // 0x0330 (size: 0x8)
    class UCircularThrobber* CircularThrobber_52;                                     // 0x0338 (size: 0x8)
    class UEditableTextBox* ETB_pp_contrast;                                          // 0x0340 (size: 0x8)
    class UEditableTextBox* ETB_pp_gain;                                              // 0x0348 (size: 0x8)
    class UEditableTextBox* ETB_pp_gamma;                                             // 0x0350 (size: 0x8)
    class UEditableTextBox* ETB_pp_saturation;                                        // 0x0358 (size: 0x8)
    class UEditableTextBox* ETB_video_bitrateAud;                                     // 0x0360 (size: 0x8)
    class UEditableTextBox* ETB_video_bitrateVid;                                     // 0x0368 (size: 0x8)
    class UEditableTextBox* ETB_video_comp;                                           // 0x0370 (size: 0x8)
    class UEditableTextBox* ETB_video_fps;                                            // 0x0378 (size: 0x8)
    class UEditableTextBox* ETB_video_resX;                                           // 0x0380 (size: 0x8)
    class UEditableTextBox* ETB_video_resY;                                           // 0x0388 (size: 0x8)
    class UEditableTextBox* ETB_video_sampleRate;                                     // 0x0390 (size: 0x8)
    class UImage* Image_22;                                                           // 0x0398 (size: 0x8)
    class UImage* Image_23;                                                           // 0x03A0 (size: 0x8)
    class UImage* Image_25;                                                           // 0x03A8 (size: 0x8)
    class UImage* Image_26;                                                           // 0x03B0 (size: 0x8)
    class UImage* Image_27;                                                           // 0x03B8 (size: 0x8)
    class UImage* Image_28;                                                           // 0x03C0 (size: 0x8)
    class UImage* Image_29;                                                           // 0x03C8 (size: 0x8)
    class UImage* Image_30;                                                           // 0x03D0 (size: 0x8)
    class UImage* Image_31;                                                           // 0x03D8 (size: 0x8)
    class UImage* Image_32;                                                           // 0x03E0 (size: 0x8)
    class UImage* Image_33;                                                           // 0x03E8 (size: 0x8)
    class UImage* Image_34;                                                           // 0x03F0 (size: 0x8)
    class UImage* Image_35;                                                           // 0x03F8 (size: 0x8)
    class UImage* Image_36;                                                           // 0x0400 (size: 0x8)
    class UImage* Image_37;                                                           // 0x0408 (size: 0x8)
    class UImage* Image_38;                                                           // 0x0410 (size: 0x8)
    class UImage* Image_39;                                                           // 0x0418 (size: 0x8)
    class UImage* Image_40;                                                           // 0x0420 (size: 0x8)
    class UImage* Image_41;                                                           // 0x0428 (size: 0x8)
    class UImage* Image_42;                                                           // 0x0430 (size: 0x8)
    class UImage* Image_43;                                                           // 0x0438 (size: 0x8)
    class UImage* Image_44;                                                           // 0x0440 (size: 0x8)
    class UImage* Image_45;                                                           // 0x0448 (size: 0x8)
    class UImage* Image_46;                                                           // 0x0450 (size: 0x8)
    class UImage* Image_47;                                                           // 0x0458 (size: 0x8)
    class UImage* Image_48;                                                           // 0x0460 (size: 0x8)
    class UImage* Image_49;                                                           // 0x0468 (size: 0x8)
    class UImage* Image_50;                                                           // 0x0470 (size: 0x8)
    class UImage* Image_51;                                                           // 0x0478 (size: 0x8)
    class UImage* Image_52;                                                           // 0x0480 (size: 0x8)
    class UImage* Image_53;                                                           // 0x0488 (size: 0x8)
    class UImage* Image_54;                                                           // 0x0490 (size: 0x8)
    class UImage* Image_117;                                                          // 0x0498 (size: 0x8)
    class UImage* Image_144;                                                          // 0x04A0 (size: 0x8)
    class UImage* img_pause;                                                          // 0x04A8 (size: 0x8)
    class UImage* img_play;                                                           // 0x04B0 (size: 0x8)
    class UImage* img_preview;                                                        // 0x04B8 (size: 0x8)
    class UImage* img_stop;                                                           // 0x04C0 (size: 0x8)
    class UProgressBar* pb_timer;                                                     // 0x04C8 (size: 0x8)
    class USlider* slider_pp_contrast;                                                // 0x04D0 (size: 0x8)
    class USlider* slider_pp_gain;                                                    // 0x04D8 (size: 0x8)
    class USlider* slider_pp_gamma;                                                   // 0x04E0 (size: 0x8)
    class USlider* slider_pp_saturation;                                              // 0x04E8 (size: 0x8)
    class UWidgetSwitcher* switcher;                                                  // 0x04F0 (size: 0x8)
    class UWidgetSwitcher* switcher_settings;                                         // 0x04F8 (size: 0x8)
    class UTextBlock* text_abr;                                                       // 0x0500 (size: 0x8)
    class UTextBlock* text_asr;                                                       // 0x0508 (size: 0x8)
    class UTextBlock* text_battery;                                                   // 0x0510 (size: 0x8)
    class UTextBlock* text_comp;                                                      // 0x0518 (size: 0x8)
    class UTextBlock* text_controls_frustum;                                          // 0x0520 (size: 0x8)
    class UTextBlock* text_controls_microphone;                                       // 0x0528 (size: 0x8)
    class UTextBlock* text_controls_playing;                                          // 0x0530 (size: 0x8)
    class UTextBlock* text_controls_preview;                                          // 0x0538 (size: 0x8)
    class UTextBlock* text_controls_recording;                                        // 0x0540 (size: 0x8)
    class UTextBlock* text_exp;                                                       // 0x0548 (size: 0x8)
    class UTextBlock* text_fps;                                                       // 0x0550 (size: 0x8)
    class UTextBlock* text_optionFilter;                                              // 0x0558 (size: 0x8)
    class UTextBlock* text_optionFrus;                                                // 0x0560 (size: 0x8)
    class UTextBlock* text_optionMic;                                                 // 0x0568 (size: 0x8)
    class UTextBlock* text_optionPrev;                                                // 0x0570 (size: 0x8)
    class UTextBlock* text_res;                                                       // 0x0578 (size: 0x8)
    class UTextBlock* Text_time;                                                      // 0x0580 (size: 0x8)
    class UTextBlock* text_vbr;                                                       // 0x0588 (size: 0x8)
    int32 Option;                                                                     // 0x0590 (size: 0x4)
    class ARCM_cameraManager_C* Manager;                                              // 0x0598 (size: 0x8)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void updControlsSettings();
    void setTextBool(class UTextBlock* Text, bool Bool);
    void updSettings();
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void updOption();
    void setOption();
    void makeBattery(FString Prefix, float process, FString Suffix, int32 barSize, FString& Text);
    void intComs_signalDeleted();
    void intComs_signalSaved();
    void intComs_gamemodeBeginPlay();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_unfoc();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_gamemodePreLoad();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodeMakeKeys();
    void intComs_propRenderer_finishProps();
    void intComs_applyColor(FLinearColor Color);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_gamemodePostKeys();
    void intComs_triggerSnow(bool isSnow);
    void BndEvt__ui_vcam_button_tab_video_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_tab_pp_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_tab_filters_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void quit();
    void Open();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void BndEvt__ui_vcam_button_filter_derivative_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_filter_grayscale_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_filter_negative_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_filter_none_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_filter_rainbow_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_filter_sepia_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_filter_shift120_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_filter_shift180_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_filter_shift240_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_filter_tintB_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_filter_tintG_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_filter_tintR_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_tab_controls_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_controls_recording_K2Node_ComponentBoundEvent_16_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_controls_preview_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_controls_playing_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_controls_microphone_K2Node_ComponentBoundEvent_19_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_button_controls_frustrum_K2Node_ComponentBoundEvent_20_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_vcam_slider_pp_saturation_K2Node_ComponentBoundEvent_21_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ui_vcam_slider_pp_contrast_K2Node_ComponentBoundEvent_22_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ui_vcam_slider_pp_gamma_K2Node_ComponentBoundEvent_23_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ui_vcam_slider_pp_gain_K2Node_ComponentBoundEvent_24_OnFloatValueChangedEvent__DelegateSignature(float Value);
    void BndEvt__ui_vcam_button_filter_rainbow_1_K2Node_ComponentBoundEvent_25_OnButtonClickedEvent__DelegateSignature();
    void intComs_unfocused();
    void ExecuteUbergraph_ui_vcam(int32 EntryPoint);
}; // Size: 0x5A0

#endif
