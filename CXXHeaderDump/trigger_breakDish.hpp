#ifndef UE4SS_SDK_trigger_breakDish_HPP
#define UE4SS_SDK_trigger_breakDish_HPP

class Atrigger_breakDish_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    int32 Index;                                                                      // 0x0298 (size: 0x4)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_trigger_breakDish(int32 EntryPoint);
}; // Size: 0x29C

#endif
