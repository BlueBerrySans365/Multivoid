#ifndef UE4SS_SDK_ariralNoTaker_HPP
#define UE4SS_SDK_ariralNoTaker_HPP

class AariralNoTaker_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USphereComponent* dragAway;                                                 // 0x0298 (size: 0x8)
    class USphereComponent* counter;                                                  // 0x02A0 (size: 0x8)
    TArray<class AActor*> affectedObjects;                                            // 0x02A8 (size: 0x10)
    bool Active;                                                                      // 0x02B8 (size: 0x1)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ReceiveBeginPlay();
    void BndEvt__ariralNoTaker_dragAway_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void runTrigger(class AActor* Owner, int32 Index);
    void BndEvt__ariralNoTaker_dragAway_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_ariralNoTaker(int32 EntryPoint);
}; // Size: 0x2B9

#endif
