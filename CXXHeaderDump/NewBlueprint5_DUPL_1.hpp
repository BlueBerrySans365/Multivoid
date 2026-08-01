#ifndef UE4SS_SDK_NewBlueprint5_DUPL_1_HPP
#define UE4SS_SDK_NewBlueprint5_DUPL_1_HPP

class ANewBlueprint5_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UProceduralMeshComponent* ProceduralMesh;                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    TArray<FVector> vs;                                                               // 0x0238 (size: 0x10)
    TArray<int32> ts;                                                                 // 0x0248 (size: 0x10)
    float ime;                                                                        // 0x0258 (size: 0x4)
    bool NewVar_0;                                                                    // 0x025C (size: 0x1)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NewBlueprint5(int32 EntryPoint);
}; // Size: 0x25D

#endif
