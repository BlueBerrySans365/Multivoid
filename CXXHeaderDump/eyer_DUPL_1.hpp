#ifndef UE4SS_SDK_eyer_DUPL_1_HPP
#define UE4SS_SDK_eyer_DUPL_1_HPP

class Aeyer_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UBillboardComponent* lookAt;                                                // 0x04C8 (size: 0x8)
    class Ucomp_paranormal_C* comp_paranormal;                                        // 0x04D0 (size: 0x8)
    class Ucomp_radiation_C* comp_radiation;                                          // 0x04D8 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x04E0 (size: 0x8)
    class USphereComponent* killsphere;                                               // 0x04E8 (size: 0x8)
    class UAudioComponent* audio_dash;                                                // 0x04F0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x04F8 (size: 0x8)
    class UBillboardComponent* offsetEye_2;                                           // 0x0500 (size: 0x8)
    class UBillboardComponent* offsetEye_1;                                           // 0x0508 (size: 0x8)
    class UBillboardComponent* eyesCenter;                                            // 0x0510 (size: 0x8)
    class USkeletalMeshComponent* eyerTeeth;                                          // 0x0518 (size: 0x8)
    class UAudioComponent* audio_angered;                                             // 0x0520 (size: 0x8)
    class UStaticMeshComponent* Render;                                               // 0x0528 (size: 0x8)
    class UParticleSystemComponent* eye2;                                             // 0x0530 (size: 0x8)
    class UParticleSystemComponent* eye1;                                             // 0x0538 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0540 (size: 0x8)
    float showteethTimeline_a_105FE79A49EDF37E4CEF4D8B4BCAFFD7;                       // 0x0548 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> showteethTimeline__Direction_105FE79A49EDF37E4CEF4D8B4BCAFFD7; // 0x054C (size: 0x1)
    class UTimelineComponent* showteethTimeline;                                      // 0x0550 (size: 0x8)
    float Offset;                                                                     // 0x0558 (size: 0x4)
    float Distance;                                                                   // 0x055C (size: 0x4)
    bool ignoreDaySpawn;                                                              // 0x0560 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x0568 (size: 0x8)
    bool fog;                                                                         // 0x0570 (size: 0x1)
    int32 anger;                                                                      // 0x0574 (size: 0x4)
    bool isAngry;                                                                     // 0x0578 (size: 0x1)
    bool dash;                                                                        // 0x0579 (size: 0x1)
    FTimerHandle timerDash;                                                           // 0x0580 (size: 0x8)
    FVector Forward;                                                                  // 0x0588 (size: 0xC)
    class UeyerTeeth_Skeleton_AnimBlueprint_C* AnimInstance;                          // 0x0598 (size: 0x8)
    float dist;                                                                       // 0x05A0 (size: 0x4)

    void instantAngry();
    void tryJump();
    bool isLooking();
    void updEyes();
    void angrify();
    void showteethTimeline__FinishedFunc();
    void showteethTimeline__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void blink();
    void despawn();
    void del();
    void addAnger();
    void goAngry(float Duration, bool skipTeeth);
    void dashTimer();
    void showTeeth();
    void stopTeeth();
    void ReceiveDestroyed();
    void BndEvt__eyer_killsphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void OnLanded(const FHitResult& Hit);
    void photo();
    void ExecuteUbergraph_eyer(int32 EntryPoint);
}; // Size: 0x5A4

#endif
