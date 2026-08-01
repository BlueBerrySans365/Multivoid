#ifndef UE4SS_SDK_npc_funguy_HPP
#define UE4SS_SDK_npc_funguy_HPP

class Anpc_funguy_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x04C8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x04D0 (size: 0x8)
    class USpringArmComponent* shroomer_0;                                            // 0x04D8 (size: 0x8)
    class UBillboardComponent* shr2;                                                  // 0x04E0 (size: 0x8)
    class UBillboardComponent* shr1;                                                  // 0x04E8 (size: 0x8)
    class UBillboardComponent* shr0;                                                  // 0x04F0 (size: 0x8)
    class UBillboardComponent* shroomerEnd;                                           // 0x04F8 (size: 0x8)
    class USpringArmComponent* shroomer_3;                                            // 0x0500 (size: 0x8)
    class USpringArmComponent* shroomer_2;                                            // 0x0508 (size: 0x8)
    class USpringArmComponent* shroomer_1;                                            // 0x0510 (size: 0x8)
    class USphereComponent* eventRadius;                                              // 0x0518 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0520 (size: 0x8)
    class UAudioComponent* funguyVoice;                                               // 0x0528 (size: 0x8)
    class USphereComponent* knockOutRadius;                                           // 0x0530 (size: 0x8)
    class USphereComponent* seeRadius;                                                // 0x0538 (size: 0x8)
    class USphereComponent* awakeRadius;                                              // 0x0540 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0548 (size: 0x8)
    float runSpeed;                                                                   // 0x0550 (size: 0x4)
    float walkSpeed;                                                                  // 0x0554 (size: 0x4)
    class Ufunguy_Skeleton_AnimBlueprint_C* Anim;                                     // 0x0558 (size: 0x8)
    bool landed;                                                                      // 0x0560 (size: 0x1)
    bool panic;                                                                       // 0x0561 (size: 0x1)
    TArray<class TSubclassOf<AActor>> filterIgnore;                                   // 0x0568 (size: 0x10)
    int32 voiceMode;                                                                  // 0x0578 (size: 0x4)
    bool awoken;                                                                      // 0x057C (size: 0x1)
    bool seen;                                                                        // 0x057D (size: 0x1)
    int32 I;                                                                          // 0x0580 (size: 0x4)
    class AActor* runawayFrom;                                                        // 0x0588 (size: 0x8)

    void setVoice();
    void Sense(bool& detected);
    void OnFail_7E6E02C047AC62F85EA40DA74522CB13(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_7E6E02C047AC62F85EA40DA74522CB13(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_CAEC23214F9D301378099C97307A6B42(FName NotifyName);
    void OnNotifyBegin_CAEC23214F9D301378099C97307A6B42(FName NotifyName);
    void OnInterrupted_CAEC23214F9D301378099C97307A6B42(FName NotifyName);
    void OnBlendOut_CAEC23214F9D301378099C97307A6B42(FName NotifyName);
    void OnCompleted_CAEC23214F9D301378099C97307A6B42(FName NotifyName);
    void ReceiveBeginPlay();
    void step(FVector Location);
    void move();
    void BndEvt__funguy_awakeRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void awake();
    void OnLanded(const FHitResult& Hit);
    void sensing();
    void runAway();
    void BndEvt__funguy_knockOutRadius_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__funguy_funguyVoice_K2Node_ComponentBoundEvent_3_OnAudioFinished__DelegateSignature();
    void tryAwake();
    void despawn();
    void BndEvt__funguy_eventRadius_K2Node_ComponentBoundEvent_4_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__funguy_eventRadius_K2Node_ComponentBoundEvent_5_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveDestroyed();
    void shroomed();
    void ExecuteUbergraph_npc_funguy(int32 EntryPoint);
}; // Size: 0x590

#endif
