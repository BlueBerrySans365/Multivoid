#ifndef UE4SS_SDK_subPawn_HPP
#define UE4SS_SDK_subPawn_HPP

class AsubPawn_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0288 (size: 0x8)
    class UFloatingPawnMovement* FloatingPawnMovement;                                // 0x0290 (size: 0x8)

    void OnFail_5855052741EFBC3D0EA637A2B93F62CD(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_5855052741EFBC3D0EA637A2B93F62CD(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_subPawn(int32 EntryPoint);
}; // Size: 0x298

#endif
