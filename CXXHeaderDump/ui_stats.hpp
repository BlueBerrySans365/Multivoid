#ifndef UE4SS_SDK_ui_stats_HPP
#define UE4SS_SDK_ui_stats_HPP

class Uui_stats_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UBackgroundBlur* blur1;                                                     // 0x0268 (size: 0x8)
    class UButton* button_exit;                                                       // 0x0270 (size: 0x8)
    class UButton* button_gloss;                                                      // 0x0278 (size: 0x8)
    class UButton* button_gloss_1;                                                    // 0x0280 (size: 0x8)
    class UButton* button_reset;                                                      // 0x0288 (size: 0x8)
    class UButton* button_sigAud;                                                     // 0x0290 (size: 0x8)
    class UButton* button_sigLvl0;                                                    // 0x0298 (size: 0x8)
    class UButton* button_sigLvl1;                                                    // 0x02A0 (size: 0x8)
    class UButton* button_sigLvl2;                                                    // 0x02A8 (size: 0x8)
    class UButton* button_sigLvl3;                                                    // 0x02B0 (size: 0x8)
    class UButton* button_sigObj;                                                     // 0x02B8 (size: 0x8)
    class UButton* button_stats;                                                      // 0x02C0 (size: 0x8)
    class UCheckBox* CheckBox_gloss;                                                  // 0x02C8 (size: 0x8)
    class UCheckBox* CheckBox_stats;                                                  // 0x02D0 (size: 0x8)
    class UImage* Image_302;                                                          // 0x02D8 (size: 0x8)
    class UImage* image_signal;                                                       // 0x02E0 (size: 0x8)
    class UImage* img_curs;                                                           // 0x02E8 (size: 0x8)
    class UScrollBox* signalsList;                                                    // 0x02F0 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_beatenDreams;                                     // 0x02F8 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_daysTotal;                                        // 0x0300 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_distanceDriven;                                   // 0x0308 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_distanceWalked;                                   // 0x0310 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_falls;                                            // 0x0318 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_foodEaten;                                        // 0x0320 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_itemsBought;                                      // 0x0328 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_objectsDest;                                      // 0x0330 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_pointsSpent;                                      // 0x0338 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_reports;                                          // 0x0340 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_saveCount;                                        // 0x0348 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_serversRepaired;                                  // 0x0350 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_signalsFound;                                     // 0x0358 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_signalsProcessed;                                 // 0x0360 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_sleepTime;                                        // 0x0368 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_steps;                                            // 0x0370 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_successfulReports;                                // 0x0378 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_toiletUses;                                       // 0x0380 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_totalDreams;                                      // 0x0388 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_totalJumps;                                       // 0x0390 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_totalPlaytime;                                    // 0x0398 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_totalPoints;                                      // 0x03A0 (size: 0x8)
    class Uuicomp_statsSlot_C* stat_treasuresFound;                                   // 0x03A8 (size: 0x8)
    class UScrollBox* statsList;                                                      // 0x03B0 (size: 0x8)
    class UWidgetSwitcher* switcher;                                                  // 0x03B8 (size: 0x8)
    class UTextBlock* txt_sigName;                                                    // 0x03C0 (size: 0x8)
    class UTextBlock* txt_sigPrice;                                                   // 0x03C8 (size: 0x8)
    class UTextBlock* txt_sigSize;                                                    // 0x03D0 (size: 0x8)
    class UTextBlock* txt_sigUnique;                                                  // 0x03D8 (size: 0x8)
    class UTextBlock* txt_text;                                                       // 0x03E0 (size: 0x8)
    TArray<class Uuicomp_statsSlot_C*> Slots;                                         // 0x03E8 (size: 0x10)
    Fstruct_signal_data dataSig;                                                      // 0x03F8 (size: 0x1C8)
    int32 sigView;                                                                    // 0x05C0 (size: 0x4)
    class USoundBase* Sound;                                                          // 0x05C8 (size: 0x8)
    class UAudioComponent* aud;                                                       // 0x05D0 (size: 0x8)
    TArray<class Uuicomp_statsGlossSlot_C*> glossSlots;                               // 0x05D8 (size: 0x10)
    class Uuicomp_statsGlossSlot_C* glossSlot;                                        // 0x05E8 (size: 0x8)
    bool chStats;                                                                     // 0x05F0 (size: 0x1)
    bool chGloss;                                                                     // 0x05F1 (size: 0x1)

    void getSearchName(FName& Name);
    void removeGloss();
    void genGloss();
    void updSigGloss();
    void setSigGloss(class Uuicomp_statsGlossSlot_C* Slot);
    void setStat(int32 Index, float stat);
    void upd();
    void setIndex(int32 Index);
    void triggerRandom();
    void Construct();
    void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void resume();
    void BndEvt__umg_stats_button_sigAud_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_stats_aud_K2Node_ComponentBoundEvent_2_OnAudioFinished__DelegateSignature();
    void BndEvt__umg_stats_button_gloss_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_stats_button_Stats_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_stats_button_sigLvl0_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_stats_button_sigLvl1_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_stats_button_sigLvl2_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_stats_button_sigLvl3_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_stats_button_sigObj_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void pb(const class USoundWave* PlayingSoundWave, const float PlaybackPercent);
    void BndEvt__umg_stats_Button_reset_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_stats_CheckBox_stats_K2Node_ComponentBoundEvent_11_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__umg_stats_CheckBox_gloss_K2Node_ComponentBoundEvent_12_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void BndEvt__umg_stats_button_gloss_1_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_stats(int32 EntryPoint);
}; // Size: 0x5F2

#endif
