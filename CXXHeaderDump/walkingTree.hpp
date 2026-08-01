#ifndef UE4SS_SDK_walkingTree_HPP
#define UE4SS_SDK_walkingTree_HPP

class AwalkingTree_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* rend;                                                 // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x04D0 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x04D8 (size: 0x8)

    void OnFail_FF173AF7418E4709B590F7A441AAF80A(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_FF173AF7418E4709B590F7A441AAF80A(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnLanded(const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_walkingTree(int32 EntryPoint);
}; // Size: 0x4E0

#endif
