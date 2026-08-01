#ifndef UE4SS_SDK_NewBlueprint16_HPP
#define UE4SS_SDK_NewBlueprint16_HPP

class ANewBlueprint16_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UProceduralMeshComponent* ProceduralMesh;                                   // 0x04C8 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x04D0 (size: 0x8)
    bool moveType;                                                                    // 0x04D8 (size: 0x1)
    float Size;                                                                       // 0x04DC (size: 0x4)
    int32 C;                                                                          // 0x04E0 (size: 0x4)
    bool moveDir;                                                                     // 0x04E4 (size: 0x1)
    float heihg;                                                                      // 0x04E8 (size: 0x4)
    TArray<FVector> vs;                                                               // 0x04F0 (size: 0x10)
    TArray<int32> ts;                                                                 // 0x0500 (size: 0x10)
    TArray<FVector2D> us;                                                             // 0x0510 (size: 0x10)
    TArray<FVector> ns;                                                               // 0x0520 (size: 0x10)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0530 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x0538 (size: 0x8)
    TArray<uint8> bs;                                                                 // 0x0540 (size: 0x10)
    bool NewVar_0;                                                                    // 0x0550 (size: 0x1)

    void gen();
    bool choosePoint(FVector& RandomLocation);
    void UserConstructionScript();
    void OnFail_9201A7154775CCD2493A8AA9AF4A5C72(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_9201A7154775CCD2493A8AA9AF4A5C72(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_D46D188C4EA32985928C2E9FD98232C4(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_D46D188C4EA32985928C2E9FD98232C4(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_NewBlueprint16(int32 EntryPoint);
}; // Size: 0x551

#endif
