#ifndef UE4SS_SDK_firetankCorpse_HPP
#define UE4SS_SDK_firetankCorpse_HPP

class AfiretankCorpse_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UArrowComponent* Forward;                                                   // 0x0370 (size: 0x8)
    class UBillboardComponent* threadsVelocityPoint_R;                                // 0x0378 (size: 0x8)
    class UBillboardComponent* threadsVelocityPoint_L;                                // 0x0380 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0388 (size: 0x8)
    class USkeletalMeshComponent* thread_R;                                           // 0x0390 (size: 0x8)
    class USkeletalMeshComponent* thread_L;                                           // 0x0398 (size: 0x8)
    TArray<class UPhysicsConstraintComponent*> constraints_right;                     // 0x03A0 (size: 0x10)
    TArray<class UPhysicsConstraintComponent*> constraints_left;                      // 0x03B0 (size: 0x10)
    TArray<class UStaticMeshComponent*> wheels_right;                                 // 0x03C0 (size: 0x10)
    TArray<class UStaticMeshComponent*> wheels_left;                                  // 0x03D0 (size: 0x10)
    float threads_R;                                                                  // 0x03E0 (size: 0x4)
    float threads_L;                                                                  // 0x03E4 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_thread_R;                                  // 0x03E8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_thread_L;                                  // 0x03F0 (size: 0x8)
    class Ufiretank_thread_Skeleton_AnimBlueprint_C* anim_thread_R;                   // 0x03F8 (size: 0x8)
    class Ufiretank_thread_Skeleton_AnimBlueprint_C* anim_thread_L;                   // 0x0400 (size: 0x8)
    TArray<class UPhysicsConstraintComponent*> constraintsSus_right;                  // 0x0408 (size: 0x10)
    TArray<class UPhysicsConstraintComponent*> constraintsSus_left;                   // 0x0418 (size: 0x10)
    FVector threadsOffset;                                                            // 0x0428 (size: 0xC)
    TArray<class UPhysicsConstraintComponent*> allSus;                                // 0x0438 (size: 0x10)
    TArray<class UPhysicsConstraintComponent*> allWheels;                             // 0x0448 (size: 0x10)
    TArray<FName> gibs;                                                               // 0x0458 (size: 0x10)

    void Exp(FTransform SpawnTransform);
    void setThreadsOffset();
    void updThreads();
    void constructWheels();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void explode();
    void ExecuteUbergraph_firetankCorpse(int32 EntryPoint);
}; // Size: 0x468

#endif
