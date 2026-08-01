#ifndef UE4SS_SDK_ai_heavyObstacle_HPP
#define UE4SS_SDK_ai_heavyObstacle_HPP

class Aai_heavyObstacle_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* boxObstacle;                                                 // 0x0228 (size: 0x8)
    FVector Size;                                                                     // 0x0230 (size: 0xC)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void UserConstructionScript();
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
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_ai_heavyObstacle(int32 EntryPoint);
}; // Size: 0x23C

#endif
