#ifndef UE4SS_SDK_uicomp_settingsSlot_pickColor_HPP
#define UE4SS_SDK_uicomp_settingsSlot_pickColor_HPP

class Uuicomp_settingsSlot_pickColor_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_24;                                                         // 0x0268 (size: 0x8)
    class UImage* image_col;                                                          // 0x0270 (size: 0x8)
    class UTextBlock* textv;                                                          // 0x0278 (size: 0x8)
    class Uui_settings_C* Parent;                                                     // 0x0280 (size: 0x8)
    TEnumAsByte<enum_colorPicker_settings::Type> picker;                              // 0x0288 (size: 0x1)
    FLinearColor C;                                                                   // 0x028C (size: 0x10)
    FText Name;                                                                       // 0x02A0 (size: 0x18)

    void getSearchName(FName& Name);
    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void setColor();
    void GetColor(FLinearColor& Current, FLinearColor& Default);
    void resume();
    void setIndex(int32 Index);
    void intComs_signalDeleted();
    void intComs_signalSaved();
    void intComs_gamemodeBeginPlay();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_unfoc();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_unfocused();
    void intComs_gamemodePreLoad();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodeMakeKeys();
    void intComs_propRenderer_finishProps();
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_gamemodePostKeys();
    void intComs_triggerSnow(bool isSnow);
    void BndEvt__Button_24_K2Node_ComponentBoundEvent_1_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void intComs_applyColor(FLinearColor Color);
    void triggerRandom();
    void ExecuteUbergraph_uicomp_settingsSlot_pickColor(int32 EntryPoint);
}; // Size: 0x2B8

#endif
