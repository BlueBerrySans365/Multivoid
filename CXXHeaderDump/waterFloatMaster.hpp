#ifndef UE4SS_SDK_waterFloatMaster_HPP
#define UE4SS_SDK_waterFloatMaster_HPP

class AwaterFloatMaster_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    TArray<class AActor*> actorsInWater;                                              // 0x0230 (size: 0x10)
    TArray<class AriverFlow_C*> riverFlows;                                           // 0x0240 (size: 0x10)
    TArray<float> actorsDepth;                                                        // 0x0250 (size: 0x10)
    TArray<class AActor*> repeats;                                                    // 0x0260 (size: 0x10)
    int32 rivers;                                                                     // 0x0270 (size: 0x4)
    TArray<bool> originInside;                                                        // 0x0278 (size: 0x10)
    TArray<bool> originComp;                                                          // 0x0288 (size: 0x10)
    TArray<class AwaterVolume_C*> allVolumes;                                         // 0x0298 (size: 0x10)
    TArray<bool> objOriginsPrev;                                                      // 0x02A8 (size: 0x10)
    TArray<bool> objOrigins;                                                          // 0x02B8 (size: 0x10)
    int32 insideVolume;                                                               // 0x02C8 (size: 0x4)
    int32 iters;                                                                      // 0x02CC (size: 0x4)
    TArray<FTransform> boxTransforms;                                                 // 0x02D0 (size: 0x10)
    TArray<float> actorsBoyoancy;                                                     // 0x02E0 (size: 0x10)
    TArray<class USplineComponent*> riverSplines;                                     // 0x02F0 (size: 0x10)
    TArray<float> riverRadiusIn;                                                      // 0x0300 (size: 0x10)
    TArray<float> riverRadiusOut;                                                     // 0x0310 (size: 0x10)
    TArray<float> riversForce;                                                        // 0x0320 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x0330 (size: 0x8)
    TArray<float> actorsFloatTimers;                                                  // 0x0338 (size: 0x10)
    TArray<float> C;                                                                  // 0x0348 (size: 0x10)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void makeBoyancy();
    void recalcVolumeIndexes();
    void Remove Obj(const class AActor*& find, bool& repeats);
    void addObj(const float& Depth, const class AActor*& obj, bool& repeats);
    void bo(class AActor* Target, float Depth, int32 ind);
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
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void makeBoyancy_delay();
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_waterFloatMaster(int32 EntryPoint);
}; // Size: 0x358

#endif
