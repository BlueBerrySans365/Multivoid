#ifndef UE4SS_SDK_prop_rdrone_HPP
#define UE4SS_SDK_prop_rdrone_HPP

class Aprop_rdrone_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UStaticMeshComponent* blades;                                               // 0x03B0 (size: 0x8)
    class USkeletalMeshComponent* bladesSpin;                                         // 0x03B8 (size: 0x8)
    class UBillboardComponent* cordRoot;                                              // 0x03C0 (size: 0x8)
    class UParticleSystemComponent* lgh;                                              // 0x03C8 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x03D0 (size: 0x8)
    class UArrowComponent* lookOffset;                                                // 0x03D8 (size: 0x8)
    class USceneCaptureComponent2D* cam_ir;                                           // 0x03E0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x03E8 (size: 0x8)
    class USceneCaptureComponent2D* cam;                                              // 0x03F0 (size: 0x8)
    class UArrowComponent* look;                                                      // 0x03F8 (size: 0x8)
    bool Active;                                                                      // 0x0400 (size: 0x1)
    bool lightActive;                                                                 // 0x0401 (size: 0x1)
    float energy;                                                                     // 0x0404 (size: 0x4)
    class Acord_C* objCord1;                                                          // 0x0408 (size: 0x8)
    bool charging;                                                                    // 0x0410 (size: 0x1)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void ALight(bool lightActive);
    void move(float Forward, float rot, float Up);
    void Capture(class Uui_laptop_C* lap);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ReceiveTick(float DeltaSeconds);
    void exitTheWater();
    void leaveWater(class AwaterVolume_C* Water);
    void ExecuteUbergraph_prop_rdrone(int32 EntryPoint);
}; // Size: 0x411

#endif
