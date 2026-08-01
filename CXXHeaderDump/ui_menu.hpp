#ifndef UE4SS_SDK_ui_menu_HPP
#define UE4SS_SDK_ui_menu_HPP

class Uui_menu_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* 123123;                                                         // 0x0268 (size: 0x8)
    class UTextBlock* 123123_1;                                                       // 0x0270 (size: 0x8)
    class UButton* button_achiv;                                                      // 0x0278 (size: 0x8)
    class UButton* button_credits;                                                    // 0x0280 (size: 0x8)
    class UButton* button_discord;                                                    // 0x0288 (size: 0x8)
    class UButton* button_exit;                                                       // 0x0290 (size: 0x8)
    class UButton* button_help;                                                       // 0x0298 (size: 0x8)
    class UButton* Button_hide;                                                       // 0x02A0 (size: 0x8)
    class UButton* button_itch;                                                       // 0x02A8 (size: 0x8)
    class UButton* button_Menu;                                                       // 0x02B0 (size: 0x8)
    class UButton* button_overwriteBackupSave;                                        // 0x02B8 (size: 0x8)
    class UButton* button_patreon;                                                    // 0x02C0 (size: 0x8)
    class UButton* button_Resume;                                                     // 0x02C8 (size: 0x8)
    class UButton* button_Save;                                                       // 0x02D0 (size: 0x8)
    class UButton* button_Settings;                                                   // 0x02D8 (size: 0x8)
    class UButton* button_start;                                                      // 0x02E0 (size: 0x8)
    class UButton* button_stats;                                                      // 0x02E8 (size: 0x8)
    class UButton* button_tutCanc;                                                    // 0x02F0 (size: 0x8)
    class UButton* button_tutOk;                                                      // 0x02F8 (size: 0x8)
    class UButton* button_twt;                                                        // 0x0300 (size: 0x8)
    class UButton* button_website;                                                    // 0x0308 (size: 0x8)
    class UCanvasPanel* canvas_begin;                                                 // 0x0310 (size: 0x8)
    class UCanvasPanel* canvas_blur;                                                  // 0x0318 (size: 0x8)
    class UCanvasPanel* canvas_loading;                                               // 0x0320 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0328 (size: 0x8)
    class UCanvasPanel* canvMenu;                                                     // 0x0330 (size: 0x8)
    class UImage* Image_0;                                                            // 0x0338 (size: 0x8)
    class UImage* Image_61;                                                           // 0x0340 (size: 0x8)
    class UImage* imgCur;                                                             // 0x0348 (size: 0x8)
    class UWidgetSwitcher* screenSwi;                                                 // 0x0350 (size: 0x8)
    class UWidgetSwitcher* switcher_1;                                                // 0x0358 (size: 0x8)
    class UWidgetSwitcher* switcher_widgets;                                          // 0x0360 (size: 0x8)
    class UTextBlock* tex_btnach;                                                     // 0x0368 (size: 0x8)
    class UTextBlock* tex_btncreds;                                                   // 0x0370 (size: 0x8)
    class UTextBlock* tex_btnext;                                                     // 0x0378 (size: 0x8)
    class UTextBlock* tex_btnhelp;                                                    // 0x0380 (size: 0x8)
    class UTextBlock* tex_btnmenu;                                                    // 0x0388 (size: 0x8)
    class UTextBlock* tex_btnresum;                                                   // 0x0390 (size: 0x8)
    class UTextBlock* tex_btnsave;                                                    // 0x0398 (size: 0x8)
    class UTextBlock* tex_btnsave_1;                                                  // 0x03A0 (size: 0x8)
    class UTextBlock* tex_btnStart;                                                   // 0x03A8 (size: 0x8)
    class UTextBlock* tex_btnstat;                                                    // 0x03B0 (size: 0x8)
    class UTextBlock* tex_playTut;                                                    // 0x03B8 (size: 0x8)
    class UTextBlock* tex_suppDisc;                                                   // 0x03C0 (size: 0x8)
    class UTextBlock* tex_suppItch;                                                   // 0x03C8 (size: 0x8)
    class UTextBlock* tex_suppPatr;                                                   // 0x03D0 (size: 0x8)
    class UTextBlock* tex_supptwt;                                                    // 0x03D8 (size: 0x8)
    class UTextBlock* tex_supptwt_1;                                                  // 0x03E0 (size: 0x8)
    class UTextBlock* text_activeSaveName;                                            // 0x03E8 (size: 0x8)
    class UTextBlock* text_aut;                                                       // 0x03F0 (size: 0x8)
    class UTextBlock* text_links;                                                     // 0x03F8 (size: 0x8)
    class UTextBlock* text_loading;                                                   // 0x0400 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x0408 (size: 0x8)
    class UTextBlock* text_name_1;                                                    // 0x0410 (size: 0x8)
    class UTextBlock* TextBlock;                                                      // 0x0418 (size: 0x8)
    class UTextBlock* TextBlock_1;                                                    // 0x0420 (size: 0x8)
    class UTextBlock* txt_loading;                                                    // 0x0428 (size: 0x8)
    class UTextBlock* txt_version;                                                    // 0x0430 (size: 0x8)
    class Uui_achievements_C* umg_achievements;                                       // 0x0438 (size: 0x8)
    class Uui_credits_C* umg_credits;                                                 // 0x0440 (size: 0x8)
    class Uui_exitConfirm_C* umg_exitConfirm;                                         // 0x0448 (size: 0x8)
    class Uui_gamemode_C* umg_gamemode;                                               // 0x0450 (size: 0x8)
    class Uui_help_C* umg_help;                                                       // 0x0458 (size: 0x8)
    class Uui_keybinds_C* umg_keybinds;                                               // 0x0460 (size: 0x8)
    class Uui_langs_C* umg_langs;                                                     // 0x0468 (size: 0x8)
    class Uui_mess_C* umg_mess;                                                       // 0x0470 (size: 0x8)
    class Uui_patronList_C* umg_patronList;                                           // 0x0478 (size: 0x8)
    class Uui_resetSave_C* umg_resetSave;                                             // 0x0480 (size: 0x8)
    class Uui_saveSlots_C* umg_saveSlots;                                             // 0x0488 (size: 0x8)
    class Uui_settings_C* umg_settings;                                               // 0x0490 (size: 0x8)
    class Uui_stats_C* umg_stats;                                                     // 0x0498 (size: 0x8)
    bool fade;                                                                        // 0x04A0 (size: 0x1)
    float A;                                                                          // 0x04A4 (size: 0x4)
    class UAudioComponent* Sound;                                                     // 0x04A8 (size: 0x8)
    bool beginn;                                                                      // 0x04B0 (size: 0x1)
    bool as;                                                                          // 0x04B1 (size: 0x1)
    bool canexit;                                                                     // 0x04B2 (size: 0x1)
    class UWidget* widgetEnter;                                                       // 0x04B8 (size: 0x8)
    bool isPause;                                                                     // 0x04C0 (size: 0x1)
    bool save;                                                                        // 0x04C1 (size: 0x1)
    FText mainText;                                                                   // 0x04C8 (size: 0x18)
    bool Hidden;                                                                      // 0x04E0 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x04E8 (size: 0x8)
    bool showSecret;                                                                  // 0x04F0 (size: 0x1)
    bool save_overwriteSubsave;                                                       // 0x04F1 (size: 0x1)

    void setMainText();
    void enterPause();
    void updWobble();
    void gather(FText& Result);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void Action(int32 Type, class Uuicomp_saveSlot_C* Slot);
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    void BndEvt__button_Resume_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_Save_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_Menu_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_Settings_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_Help_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_credits_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void OnFocusLost(FFocusEvent InFocusEvent);
    void FadeIn();
    void BndEvt__button_patreon_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_itch_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_discord_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_twt_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void Launch();
    void BndEvt__button_Exit_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_NewGame_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_achiv_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void openTutor(FName Level, FString Option);
    void openStorymode();
    void openInfinite();
    void openSandbox();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void resume();
    void BndEvt__button_back_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_launch_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void open_halloween();
    void BndEvt__button_stats_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void openAmbience();
    void openSolar();
    void Construct();
    void safetyDelay();
    void BndEvt__ui_menu_Button_hide_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_menu_button_website_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_menu_button_overwriteBackupSave_K2Node_ComponentBoundEvent_18_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_menu(int32 EntryPoint);
}; // Size: 0x4F2

#endif
