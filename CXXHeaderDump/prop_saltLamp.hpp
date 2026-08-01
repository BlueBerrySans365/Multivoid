#ifndef UE4SS_SDK_prop_saltLamp_HPP
#define UE4SS_SDK_prop_saltLamp_HPP

class Aprop_saltLamp_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0370 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_saltLamp(int32 EntryPoint);
}; // Size: 0x378

#endif
