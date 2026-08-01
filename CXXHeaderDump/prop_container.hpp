#ifndef UE4SS_SDK_prop_container_HPP
#define UE4SS_SDK_prop_container_HPP

class Aprop_container_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* audio_locked;                                              // 0x0370 (size: 0x8)
    class UBoxComponent* usableVolume;                                                // 0x0378 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0380 (size: 0x8)
    class UArrowComponent* Spawn;                                                     // 0x0388 (size: 0x8)
    class UBoxComponent* Overlap;                                                     // 0x0390 (size: 0x8)
    class UpropInventory_C* propInventory;                                            // 0x0398 (size: 0x8)
    FDataTableRowHandle lootEntry;                                                    // 0x03A0 (size: 0x10)
    FName spawnLoot;                                                                  // 0x03B0 (size: 0x8)
    TArray<float> massData;                                                           // 0x03B8 (size: 0x10)
    TArray<float> volumeData;                                                         // 0x03C8 (size: 0x10)
    TArray<FName> nameData;                                                           // 0x03D8 (size: 0x10)
    bool Locked;                                                                      // 0x03E8 (size: 0x1)
    FVector Volume;                                                                   // 0x03EC (size: 0xC)
    bool fridge;                                                                      // 0x03F8 (size: 0x1)
    float overlapDelay;                                                               // 0x03FC (size: 0x4)
    class USoundBase* sound_open;                                                     // 0x0400 (size: 0x8)
    class USoundBase* sound_close;                                                    // 0x0408 (size: 0x8)
    FVector velLinear;                                                                // 0x0410 (size: 0xC)
    FVector velAngular;                                                               // 0x041C (size: 0xC)
    bool accurateInertia;                                                             // 0x0428 (size: 0x1)
    bool ignoreImpulseThings;                                                         // 0x0429 (size: 0x1)

    void putObjectIn_overlap(class AActor* Actor, class USceneComponent* Component, class UAudioComponent* Audio);
    void asContainer(class Aprop_container_C*& container);
    void getVelocities(FVector& velLinear, FVector& velAngular);
    void updateVolumesAndMass();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getObject(int32 Index, bool customLoc, FVector Loc, class AActor*& OutputPin);
    void getData(Fstruct_save& Data);
    void spawned();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void extract(int32 Index);
    void loadData(Fstruct_save Data, bool& return);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void BndEvt__overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void broken();
    void dingus();
    void ReceiveDestroyed();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void broken_fire();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void playerUsedOn_delay(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ReceiveTick(float DeltaSeconds);
    void openContainer();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_propRenderer_finishProps();
    void ExecuteUbergraph_prop_container(int32 EntryPoint);
}; // Size: 0x42A

#endif
