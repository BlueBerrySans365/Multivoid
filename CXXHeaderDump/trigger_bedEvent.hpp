#ifndef UE4SS_SDK_trigger_bedEvent_HPP
#define UE4SS_SDK_trigger_bedEvent_HPP

class Atrigger_bedEvent_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)

    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_trigger_bedEvent(int32 EntryPoint);
}; // Size: 0x298

#endif
