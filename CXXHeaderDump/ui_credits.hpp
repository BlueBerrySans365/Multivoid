#ifndef UE4SS_SDK_ui_credits_HPP
#define UE4SS_SDK_ui_credits_HPP

class Uui_credits_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_adv;                                                        // 0x0268 (size: 0x8)
    class UButton* button_contribution;                                               // 0x0270 (size: 0x8)
    class UButton* button_exit;                                                       // 0x0278 (size: 0x8)
    class UButton* button_form3;                                                      // 0x0280 (size: 0x8)
    class UButton* button_help;                                                       // 0x0288 (size: 0x8)
    class UButton* button_music;                                                      // 0x0290 (size: 0x8)
    class UButton* button_patrons1;                                                   // 0x0298 (size: 0x8)
    class UButton* button_patrons2;                                                   // 0x02A0 (size: 0x8)
    class UButton* button_patrons3;                                                   // 0x02A8 (size: 0x8)
    class UButton* button_resources;                                                  // 0x02B0 (size: 0x8)
    class UButton* button_tools;                                                      // 0x02B8 (size: 0x8)
    class UButton* button_translations;                                               // 0x02C0 (size: 0x8)
    class UButton* button_va;                                                         // 0x02C8 (size: 0x8)
    class UImage* Image_302;                                                          // 0x02D0 (size: 0x8)
    class UTextBlock* text_desc;                                                      // 0x02D8 (size: 0x8)
    class Usave_main_C* sav;                                                          // 0x02E0 (size: 0x8)
    TArray<class Uuicomp_settingsSlot_C*> sliders;                                    // 0x02E8 (size: 0x10)
    TArray<class Uuicomp_settingsSlot_C*> v_slots;                                    // 0x02F8 (size: 0x10)
    TArray<class Uuicomp_settingsSlot_C*> s_slots;                                    // 0x0308 (size: 0x10)
    Fstruct_settings1 settingsCopy;                                                   // 0x0318 (size: 0x220)
    FText txt_adv;                                                                    // 0x0538 (size: 0x18)
    FText txt_trans;                                                                  // 0x0550 (size: 0x18)
    FText txt_tools;                                                                  // 0x0568 (size: 0x18)
    FText txt_res;                                                                    // 0x0580 (size: 0x18)
    FText txt_p3;                                                                     // 0x0598 (size: 0x18)
    FText txt_p2;                                                                     // 0x05B0 (size: 0x18)
    FText txt_p1;                                                                     // 0x05C8 (size: 0x18)
    FText txt_music;                                                                  // 0x05E0 (size: 0x18)
    FText txt_help;                                                                   // 0x05F8 (size: 0x18)
    FText txt_formP3;                                                                 // 0x0610 (size: 0x18)
    FText text_contr;                                                                 // 0x0628 (size: 0x18)
    FText text_va;                                                                    // 0x0640 (size: 0x18)

    void getSearchName(FName& Name);
    void setIndex(int32 Index);
    void triggerRandom();
    void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void resume();
    void BndEvt__umg_credits_button_adv_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_credits_button_contribution_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_credits_button_form3_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_credits_button_help_K2Node_ComponentBoundEvent_7_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_credits_button_music_K2Node_ComponentBoundEvent_8_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_credits_button_patrons1_K2Node_ComponentBoundEvent_9_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_credits_button_patrons2_K2Node_ComponentBoundEvent_10_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_credits_button_patrons3_K2Node_ComponentBoundEvent_11_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_credits_button_resources_K2Node_ComponentBoundEvent_12_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_credits_button_tools_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_credits_button_translations_K2Node_ComponentBoundEvent_14_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void BndEvt__umg_credits_button_va_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_credits(int32 EntryPoint);
}; // Size: 0x658

#endif
