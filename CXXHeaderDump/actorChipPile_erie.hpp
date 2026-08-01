#ifndef UE4SS_SDK_actorChipPile_erie_HPP
#define UE4SS_SDK_actorChipPile_erie_HPP

class AactorChipPile_erie_C : public AactorChipPile_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0278 (size: 0x8)
    class UStaticMeshComponent* StaticMesh3;                                          // 0x0280 (size: 0x8)
    float restore_a_D7C57A11417438D289D9119C159440E8;                                 // 0x0288 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> restore__Direction_D7C57A11417438D289D9119C159440E8; // 0x028C (size: 0x1)
    class UTimelineComponent* restore;                                                // 0x0290 (size: 0x8)
    FVector S;                                                                        // 0x0298 (size: 0xC)

    void restore__FinishedFunc();
    void restore__UpdateFunc();
    void restore__b__EventFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_actorChipPile_erie(int32 EntryPoint);
}; // Size: 0x2A4

#endif
