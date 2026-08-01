#ifndef UE4SS_SDK_NewBlueprint7_HPP
#define UE4SS_SDK_NewBlueprint7_HPP

class ANewBlueprint7_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UProceduralMeshComponent* ProceduralMesh;                                   // 0x04C8 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x04D0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04D8 (size: 0x8)
    bool NewVar_0;                                                                    // 0x04E0 (size: 0x1)
    TArray<FVector> NewVar_1;                                                         // 0x04E8 (size: 0x10)
    TArray<int32> NewVar_2;                                                           // 0x04F8 (size: 0x10)
    TArray<FVector> NewVar_3;                                                         // 0x0508 (size: 0x10)
    TArray<FVector2D> NewVar_4;                                                       // 0x0518 (size: 0x10)
    bool NewVar_5;                                                                    // 0x0528 (size: 0x1)
    bool NewVar_6;                                                                    // 0x0529 (size: 0x1)
    float D;                                                                          // 0x052C (size: 0x4)

    void NewFunction_0();
    void OnFail_F89F5A8F414EC9E1688955A98075908F(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_F89F5A8F414EC9E1688955A98075908F(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NewBlueprint7(int32 EntryPoint);
}; // Size: 0x530

#endif
