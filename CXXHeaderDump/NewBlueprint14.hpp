#ifndef UE4SS_SDK_NewBlueprint14_HPP
#define UE4SS_SDK_NewBlueprint14_HPP

class ANewBlueprint14_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* bells2;                                                    // 0x0228 (size: 0x8)
    class UAudioComponent* bells1;                                                    // 0x0230 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x0238 (size: 0x8)
    class UAudioComponent* bells;                                                     // 0x0240 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0248 (size: 0x8)
    class UProceduralMeshComponent* ProceduralMesh;                                   // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    float a_a_DEF21A54477435ACA75D8DA4B533E999;                                       // 0x0260 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_DEF21A54477435ACA75D8DA4B533E999; // 0x0264 (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0268 (size: 0x8)
    TArray<FVector> vsa;                                                              // 0x0270 (size: 0x10)
    TArray<int32> tsa;                                                                // 0x0280 (size: 0x10)
    TArray<FVector> nsa;                                                              // 0x0290 (size: 0x10)
    TArray<FVector2D> usa;                                                            // 0x02A0 (size: 0x10)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x02B0 (size: 0x8)
    FVector Box;                                                                      // 0x02B8 (size: 0xC)
    bool Visible;                                                                     // 0x02C4 (size: 0x1)
    bool NewVar_0;                                                                    // 0x02C5 (size: 0x1)
    FString NewVar_1;                                                                 // 0x02C8 (size: 0x10)
    FString NewVar_2;                                                                 // 0x02D8 (size: 0x10)
    FString NewVar_3;                                                                 // 0x02E8 (size: 0x10)
    FString NewVar_4;                                                                 // 0x02F8 (size: 0x10)
    FString NewVar_5;                                                                 // 0x0308 (size: 0x10)
    TArray<uint8> bts1;                                                               // 0x0318 (size: 0x10)
    TArray<uint8> bts2;                                                               // 0x0328 (size: 0x10)
    TArray<uint8> bts3;                                                               // 0x0338 (size: 0x10)
    TArray<uint8> bts4;                                                               // 0x0348 (size: 0x10)
    TArray<uint8> bs;                                                                 // 0x0358 (size: 0x10)
    bool NewVar_6;                                                                    // 0x0368 (size: 0x1)
    FVector NewVar_7;                                                                 // 0x036C (size: 0xC)
    bool NewVar_8;                                                                    // 0x0378 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x0380 (size: 0x8)

    void gen();
    void UserConstructionScript();
    void a__FinishedFunc();
    void a__UpdateFunc();
    void unvis();
    void invis();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_NewBlueprint14(int32 EntryPoint);
}; // Size: 0x388

#endif
