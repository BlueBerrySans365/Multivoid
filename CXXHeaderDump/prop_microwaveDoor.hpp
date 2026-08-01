#ifndef UE4SS_SDK_prop_microwaveDoor_HPP
#define UE4SS_SDK_prop_microwaveDoor_HPP

class Aprop_microwaveDoor_C : public Aprop_swinger_C
{
    class Aprop_microwave_C* parentMicrowave;                                         // 0x0428 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
}; // Size: 0x430

#endif
