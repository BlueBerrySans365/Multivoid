#ifndef UE4SS_SDK_prop_carBatteryCharger_HPP
#define UE4SS_SDK_prop_carBatteryCharger_HPP

class Aprop_carBatteryCharger_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UAudioComponent* audio_spark_blue;                                          // 0x03B0 (size: 0x8)
    class UAudioComponent* audio_spark_red;                                           // 0x03B8 (size: 0x8)
    class UAudioComponent* audio_spark_explosion;                                     // 0x03C0 (size: 0x8)
    class UPhysicsConstraintComponent* constraint_B;                                  // 0x03C8 (size: 0x8)
    class UPhysicsConstraintComponent* constraint_R;                                  // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* croc_B;                                               // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* croc_R;                                               // 0x03E0 (size: 0x8)
    class UAudioComponent* audio_plugin;                                              // 0x03E8 (size: 0x8)
    class UAudioComponent* audio_plugout;                                             // 0x03F0 (size: 0x8)
    class UParticleSystemComponent* eff_bulb;                                         // 0x03F8 (size: 0x8)
    class UCableComponent* cable_B;                                                   // 0x0400 (size: 0x8)
    class UCableComponent* cable_R;                                                   // 0x0408 (size: 0x8)
    class USphereComponent* Trigger;                                                  // 0x0410 (size: 0x8)
    class Aprop_atvcarbattery_C* carBatteryRed;                                       // 0x0418 (size: 0x8)
    FName carBatteryRed_Key;                                                          // 0x0420 (size: 0x8)
    class Aprop_atvcarbattery_C* carBatteryBlue;                                      // 0x0428 (size: 0x8)
    FName carBatteryBlue_Key;                                                         // 0x0430 (size: 0x8)
    bool plugged;                                                                     // 0x0438 (size: 0x1)
    bool doneCharging;                                                                // 0x0439 (size: 0x1)
    bool wrongConnection;                                                             // 0x043A (size: 0x1)
    bool pluggedRedToRed;                                                             // 0x043B (size: 0x1)
    bool pluggedBlueToRed;                                                            // 0x043C (size: 0x1)
    bool isDragging;                                                                  // 0x043D (size: 0x1)
    bool draggingRed;                                                                 // 0x043E (size: 0x1)
    class AmainPlayer_C* playerUsing;                                                 // 0x0440 (size: 0x8)
    bool lookingAt_red;                                                               // 0x0448 (size: 0x1)
    bool lookingAt_blue;                                                              // 0x0449 (size: 0x1)
    bool cordExploded;                                                                // 0x044A (size: 0x1)
    bool pluggedToRed;                                                                // 0x044B (size: 0x1)
    bool pluggedEffect;                                                               // 0x044C (size: 0x1)

    void processKeys(bool& return);
    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void sparkEffect(bool red);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getPriceMultiplier(float& priceMult);
    void detachBattery();
    void setBulb();
    void Setup();
    void findBattery();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__prop_carBatteryCharger_trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_carBatteryCharger_trigger_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ReceiveBeginPlay();
    void intComs_propRenderer_finishProps();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void used(bool Pressed);
    void ReceiveDestroyed();
    void ExecuteUbergraph_prop_carBatteryCharger(int32 EntryPoint);
}; // Size: 0x44D

#endif
