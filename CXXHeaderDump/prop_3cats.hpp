#ifndef UE4SS_SDK_prop_3cats_HPP
#define UE4SS_SDK_prop_3cats_HPP

class Aprop_3cats_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0370 (size: 0x8)
    float a_a_E242AECD400018D07DE48597EB675DC4;                                       // 0x0378 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_E242AECD400018D07DE48597EB675DC4; // 0x037C (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0380 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void a__FinishedFunc();
    void a__UpdateFunc();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_3cats(int32 EntryPoint);
}; // Size: 0x388

#endif
