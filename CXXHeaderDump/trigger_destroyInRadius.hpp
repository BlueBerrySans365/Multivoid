#ifndef UE4SS_SDK_trigger_destroyInRadius_HPP
#define UE4SS_SDK_trigger_destroyInRadius_HPP

class Atrigger_destroyInRadius_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USphereComponent* Sphere_0;                                                 // 0x0298 (size: 0x8)
    TArray<class TSubclassOf<AActor>> Filter;                                         // 0x02A0 (size: 0x10)
    float Radius;                                                                     // 0x02B0 (size: 0x4)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x02B8 (size: 0x10)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void UserConstructionScript();
    void runTrigger(class AActor* Owner, int32 Index);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_trigger_destroyInRadius(int32 EntryPoint);
}; // Size: 0x2C8

#endif
