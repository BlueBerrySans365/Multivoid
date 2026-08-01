#ifndef UE4SS_SDK_prop_biotoilet_HPP
#define UE4SS_SDK_prop_biotoilet_HPP

class Aprop_biotoilet_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0370 (size: 0x8)
    class UChildActorComponent* door;                                                 // 0x0378 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0380 (size: 0x8)
    bool NewVar_0_0;                                                                  // 0x0388 (size: 0x1)

    void isNotSawable(bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_biotoilet(int32 EntryPoint);
}; // Size: 0x389

#endif
