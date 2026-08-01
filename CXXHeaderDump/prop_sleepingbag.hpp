#ifndef UE4SS_SDK_prop_sleepingbag_HPP
#define UE4SS_SDK_prop_sleepingbag_HPP

class Aprop_sleepingbag_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    TSubclassOf<class AsleepingbagWrap_C> unwrapped;                                  // 0x0370 (size: 0x8)
    bool unwrapOnBed;                                                                 // 0x0378 (size: 0x1)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void canPickup(bool& return);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_sleepingbag(int32 EntryPoint);
}; // Size: 0x379

#endif
