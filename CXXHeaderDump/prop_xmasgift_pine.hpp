#ifndef UE4SS_SDK_prop_xmasgift_pine_HPP
#define UE4SS_SDK_prop_xmasgift_pine_HPP

class Aprop_xmasgift_pine_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0370 (size: 0x8)

    void analyzePlayer(bool addDropHealth, bool addDropSleep, bool addDropHeavymed, bool addDropPoints, bool addDropFood, bool addDropbattery, bool addDropBonus, bool addDropStore, TArray<FName>& Drop);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void broken();
    void ReceiveBeginPlay();
    void broken_fire();
    void ExecuteUbergraph_prop_xmasgift_pine(int32 EntryPoint);
}; // Size: 0x378

#endif
