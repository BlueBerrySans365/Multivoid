#ifndef UE4SS_SDK_int_coms_HPP
#define UE4SS_SDK_int_coms_HPP

class Iint_coms_C : public IInterface
{

    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void intComs_triggerSnow(bool isSnow);
    void intComs_gamemodePostKeys();
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_applyColor(FLinearColor Color);
    void intComs_propRenderer_finishProps();
    void intComs_gamemodeMakeKeys();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodePreLoad();
    void intComs_unfocused();
    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_unfoc();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_gamemodeBeginPlay();
    void intComs_signalSaved();
    void intComs_signalDeleted();
}; // Size: 0x28

#endif
