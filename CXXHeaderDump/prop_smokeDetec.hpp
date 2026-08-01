#ifndef UE4SS_SDK_prop_smokeDetec_HPP
#define UE4SS_SDK_prop_smokeDetec_HPP

class Aprop_smokeDetec_C : public Aprop_wallAttachable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UAudioComponent* smokealarm;                                                // 0x03E0 (size: 0x8)
    class UParticleSystemComponent* eff_light;                                        // 0x03E8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03F0 (size: 0x8)
    TArray<class AActor*> obj;                                                        // 0x03F8 (size: 0x10)
    FTimerHandle timerAlarm;                                                          // 0x0408 (size: 0x8)
    bool IsActive;                                                                    // 0x0410 (size: 0x1)
    bool power;                                                                       // 0x0411 (size: 0x1)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKeyT(bool& gather);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void checkFire(bool& fire);
    void ReceiveBeginPlay();
    void BndEvt__prop_smokeDetec_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_smokeDetec_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void check();
    void alarm(bool Activate);
    void alarmTimer();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ExecuteUbergraph_prop_smokeDetec(int32 EntryPoint);
}; // Size: 0x412

#endif
