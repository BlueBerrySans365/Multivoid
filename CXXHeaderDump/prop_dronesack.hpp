#ifndef UE4SS_SDK_prop_dronesack_HPP
#define UE4SS_SDK_prop_dronesack_HPP

class Aprop_dronesack_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class UBoxComponent* Trigger;                                                     // 0x0378 (size: 0x8)
    class Aprop_inventoryContainer_drone_C* container;                                // 0x0380 (size: 0x8)
    bool takenByDrone;                                                                // 0x0388 (size: 0x1)
    class AActor* Actor;                                                              // 0x0390 (size: 0x8)
    class UPrimitiveComponent* comp;                                                  // 0x0398 (size: 0x8)

    void ignoreSave(bool& ignoreSave);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void ReceiveBeginPlay();
    void BndEvt__prop_dronesack_trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveDestroyed();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_dronesack(int32 EntryPoint);
}; // Size: 0x3A0

#endif
