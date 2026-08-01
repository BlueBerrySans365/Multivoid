#ifndef UE4SS_SDK_prop_miner_HPP
#define UE4SS_SDK_prop_miner_HPP

class Aprop_miner_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UChildActorComponent* obstacle;                                             // 0x03B0 (size: 0x8)
    class UAudioComponent* audio_alarmHigh;                                           // 0x03B8 (size: 0x8)
    class UAudioComponent* audio_alarm;                                               // 0x03C0 (size: 0x8)
    class UParticleSystemComponent* eff_alarm;                                        // 0x03C8 (size: 0x8)
    class UAudioComponent* audio_gpus;                                                // 0x03D0 (size: 0x8)
    class UAudioComponent* audio_fans1;                                               // 0x03D8 (size: 0x8)
    class UAudioComponent* audio_idle;                                                // 0x03E0 (size: 0x8)
    class UBillboardComponent* Exp;                                                   // 0x03E8 (size: 0x8)
    class UBoxComponent* Stats;                                                       // 0x03F0 (size: 0x8)
    class UInstancedStaticMeshComponent* fans;                                        // 0x03F8 (size: 0x8)
    class UInstancedStaticMeshComponent* Slots;                                       // 0x0400 (size: 0x8)
    class UInstancedStaticMeshComponent* gpus;                                        // 0x0408 (size: 0x8)
    int32 upg_gpu;                                                                    // 0x0410 (size: 0x4)
    int32 upg_slots;                                                                  // 0x0414 (size: 0x4)
    int32 upg_fans;                                                                   // 0x0418 (size: 0x4)
    int32 i_calc;                                                                     // 0x041C (size: 0x4)
    int32 SpeedUp;                                                                    // 0x0420 (size: 0x4)
    int32 accumulatedPoints;                                                          // 0x0424 (size: 0x4)
    int32 maxPoints;                                                                  // 0x0428 (size: 0x4)
    bool powered;                                                                     // 0x042C (size: 0x1)
    class Acord_C* objCord1;                                                          // 0x0430 (size: 0x8)
    int32 expI;                                                                       // 0x0438 (size: 0x4)
    float overheat;                                                                   // 0x043C (size: 0x4)
    bool connectedToBase;                                                             // 0x0440 (size: 0x1)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void plugged();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upgrade(FName upgrade, bool& success);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void calc(float Delta);
    void upd();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ReceiveBeginPlay();
    void fireDamage(float Damage);
    void broken();
    void timerAlarm();
    void timerQuickAlarm();
    void extinguishFire();
    void ExecuteUbergraph_prop_miner(int32 EntryPoint);
}; // Size: 0x441

#endif
