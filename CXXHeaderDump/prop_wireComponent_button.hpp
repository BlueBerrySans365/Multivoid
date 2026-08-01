#ifndef UE4SS_SDK_prop_wireComponent_button_HPP
#define UE4SS_SDK_prop_wireComponent_button_HPP

class Aprop_wireComponent_button_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0378 (size: 0x8)
    class Awire_C* wire;                                                              // 0x0380 (size: 0x8)
    FString wire_key;                                                                 // 0x0388 (size: 0x10)
    bool used;                                                                        // 0x0398 (size: 0x1)
    int32 I;                                                                          // 0x039C (size: 0x4)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void wireConnected(class Awire_C* wire, bool side);
    void Dest(class AActor* DestroyedActor);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_wireComponent_button(int32 EntryPoint);
}; // Size: 0x3A0

#endif
