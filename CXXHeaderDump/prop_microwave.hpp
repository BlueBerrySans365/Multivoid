#ifndef UE4SS_SDK_prop_microwave_HPP
#define UE4SS_SDK_prop_microwave_HPP

class Aprop_microwave_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UPhysicsConstraintComponent* plateNocollide1;                               // 0x03B0 (size: 0x8)
    class UPhysicsConstraintComponent* plateNocollide;                                // 0x03B8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x03C0 (size: 0x8)
    class UAudioComponent* microwave_loop;                                            // 0x03C8 (size: 0x8)
    class UAudioComponent* microwave_ding;                                            // 0x03D0 (size: 0x8)
    class UChildActorComponent* door;                                                 // 0x03D8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* plate;                                                // 0x03E8 (size: 0x8)
    class UBillboardComponent* Spin;                                                  // 0x03F0 (size: 0x8)
    bool opened;                                                                      // 0x03F8 (size: 0x1)
    bool Active;                                                                      // 0x03F9 (size: 0x1)
    float Time;                                                                       // 0x03FC (size: 0x4)
    bool canClose;                                                                    // 0x0400 (size: 0x1)
    float Timer;                                                                      // 0x0404 (size: 0x4)
    int32 timeMode;                                                                   // 0x0408 (size: 0x4)
    bool powered;                                                                     // 0x040C (size: 0x1)
    class Acord_C* objCord1;                                                          // 0x0410 (size: 0x8)
    bool delayClose;                                                                  // 0x0418 (size: 0x1)
    class Aprop_microwaveDoor_C* doorObj;                                             // 0x0420 (size: 0x8)
    TArray<class AActor*> objectsInside;                                              // 0x0428 (size: 0x10)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void ignoreSave(bool& ignoreSave);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void openDoor();
    void closeDoor();
    void Wave();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void forceOpenDoor();
    void openAttempt();
    void doorOpened();
    void doorClosed();
    void BndEvt__prop_microwave_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_microwave_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_prop_microwave(int32 EntryPoint);
}; // Size: 0x438

#endif
