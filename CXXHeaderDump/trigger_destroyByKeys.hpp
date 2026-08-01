#ifndef UE4SS_SDK_trigger_destroyByKeys_HPP
#define UE4SS_SDK_trigger_destroyByKeys_HPP

class Atrigger_destroyByKeys_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    TArray<FName> objectKeys;                                                         // 0x0298 (size: 0x10)

    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_trigger_destroyByKeys(int32 EntryPoint);
}; // Size: 0x2A8

#endif
