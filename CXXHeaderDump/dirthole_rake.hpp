#ifndef UE4SS_SDK_dirthole_rake_HPP
#define UE4SS_SDK_dirthole_rake_HPP

class Adirthole_rake_C : public Adirthole_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_dirthole_rake(int32 EntryPoint);
}; // Size: 0x268

#endif
