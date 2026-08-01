#ifndef UE4SS_SDK_trigger_fakeLmaos_HPP
#define UE4SS_SDK_trigger_fakeLmaos_HPP

class Atrigger_fakeLmaos_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    int32 dishID;                                                                     // 0x0298 (size: 0x4)
    class Adish_C* dish;                                                              // 0x02A0 (size: 0x8)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void UserConstructionScript();
    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_trigger_fakeLmaos(int32 EntryPoint);
}; // Size: 0x2A8

#endif
