#ifndef UE4SS_SDK_prop_bloodPipe_HPP
#define UE4SS_SDK_prop_bloodPipe_HPP

class Aprop_bloodPipe_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0370 (size: 0x8)
    int32 Type;                                                                       // 0x0378 (size: 0x4)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void ReceiveTick(float DeltaSeconds);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_bloodPipe(int32 EntryPoint);
}; // Size: 0x37C

#endif
