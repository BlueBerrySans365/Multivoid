#ifndef UE4SS_SDK_ufoDropper_HPP
#define UE4SS_SDK_ufoDropper_HPP

class AufoDropper_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0250 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0258 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0260 (size: 0x8)
    class USkeletalMeshComponent* grayUfoSk;                                          // 0x0268 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0270 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0278 (size: 0x8)
    FVector Timeline_0_vec_04370C7A430062B2B8AD5BA777A88AE7;                          // 0x0280 (size: 0xC)
    float Timeline_0_blinkWeight_04370C7A430062B2B8AD5BA777A88AE7;                    // 0x028C (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_04370C7A430062B2B8AD5BA777A88AE7; // 0x0290 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0298 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> O;                                          // 0x02A0 (size: 0x10)
    bool flyAway;                                                                     // 0x02B0 (size: 0x1)
    FVector Init;                                                                     // 0x02B4 (size: 0xC)
    bool Fly;                                                                         // 0x02C0 (size: 0x1)
    TSubclassOf<class AActor> Drop;                                                   // 0x02C8 (size: 0x8)
    float Weight;                                                                     // 0x02D0 (size: 0x4)

    void activated();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__turnoff__EventFunc();
    void Timeline_0__drop__EventFunc();
    void BndEvt__ufoDropper_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void forceDeploy();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void killKerfur();
    void ExecuteUbergraph_ufoDropper(int32 EntryPoint);
}; // Size: 0x2D4

#endif
