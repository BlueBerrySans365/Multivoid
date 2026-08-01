#ifndef UE4SS_SDK_trigger_delay_DUPL_1_HPP
#define UE4SS_SDK_trigger_delay_DUPL_1_HPP

class Atrigger_delay_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    float Delay;                                                                      // 0x0298 (size: 0x4)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_trigger_delay(int32 EntryPoint);
}; // Size: 0x29C

#endif
