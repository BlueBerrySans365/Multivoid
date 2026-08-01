#ifndef UE4SS_SDK_uicomp_settingsSlot_lut_HPP
#define UE4SS_SDK_uicomp_settingsSlot_lut_HPP

class Uuicomp_settingsSlot_lut_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_hover;                                                      // 0x0268 (size: 0x8)
    class UCheckBox* CheckBox_vres;                                                   // 0x0270 (size: 0x8)
    class UTextBlock* text_button_1;                                                  // 0x0278 (size: 0x8)
    class UTextBlock* text_button_2;                                                  // 0x0280 (size: 0x8)
    class UTextBlock* textv;                                                          // 0x0288 (size: 0x8)
    class Uui_settings_C* Parent;                                                     // 0x0290 (size: 0x8)
    bool Enabled;                                                                     // 0x0298 (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void getSearchName(FName& Name);
    void set(class Uui_settings_C* Parent);
    void upd();
    void intComs_signalDeleted();
    void intComs_signalSaved();
    void intComs_gamemodeBeginPlay();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_unfoc();
    void intComs_unfocused();
    void intComs_gamemodePreLoad();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodeMakeKeys();
    void intComs_propRenderer_finishProps();
    void intComs_applyColor(FLinearColor Color);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_gamemodePostKeys();
    void intComs_triggerSnow(bool isSnow);
    void resume();
    void setIndex(int32 Index);
    void triggerRandom();
    void BndEvt__uicomp_settingsSlot_lut_Button_button_K2Node_ComponentBoundEvent_2_OnButtonClickedEvent__DelegateSignature();
    void BndEvt__ui_settingsSlot_Button_hover_K2Node_ComponentBoundEvent_6_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__ui_settingsSlot_Button_hover_K2Node_ComponentBoundEvent_7_OnButtonHoverEvent__DelegateSignature();
    void BndEvt__uicomp_settingsSlot_lut_CheckBox_vres_K2Node_ComponentBoundEvent_10_OnCheckBoxComponentStateChanged__DelegateSignature(bool bIsChecked);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_uicomp_settingsSlot_lut(int32 EntryPoint);
}; // Size: 0x299

#endif
