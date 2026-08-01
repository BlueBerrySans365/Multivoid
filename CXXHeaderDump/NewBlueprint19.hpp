#ifndef UE4SS_SDK_NewBlueprint19_HPP
#define UE4SS_SDK_NewBlueprint19_HPP

class ANewBlueprint19_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class Ucomp_cognitive_C* comp_cognitive;                                          // 0x04C8 (size: 0x8)
    class UBillboardComponent* b9;                                                    // 0x04D0 (size: 0x8)
    class UBillboardComponent* b8;                                                    // 0x04D8 (size: 0x8)
    class UBillboardComponent* b7;                                                    // 0x04E0 (size: 0x8)
    class UBillboardComponent* b6;                                                    // 0x04E8 (size: 0x8)
    class UBillboardComponent* b5;                                                    // 0x04F0 (size: 0x8)
    class UBillboardComponent* b4;                                                    // 0x04F8 (size: 0x8)
    class UBillboardComponent* b3;                                                    // 0x0500 (size: 0x8)
    class UBillboardComponent* B2;                                                    // 0x0508 (size: 0x8)
    class UBillboardComponent* B1;                                                    // 0x0510 (size: 0x8)
    TArray<class UBillboardComponent*> Array;                                         // 0x0518 (size: 0x10)
    TArray<FVector> Target Array;                                                     // 0x0528 (size: 0x10)
    class UblackScreen_C* scr;                                                        // 0x0538 (size: 0x8)
    FVector W;                                                                        // 0x0540 (size: 0xC)
    bool NewVar_0;                                                                    // 0x054C (size: 0x1)
    bool Condition;                                                                   // 0x054D (size: 0x1)

    void OnFail_46370EA64AEFB465337BD0BD712B1786(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_46370EA64AEFB465337BD0BD712B1786(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_FB07DBB64AA6B8F3866DF993011D6101(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_FB07DBB64AA6B8F3866DF993011D6101(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void step(FVector Location);
    void weqewqeweqw();
    void CustomEvent_0();
    void ReceiveDestroyed();
    void ExecuteUbergraph_NewBlueprint19(int32 EntryPoint);
}; // Size: 0x54E

#endif
