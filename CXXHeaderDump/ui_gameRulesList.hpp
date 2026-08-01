#ifndef UE4SS_SDK_ui_gameRulesList_HPP
#define UE4SS_SDK_ui_gameRulesList_HPP

class Uui_gameRulesList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_reset;                                                      // 0x0268 (size: 0x8)
    class UButton* button_Save;                                                       // 0x0270 (size: 0x8)
    class UExpandableArea* EA_example;                                                // 0x0278 (size: 0x8)
    class UExpandableArea* EA_example_1;                                              // 0x0280 (size: 0x8)
    class UExpandableArea* EA_example_2;                                              // 0x0288 (size: 0x8)
    class UExpandableArea* EA_example_3;                                              // 0x0290 (size: 0x8)
    class UExpandableArea* EA_example_4;                                              // 0x0298 (size: 0x8)
    class UExpandableArea* EA_example_5;                                              // 0x02A0 (size: 0x8)
    class UExpandableArea* EA_example_6;                                              // 0x02A8 (size: 0x8)
    class UExpandableArea* EA_example_7;                                              // 0x02B0 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_bloodLoss;                                 // 0x02B8 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_coldswap;                                  // 0x02C0 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_customContent;                             // 0x02C8 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_customContent_1;                           // 0x02D0 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_dailyTaskFine;                             // 0x02D8 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_daySpeed;                                  // 0x02E0 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_difficulty;                                // 0x02E8 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_experimental;                              // 0x02F0 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_extremeCombat;                             // 0x02F8 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_fallDamage;                                // 0x0300 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_foodFatogue;                               // 0x0308 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_foodSpoil;                                 // 0x0310 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_funny;                                     // 0x0318 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_holidays;                                  // 0x0320 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_lightsOut;                                 // 0x0328 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_nightmares;                                // 0x0330 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_nograss;                                   // 0x0338 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_permfog;                                   // 0x0340 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_permrain;                                  // 0x0348 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_permSeason;                                // 0x0350 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_permSeason_1;                              // 0x0358 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_physEvents;                                // 0x0360 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_physEvents_1;                              // 0x0368 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_radarDecay;                                // 0x0370 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_season;                                    // 0x0378 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_serverMG_0;                                // 0x0380 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_serverMG_1;                                // 0x0388 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_serverMG_2;                                // 0x0390 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_serverMG_3;                                // 0x0398 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_serverMG_4;                                // 0x03A0 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_serverMG_5;                                // 0x03A8 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_serverMG_6;                                // 0x03B0 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_serverMG_7;                                // 0x03B8 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_towerDecay;                                // 0x03C0 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_transformerDecay;                          // 0x03C8 (size: 0x8)
    class Uuicomp_gameRuleSlot_C* gamerule_waterFallDamage;                           // 0x03D0 (size: 0x8)
    class UImage* Image_0;                                                            // 0x03D8 (size: 0x8)
    class UScrollBox* scrollboxRoot;                                                  // 0x03E0 (size: 0x8)
    class UTextBlock* text_button;                                                    // 0x03E8 (size: 0x8)
    class UTextBlock* text_button_1;                                                  // 0x03F0 (size: 0x8)
    Fui_gameRulesList_CSelected selected;                                             // 0x03F8 (size: 0x10)
    void selected(class Uuicomp_gameRuleSlot_C* Slot);
    Fui_gameRulesList_CRulesSaved rulesSaved;                                         // 0x0408 (size: 0x10)
    void rulesSaved(Fstruct_gameRules Rules);
    TArray<class Uuicomp_gameRuleSlot_C*> Slots;                                      // 0x0418 (size: 0x10)
    Fstruct_gameRules Copy;                                                           // 0x0428 (size: 0x2C)
    Fstruct_gameRules originalLoaded;                                                 // 0x0454 (size: 0x2C)
    class Uui_saveSlots_C* Owner;                                                     // 0x0480 (size: 0x8)

    void updChanges();
    void load(Fstruct_gameRules Copy);
    void Construct();
    void BndEvt__ui_gameRulesList_button_save_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_gameRulesList_button_reset_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_gameRulesList(int32 EntryPoint);
    void rulesSaved__DelegateSignature(Fstruct_gameRules Rules);
    void selected__DelegateSignature(class Uuicomp_gameRuleSlot_C* Slot);
}; // Size: 0x488

#endif
