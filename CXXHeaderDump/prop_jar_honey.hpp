#ifndef UE4SS_SDK_prop_jar_honey_HPP
#define UE4SS_SDK_prop_jar_honey_HPP

class Aprop_jar_honey_C : public Aprop_cleanjar_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void eat(class AmainPlayer_C* Player, bool inventoryAdd);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_jar_honey(int32 EntryPoint);
}; // Size: 0x370

#endif
