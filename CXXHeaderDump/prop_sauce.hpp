#ifndef UE4SS_SDK_prop_sauce_HPP
#define UE4SS_SDK_prop_sauce_HPP

class Aprop_sauce_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    int32 drops;                                                                      // 0x0378 (size: 0x4)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_sauce(int32 EntryPoint);
}; // Size: 0x37C

#endif
