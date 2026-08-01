#ifndef UE4SS_SDK_prop_seed_HPP
#define UE4SS_SDK_prop_seed_HPP

class Aprop_seed_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    FText seedName;                                                                   // 0x0370 (size: 0x18)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void makeName();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_seed(int32 EntryPoint);
}; // Size: 0x388

#endif
