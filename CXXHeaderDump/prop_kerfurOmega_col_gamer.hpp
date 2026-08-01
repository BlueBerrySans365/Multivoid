#ifndef UE4SS_SDK_prop_kerfurOmega_col_gamer_HPP
#define UE4SS_SDK_prop_kerfurOmega_col_gamer_HPP

class Aprop_kerfurOmega_col_gamer_C : public Aprop_kerfurOmega_col_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_kerfurOmega_col_gamer(int32 EntryPoint);
}; // Size: 0x3B0

#endif
