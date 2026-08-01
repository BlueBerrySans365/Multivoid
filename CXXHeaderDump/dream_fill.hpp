#ifndef UE4SS_SDK_dream_fill_HPP
#define UE4SS_SDK_dream_fill_HPP

class Adream_fill_C : public AdreamBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0288 (size: 0x8)
    class UChildActorComponent* door3;                                                // 0x0290 (size: 0x8)
    class UChildActorComponent* door1;                                                // 0x0298 (size: 0x8)
    class UChildActorComponent* door2;                                                // 0x02A0 (size: 0x8)
    class UChildActorComponent* door0;                                                // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* fill;                                                 // 0x02B0 (size: 0x8)
    class UInstancedStaticMeshComponent* pills;                                       // 0x02B8 (size: 0x8)
    class UBillboardComponent* doors;                                                 // 0x02C0 (size: 0x8)
    class UBillboardComponent* pillars;                                               // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* Plane4;                                               // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* Plane3;                                               // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* Plane2;                                               // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x02F0 (size: 0x8)
    float aa_a_B7C18E4A493E565630B091AA87B0C5CC;                                      // 0x02F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> aa__Direction_B7C18E4A493E565630B091AA87B0C5CC; // 0x02FC (size: 0x1)
    class UTimelineComponent* Aa;                                                     // 0x0300 (size: 0x8)
    float A;                                                                          // 0x0308 (size: 0x4)
    TArray<class UChildActorComponent*> B;                                            // 0x0310 (size: 0x10)

    void UserConstructionScript();
    void aa__FinishedFunc();
    void aa__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_dream_fill(int32 EntryPoint);
}; // Size: 0x320

#endif
