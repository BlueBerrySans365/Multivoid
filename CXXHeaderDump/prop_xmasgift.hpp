#ifndef UE4SS_SDK_prop_xmasgift_HPP
#define UE4SS_SDK_prop_xmasgift_HPP

class Aprop_xmasgift_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void analyzePlayer(bool addDropHealth, bool addDropSleep, bool addDropHeavymed, bool addDropPoints, bool addDropFood, bool addDropbattery, bool addDropBonus, bool addDropStore, TArray<FName>& Drop);
    void Init();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void broken();
    void ReceiveBeginPlay();
    void broken_fire();
    void ExecuteUbergraph_prop_xmasgift(int32 EntryPoint);
}; // Size: 0x370

#endif
