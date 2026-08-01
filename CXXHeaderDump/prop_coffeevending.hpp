#ifndef UE4SS_SDK_prop_coffeevending_HPP
#define UE4SS_SDK_prop_coffeevending_HPP

class Aprop_coffeevending_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class UAudioComponent* audio_deny;                                                // 0x0378 (size: 0x8)
    class UStaticMeshComponent* cupSpawn;                                             // 0x0380 (size: 0x8)
    class UAudioComponent* audio_coin;                                                // 0x0388 (size: 0x8)
    class UAudioComponent* audio_buzz;                                                // 0x0390 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0398 (size: 0x8)
    class UBoxComponent* Button;                                                      // 0x03A0 (size: 0x8)
    int32 balance;                                                                    // 0x03A8 (size: 0x4)
    bool processing;                                                                  // 0x03AC (size: 0x1)
    bool lookAtButton;                                                                // 0x03AD (size: 0x1)
    int32 coffeePrice;                                                                // 0x03B0 (size: 0x4)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_coffeevending(int32 EntryPoint);
}; // Size: 0x3B4

#endif
