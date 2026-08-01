#ifndef UE4SS_SDK_ui_gamemode_HPP
#define UE4SS_SDK_ui_gamemode_HPP

class Uui_gamemode_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_exit;                                                       // 0x0268 (size: 0x8)
    class UButton* button_g_ambience;                                                 // 0x0270 (size: 0x8)
    class UButton* button_g_halloween;                                                // 0x0278 (size: 0x8)
    class UButton* button_g_infinite;                                                 // 0x0280 (size: 0x8)
    class UButton* button_g_sandbox;                                                  // 0x0288 (size: 0x8)
    class UButton* button_g_solar;                                                    // 0x0290 (size: 0x8)
    class UButton* button_g_storyMode;                                                // 0x0298 (size: 0x8)
    class UButton* button_g_tutor;                                                    // 0x02A0 (size: 0x8)
    class UButton* button_tutLvl1;                                                    // 0x02A8 (size: 0x8)
    class UButton* button_tutLvl2;                                                    // 0x02B0 (size: 0x8)
    class UButton* button_tutLvl3;                                                    // 0x02B8 (size: 0x8)
    class UCanvasPanel* canvas_tutLvl1;                                               // 0x02C0 (size: 0x8)
    class UCanvasPanel* canvas_tutLvl2;                                               // 0x02C8 (size: 0x8)
    class UCanvasPanel* canvas_tutLvl3;                                               // 0x02D0 (size: 0x8)
    class UScrollBox* helpbox_desc;                                                   // 0x02D8 (size: 0x8)
    class UImage* Image_302;                                                          // 0x02E0 (size: 0x8)
    class UTextBlock* tex_desc;                                                       // 0x02E8 (size: 0x8)
    class UTextBlock* tex_desc_1;                                                     // 0x02F0 (size: 0x8)
    class UTextBlock* tex_desc_2;                                                     // 0x02F8 (size: 0x8)
    class UTextBlock* tex_desc_3;                                                     // 0x0300 (size: 0x8)
    class UVerticalBox* vertBox_tutLvls;                                              // 0x0308 (size: 0x8)
    class Usave_main_C* sav;                                                          // 0x0310 (size: 0x8)
    TArray<class Uuicomp_settingsSlot_C*> sliders;                                    // 0x0318 (size: 0x10)
    TArray<class Uuicomp_settingsSlot_C*> v_slots;                                    // 0x0328 (size: 0x10)
    TArray<class Uuicomp_settingsSlot_C*> s_slots;                                    // 0x0338 (size: 0x10)
    Fstruct_settings1 settingsCopy;                                                   // 0x0348 (size: 0x220)
    TArray<FText> Desc;                                                               // 0x0568 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x0578 (size: 0x8)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void setDesc(int32 Index);
    void intComs_signalDeleted();
    void intComs_signalSaved();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_unfoc();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_unfocused();
    void intComs_gamemodePreLoad();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodeMakeKeys();
    void intComs_propRenderer_finishProps();
    void intComs_applyColor(FLinearColor Color);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_gamemodePostKeys();
    void intComs_triggerSnow(bool isSnow);
    void BndEvt__button_exit_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_g_tutor_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_g_storyMode_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_g_infinite_K2Node_ComponentBoundEvent_3_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_g_sandbox_K2Node_ComponentBoundEvent_4_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__button_g_halloween_K2Node_ComponentBoundEvent_5_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_gamemode_button_g_ambience_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_gamemode_button_g_halloween_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__umg_gamemode_button_g_tutor_K2Node_ComponentBoundEvent_8_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__umg_gamemode_button_g_storyMode_K2Node_ComponentBoundEvent_9_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__umg_gamemode_button_g_infinite_K2Node_ComponentBoundEvent_10_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__umg_gamemode_button_g_ambience_K2Node_ComponentBoundEvent_11_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__umg_gamemode_button_g_sandbox_K2Node_ComponentBoundEvent_12_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__umg_gamemode_button_g_solar_K2Node_ComponentBoundEvent_13_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__umg_gamemode_button_g_solar_K2Node_ComponentBoundEvent_16_OnButtonHoverEvent__DelegateSignature();
    void Construct();
    void BndEvt__ui_gamemode_button_tutLvl1_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_gamemode_button_tutLvl2_K2Node_ComponentBoundEvent_15_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_gamemode_button_tutLvl3_K2Node_ComponentBoundEvent_17_OnButtonClickedEvent__DelegateSignature();
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_ui_gamemode(int32 EntryPoint);
}; // Size: 0x580

#endif
