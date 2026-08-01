#ifndef UE4SS_SDK_eg_HPP
#define UE4SS_SDK_eg_HPP

class Aeg_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x04C8 (size: 0x8)
    class UPointLightComponent* 4;                                                    // 0x04D0 (size: 0x8)
    class UPointLightComponent* 3;                                                    // 0x04D8 (size: 0x8)
    class UPointLightComponent* 2;                                                    // 0x04E0 (size: 0x8)
    class UPointLightComponent* 1;                                                    // 0x04E8 (size: 0x8)
    class UPointLightComponent* 0;                                                    // 0x04F0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x04F8 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0500 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0508 (size: 0x8)
    bool check;                                                                       // 0x0510 (size: 0x1)
    bool R;                                                                           // 0x0511 (size: 0x1)
    bool debug;                                                                       // 0x0512 (size: 0x1)
    bool rendered;                                                                    // 0x0513 (size: 0x1)
    bool move;                                                                        // 0x0514 (size: 0x1)

    void OnFail_AA4F896342A93FE29B9E3B89BADDFD14(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_AA4F896342A93FE29B9E3B89BADDFD14(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveBeginPlay();
    void retrieve();
    void OnLanded(const FHitResult& Hit);
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_eg(int32 EntryPoint);
}; // Size: 0x515

#endif
