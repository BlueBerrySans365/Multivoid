#ifndef UE4SS_SDK_trigger_locationAmbience_HPP
#define UE4SS_SDK_trigger_locationAmbience_HPP

class Atrigger_locationAmbience_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBoxComponent* Trigger;                                                     // 0x0298 (size: 0x8)
    class UAudioComponent* audio1;                                                    // 0x02A0 (size: 0x8)
    bool played;                                                                      // 0x02A8 (size: 0x1)
    Fstruct_sound Audio;                                                              // 0x02B0 (size: 0x18)

    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void Init();
    void BndEvt__trigger_locationAmbience_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_trigger_locationAmbience(int32 EntryPoint);
}; // Size: 0x2C8

#endif
