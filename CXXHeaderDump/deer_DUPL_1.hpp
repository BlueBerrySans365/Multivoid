#ifndef UE4SS_SDK_deer_DUPL_1_HPP
#define UE4SS_SDK_deer_DUPL_1_HPP

class Adeer_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x04C8 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x04D0 (size: 0x8)
    class UBillboardComponent* Root;                                                  // 0x04D8 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x04E0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x04E8 (size: 0x8)
    float d_a_3F010BB341E44AAC5F403FA869BF6B7B;                                       // 0x04F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> d__Direction_3F010BB341E44AAC5F403FA869BF6B7B; // 0x04F4 (size: 0x1)
    class UTimelineComponent* D;                                                      // 0x04F8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0500 (size: 0x8)
    bool diss;                                                                        // 0x0508 (size: 0x1)

    void d__FinishedFunc();
    void d__UpdateFunc();
    void OnFail_75A9BA0E4DB0CE711F734395D44D4C89(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_75A9BA0E4DB0CE711F734395D44D4C89(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_2B335E8D47F780E7A147A08168D3E410(FName NotifyName);
    void OnNotifyBegin_2B335E8D47F780E7A147A08168D3E410(FName NotifyName);
    void OnInterrupted_2B335E8D47F780E7A147A08168D3E410(FName NotifyName);
    void OnBlendOut_2B335E8D47F780E7A147A08168D3E410(FName NotifyName);
    void OnCompleted_2B335E8D47F780E7A147A08168D3E410(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void disappear();
    void ExecuteUbergraph_deer(int32 EntryPoint);
}; // Size: 0x509

#endif
