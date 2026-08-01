#ifndef UE4SS_SDK_waterVolume_HPP
#define UE4SS_SDK_waterVolume_HPP

class AwaterVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* iceCrust;                                             // 0x0228 (size: 0x8)
    class UNavModifierComponent* NavModifier;                                         // 0x0230 (size: 0x8)
    class UBoxComponent* nav;                                                         // 0x0238 (size: 0x8)
    class UAudioComponent* lakeLoop;                                                  // 0x0240 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0248 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0250 (size: 0x8)
    class UStaticMeshComponent* volumeCube;                                           // 0x0258 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0260 (size: 0x8)
    class UStaticMeshComponent* surfacePlane;                                         // 0x0268 (size: 0x8)
    TArray<class AActor*> Objects;                                                    // 0x0270 (size: 0x10)
    TArray<bool> objects_origins;                                                     // 0x0280 (size: 0x10)
    TArray<int32> objects_place;                                                      // 0x0290 (size: 0x10)
    float depth_w;                                                                    // 0x02A0 (size: 0x4)
    FVector planeLoc;                                                                 // 0x02A4 (size: 0xC)
    TArray<class AriverFlow_C*> riverFlows;                                           // 0x02B0 (size: 0x10)
    float riverForce;                                                                 // 0x02C0 (size: 0x4)
    bool Visible;                                                                     // 0x02C4 (size: 0x1)
    bool SurfaceOnly;                                                                 // 0x02C5 (size: 0x1)
    float ambienceVolume;                                                             // 0x02C8 (size: 0x4)
    class UMaterialInterface* initMat;                                                // 0x02D0 (size: 0x8)
    bool frozen;                                                                      // 0x02D8 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x02E0 (size: 0x8)
    bool antifreeze;                                                                  // 0x02E8 (size: 0x1)
    int32 volumeIndex;                                                                // 0x02EC (size: 0x4)
    class UMaterialInterface* WaterMaterial;                                          // 0x02F0 (size: 0x8)
    class UMaterialInterface* waterPostProcess;                                       // 0x02F8 (size: 0x8)
    bool affectNavigation;                                                            // 0x0300 (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void setAreaClass_check(TSubclassOf<class UNavArea> NewAreaClass);
    void passNavType(TSubclassOf<class UNavArea> Class, TSubclassOf<class UNavArea>& AreaClass);
    void changeProps(class UMaterialInterface* WaterMaterial, class UMaterialInterface* waterPostProcess);
    void updProps();
    void updSize();
    void recalcPlaces();
    void updateWaterData();
    void freeze(bool frozen);
    void NewFunction_0(bool Condition);
    void boy(class AActor* self2);
    void soundSurface(class AActor* self2, class USoundBase* Sound, bool effect, FVector Loc, FVector Scale);
    void UserConstructionScript();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_signalSaved();
    void intComs_unfoc();
    void ReceiveTick(float DeltaSeconds);
    void intComs_signalDeleted();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Init();
    void recalcColl();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void intComs_triggerSnow(bool isSnow);
    void disableUnderIce();
    void intComs_gamemodePostKeys();
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_applyColor(FLinearColor Color);
    void intComs_propRenderer_finishProps();
    void intComs_gamemodeMakeKeys();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodePreLoad();
    void intComs_unfocused();
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_waterVolume(int32 EntryPoint);
}; // Size: 0x301

#endif
