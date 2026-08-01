#ifndef UE4SS_SDK_prop_glowstick_col_HPP
#define UE4SS_SDK_prop_glowstick_col_HPP

class Aprop_glowstick_col_C : public Aprop_glowstick_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    FVector HSV;                                                                      // 0x0428 (size: 0xC)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void intComs_applyColor(FLinearColor Color);
    void ExecuteUbergraph_prop_glowstick_col(int32 EntryPoint);
}; // Size: 0x434

#endif
