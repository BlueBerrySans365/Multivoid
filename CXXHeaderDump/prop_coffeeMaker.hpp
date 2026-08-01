#ifndef UE4SS_SDK_prop_coffeeMaker_HPP
#define UE4SS_SDK_prop_coffeeMaker_HPP

class Aprop_coffeeMaker_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UBillboardComponent* Pos;                                                   // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x03B8 (size: 0x8)
    bool hasCup;                                                                      // 0x03C0 (size: 0x1)
    bool hasCoffee;                                                                   // 0x03C1 (size: 0x1)
    bool coffeeReady;                                                                 // 0x03C2 (size: 0x1)
    bool hasPower;                                                                    // 0x03C3 (size: 0x1)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ExecuteUbergraph_prop_coffeeMaker(int32 EntryPoint);
}; // Size: 0x3C4

#endif
