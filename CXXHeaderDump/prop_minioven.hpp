#ifndef UE4SS_SDK_prop_minioven_HPP
#define UE4SS_SDK_prop_minioven_HPP

class Aprop_minioven_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UParticleSystemComponent* eff_light;                                        // 0x03B0 (size: 0x8)
    class UBoxComponent* button_switch;                                               // 0x03B8 (size: 0x8)
    class UBoxComponent* button_temp;                                                 // 0x03C0 (size: 0x8)
    class UBoxComponent* cookbox;                                                     // 0x03C8 (size: 0x8)
    class UChildActorComponent* door;                                                 // 0x03D0 (size: 0x8)
    TArray<class Aprop_food_C*> foods;                                                // 0x03D8 (size: 0x10)
    float power;                                                                      // 0x03E8 (size: 0x4)
    bool Active;                                                                      // 0x03EC (size: 0x1)
    bool powered;                                                                     // 0x03ED (size: 0x1)
    int32 Mode;                                                                       // 0x03F0 (size: 0x4)
    bool input_temp;                                                                  // 0x03F4 (size: 0x1)
    bool input_switch;                                                                // 0x03F5 (size: 0x1)

    float getPowerSpeed();
    float getTemp();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void upd();
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void gatherDataFromKeyT(bool& gather);
    void BndEvt__kitchen_cookbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__kitchen_cookbox_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_minioven(int32 EntryPoint);
}; // Size: 0x3F6

#endif
