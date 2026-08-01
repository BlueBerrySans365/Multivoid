#ifndef UE4SS_SDK_trigger_box_HPP
#define UE4SS_SDK_trigger_box_HPP

class Atrigger_box_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0298 (size: 0x8)
    TArray<TEnumAsByte<ECollisionChannel>> colls;                                     // 0x02A0 (size: 0x10)
    bool IsActive;                                                                    // 0x02B0 (size: 0x1)
    TArray<class TSubclassOf<AActor>> Filter;                                         // 0x02B8 (size: 0x10)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void setColls();
    void UserConstructionScript();
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void runTrigger(class AActor* Owner, int32 Index);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_trigger_box(int32 EntryPoint);
}; // Size: 0x2C8

#endif
