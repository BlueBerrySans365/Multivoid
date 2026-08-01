#ifndef UE4SS_SDK_prop_generatorP_HPP
#define UE4SS_SDK_prop_generatorP_HPP

class Aprop_generatorP_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UChildActorComponent* obstacle;                                             // 0x0370 (size: 0x8)
    class UStaticMeshComponent* fuelIn;                                               // 0x0378 (size: 0x8)
    class UBoxComponent* fuelVis;                                                     // 0x0380 (size: 0x8)
    class UBoxComponent* use;                                                         // 0x0388 (size: 0x8)
    class UChildActorComponent* socket1;                                              // 0x0390 (size: 0x8)
    class UChildActorComponent* socket0;                                              // 0x0398 (size: 0x8)
    float fuel;                                                                       // 0x03A0 (size: 0x4)
    bool IsActive;                                                                    // 0x03A4 (size: 0x1)

    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void fuelUp(class Aprop_gascan_C* self2, bool& fueled);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void activateOutlets();
    void tryActivate();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void BndEvt__prop_generatorP_fuelIn_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_generatorP(int32 EntryPoint);
}; // Size: 0x3A5

#endif
