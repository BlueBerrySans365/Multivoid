#ifndef UE4SS_SDK_prop_pizza_nobox_HPP
#define UE4SS_SDK_prop_pizza_nobox_HPP

class Aprop_pizza_nobox_C : public Aprop_pizza_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C0 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void pizzaEaten();
    void ExecuteUbergraph_prop_pizza_nobox(int32 EntryPoint);
}; // Size: 0x3C8

#endif
