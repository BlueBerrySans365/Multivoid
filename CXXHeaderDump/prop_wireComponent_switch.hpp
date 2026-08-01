#ifndef UE4SS_SDK_prop_wireComponent_switch_HPP
#define UE4SS_SDK_prop_wireComponent_switch_HPP

class Aprop_wireComponent_switch_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0378 (size: 0x8)
    bool Active;                                                                      // 0x0380 (size: 0x1)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void wirePass(class Awire_C* wire);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_wireComponent_switch(int32 EntryPoint);
}; // Size: 0x381

#endif
