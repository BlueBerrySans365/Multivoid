#ifndef UE4SS_SDK_trigger_box_N_HPP
#define UE4SS_SDK_trigger_box_N_HPP

class Atrigger_box_N_C : public Atrigger_box_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)
    int32 N;                                                                          // 0x02D0 (size: 0x4)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_trigger_box_N(int32 EntryPoint);
}; // Size: 0x2D4

#endif
