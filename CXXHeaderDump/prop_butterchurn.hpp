#ifndef UE4SS_SDK_prop_butterchurn_HPP
#define UE4SS_SDK_prop_butterchurn_HPP

class Aprop_butterchurn_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Sound;                                                     // 0x0370 (size: 0x8)
    class UStaticMeshComponent* Handle;                                               // 0x0378 (size: 0x8)
    class UBillboardComponent* Axis;                                                  // 0x0380 (size: 0x8)
    float Speed;                                                                      // 0x0388 (size: 0x4)
    float speed_lerp;                                                                 // 0x038C (size: 0x4)
    bool hasButter;                                                                   // 0x0390 (size: 0x1)
    float milkPercent;                                                                // 0x0394 (size: 0x4)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void ReceiveTick(float DeltaSeconds);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_prop_butterchurn(int32 EntryPoint);
}; // Size: 0x398

#endif
