#ifndef UE4SS_SDK_halloweenMaster_HPP
#define UE4SS_SDK_halloweenMaster_HPP

class AhalloweenMaster_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* halloweenAmb;                                              // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    int32 pumpkinS;                                                                   // 0x0238 (size: 0x4)
    TArray<class AActor*> conv;                                                       // 0x0240 (size: 0x10)
    TArray<FVector> locs;                                                             // 0x0250 (size: 0x10)
    bool Completed;                                                                   // 0x0260 (size: 0x1)
    FVector mapLoc;                                                                   // 0x0264 (size: 0xC)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void addPumpkin();
    void spawnInsomniac(bool& canSpawn, FVector& Loc);
    void check(bool& return);
    void UserConstructionScript();
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
    void ReceiveBeginPlay();
    void restore();
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_halloweenMaster(int32 EntryPoint);
}; // Size: 0x270

#endif
