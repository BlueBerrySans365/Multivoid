#ifndef UE4SS_SDK_trigger_forceObject_HPP
#define UE4SS_SDK_trigger_forceObject_HPP

class Atrigger_forceObject_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    FName forceObject;                                                                // 0x0298 (size: 0x8)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_trigger_forceObject(int32 EntryPoint);
}; // Size: 0x2A0

#endif
