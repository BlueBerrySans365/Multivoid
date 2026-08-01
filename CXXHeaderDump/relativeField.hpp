#ifndef UE4SS_SDK_relativeField_HPP
#define UE4SS_SDK_relativeField_HPP

class ArelativeField_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0370 (size: 0x8)
    TArray<class AActor*> objs;                                                       // 0x0378 (size: 0x10)
    FTransform prev;                                                                  // 0x0390 (size: 0x30)
    bool Active;                                                                      // 0x03C0 (size: 0x1)

    void NewFunction_0_0(class UPrimitiveComponent* self2);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__relativeField_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__relativeField_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveHit(class UPrimitiveComponent* MyComp, class AActor* Other, class UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_relativeField(int32 EntryPoint);
}; // Size: 0x3C1

#endif
