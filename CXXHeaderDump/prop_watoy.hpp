#ifndef UE4SS_SDK_prop_watoy_HPP
#define UE4SS_SDK_prop_watoy_HPP

class Aprop_watoy_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0370 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0378 (size: 0x8)
    float Timeline_0_a_ED748EBB4D83BB8EAB8B1DA176A4EA8D;                              // 0x0380 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_ED748EBB4D83BB8EAB8B1DA176A4EA8D; // 0x0384 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0388 (size: 0x8)
    bool Active;                                                                      // 0x0390 (size: 0x1)
    class Ucomp_zerog_C* A;                                                           // 0x0398 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Activate();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_watoy(int32 EntryPoint);
}; // Size: 0x3A0

#endif
