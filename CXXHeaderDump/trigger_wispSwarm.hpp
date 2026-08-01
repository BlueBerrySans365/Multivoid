#ifndef UE4SS_SDK_trigger_wispSwarm_HPP
#define UE4SS_SDK_trigger_wispSwarm_HPP

class Atrigger_wispSwarm_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)

    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_trigger_wispSwarm(int32 EntryPoint);
}; // Size: 0x298

#endif
