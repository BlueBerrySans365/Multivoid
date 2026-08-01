#ifndef UE4SS_SDK_NewBlueprint4_HPP
#define UE4SS_SDK_NewBlueprint4_HPP

class ANewBlueprint4_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x04C8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04D0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x04E0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x04E8 (size: 0x8)
    bool NewVar_0;                                                                    // 0x04F0 (size: 0x1)
    float NewVar_1;                                                                   // 0x04F4 (size: 0x4)
    bool NewVar_2;                                                                    // 0x04F8 (size: 0x1)
    float Speed;                                                                      // 0x04FC (size: 0x4)

    void OnFail_8B1A0E784DE0D27CFC29FCA7A7C21F47(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_8B1A0E784DE0D27CFC29FCA7A7C21F47(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void checkZeroSpeed();
    void checkProx();
    void ExecuteUbergraph_NewBlueprint4(int32 EntryPoint);
}; // Size: 0x500

#endif
