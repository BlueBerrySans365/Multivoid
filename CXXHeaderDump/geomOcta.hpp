#ifndef UE4SS_SDK_geomOcta_HPP
#define UE4SS_SDK_geomOcta_HPP

class AgeomOcta_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class USphereComponent* despawnSphere;                                            // 0x04C8 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x04D0 (size: 0x8)
    class USphereComponent* coll;                                                     // 0x04D8 (size: 0x8)
    class USphereComponent* allPawnSphere;                                            // 0x04E0 (size: 0x8)
    class USphereComponent* propAggroSphere;                                          // 0x04E8 (size: 0x8)
    class UAudioComponent* octBeamLoop;                                               // 0x04F0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x04F8 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0500 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0508 (size: 0x8)
    class UArrowComponent* shoot;                                                     // 0x0510 (size: 0x8)
    class USphereComponent* minSphere;                                                // 0x0518 (size: 0x8)
    float chareTL_a_6B5255414640A8F93F99D69FB6DF0C99;                                 // 0x0520 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> chareTL__Direction_6B5255414640A8F93F99D69FB6DF0C99; // 0x0524 (size: 0x1)
    class UTimelineComponent* chareTL;                                                // 0x0528 (size: 0x8)
    float timelineRot_a_BA87A6D444757DA00E17DC99D8FC1D08;                             // 0x0530 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> timelineRot__Direction_BA87A6D444757DA00E17DC99D8FC1D08; // 0x0534 (size: 0x1)
    class UTimelineComponent* timelineRot;                                            // 0x0538 (size: 0x8)
    class AActor* TargetActor;                                                        // 0x0540 (size: 0x8)
    float A;                                                                          // 0x0548 (size: 0x4)
    float rotA;                                                                       // 0x054C (size: 0x4)
    FRotator lastRot;                                                                 // 0x0550 (size: 0xC)
    bool isAnim;                                                                      // 0x055C (size: 0x1)
    float aCh;                                                                        // 0x0560 (size: 0x4)
    float spwnAlpha;                                                                  // 0x0564 (size: 0x4)
    bool isCharge;                                                                    // 0x0568 (size: 0x1)
    bool despawn;                                                                     // 0x0569 (size: 0x1)

    void rot(FRotator& OutputPin);
    void timelineRot__FinishedFunc();
    void timelineRot__UpdateFunc();
    void chareTL__FinishedFunc();
    void chareTL__UpdateFunc();
    void OnNotifyEnd_40CAEEF14EA3484C8E679EA6A1BD5F5D(FName NotifyName);
    void OnNotifyBegin_40CAEEF14EA3484C8E679EA6A1BD5F5D(FName NotifyName);
    void OnInterrupted_40CAEEF14EA3484C8E679EA6A1BD5F5D(FName NotifyName);
    void OnBlendOut_40CAEEF14EA3484C8E679EA6A1BD5F5D(FName NotifyName);
    void OnCompleted_40CAEEF14EA3484C8E679EA6A1BD5F5D(FName NotifyName);
    void OnNotifyEnd_9B2108B443F09BA08A3C20ADBECCC562(FName NotifyName);
    void OnNotifyBegin_9B2108B443F09BA08A3C20ADBECCC562(FName NotifyName);
    void OnInterrupted_9B2108B443F09BA08A3C20ADBECCC562(FName NotifyName);
    void OnBlendOut_9B2108B443F09BA08A3C20ADBECCC562(FName NotifyName);
    void OnCompleted_9B2108B443F09BA08A3C20ADBECCC562(FName NotifyName);
    void OnNotifyEnd_1DFC28904024A8FB71C3ACA9DBD440F9(FName NotifyName);
    void OnNotifyBegin_1DFC28904024A8FB71C3ACA9DBD440F9(FName NotifyName);
    void OnInterrupted_1DFC28904024A8FB71C3ACA9DBD440F9(FName NotifyName);
    void OnBlendOut_1DFC28904024A8FB71C3ACA9DBD440F9(FName NotifyName);
    void OnCompleted_1DFC28904024A8FB71C3ACA9DBD440F9(FName NotifyName);
    void OnFail_B50B45FF44BBE3579FA455929797BD91(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_B50B45FF44BBE3579FA455929797BD91(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void fire();
    void aggro(class AActor* Actor);
    void BndEvt__geomOcta_minSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void rotateTo(bool Condition);
    void charge(bool Condition);
    void move();
    void ReceiveBeginPlay();
    void Sound();
    void BndEvt__geomOcta_propAggroSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void despawnAttempt();
    void ExecuteUbergraph_geomOcta(int32 EntryPoint);
}; // Size: 0x56A

#endif
