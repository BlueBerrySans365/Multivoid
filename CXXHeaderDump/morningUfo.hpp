#ifndef UE4SS_SDK_morningUfo_HPP
#define UE4SS_SDK_morningUfo_HPP

class AmorningUfo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0228 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0230 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0238 (size: 0x8)
    class UBillboardComponent* flyTo;                                                 // 0x0240 (size: 0x8)
    class UBillboardComponent* flyAwayTo;                                             // 0x0248 (size: 0x8)
    class USkeletalMeshComponent* grayUfoSk;                                          // 0x0250 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> O;                                          // 0x0268 (size: 0x10)
    bool flyAway;                                                                     // 0x0278 (size: 0x1)
    FVector Init;                                                                     // 0x027C (size: 0xC)
    bool Fly;                                                                         // 0x0288 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void BndEvt__morningUfo_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void chck();
    void ExecuteUbergraph_morningUfo(int32 EntryPoint);
}; // Size: 0x289

#endif
