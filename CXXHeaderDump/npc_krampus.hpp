#ifndef UE4SS_SDK_npc_krampus_HPP
#define UE4SS_SDK_npc_krampus_HPP

class Anpc_krampus_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class USphereComponent* begoneRadius;                                             // 0x04C8 (size: 0x8)
    class USphereComponent* stabRadius;                                               // 0x04D0 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x04D8 (size: 0x8)
    class USpringArmComponent* lag;                                                   // 0x04E0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04E8 (size: 0x8)
    class USphereComponent* attackRadius;                                             // 0x04F0 (size: 0x8)
    TEnumAsByte<enum_krampusMode::Type> Mode;                                         // 0x04F8 (size: 0x1)
    class AmainPlayer_C* stabPlayer;                                                  // 0x0500 (size: 0x8)
    float running;                                                                    // 0x0508 (size: 0x4)
    bool jumped;                                                                      // 0x050C (size: 0x1)
    class Aprop_C* butter;                                                            // 0x0510 (size: 0x8)
    TArray<class Aprop_C*> ignoreButters;                                             // 0x0518 (size: 0x10)
    float Distance;                                                                   // 0x0528 (size: 0x4)
    float MaxDistance;                                                                // 0x052C (size: 0x4)
    int32 fireballs;                                                                  // 0x0530 (size: 0x4)
    float Delay;                                                                      // 0x0534 (size: 0x4)
    float maxDelay;                                                                   // 0x0538 (size: 0x4)
    int32 minFireballs;                                                               // 0x053C (size: 0x4)

    void throwFireball();
    void scanForButter();
    void OnMoveFinished_4A37CBA6455B04B622D5A688984E2163(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    void OnRequestFailed_4A37CBA6455B04B622D5A688984E2163();
    void OnMoveFinished_211246964EA90E339B7C19B893C2F5BB(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    void OnRequestFailed_211246964EA90E339B7C19B893C2F5BB();
    void OnMoveFinished_EF82463F48FF3AA5556F97B6B5B07AFA(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    void OnRequestFailed_EF82463F48FF3AA5556F97B6B5B07AFA();
    void OnMoveFinished_DC2A03CB4F8D1FFE2DC9D8813EE13C83(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    void OnRequestFailed_DC2A03CB4F8D1FFE2DC9D8813EE13C83();
    void OnMoveFinished_49A5842F44CCB853D4C666846880036E(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    void OnRequestFailed_49A5842F44CCB853D4C666846880036E();
    void OnMoveFinished_E0672E0343A67AD3894624B77A1AFAE2(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    void OnRequestFailed_E0672E0343A67AD3894624B77A1AFAE2();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void move();
    void OnLanded(const FHitResult& Hit);
    void prepareJump();
    void step(FVector Location);
    void timerButter();
    void playerOverlap();
    void BndEvt__krampus_attackRadius_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void tryToDespawn();
    void ReceiveDestroyed();
    void safeTp();
    void fireball();
    void BndEvt__krampus_stabRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__krampus_begoneRadius_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_npc_krampus(int32 EntryPoint);
}; // Size: 0x540

#endif
