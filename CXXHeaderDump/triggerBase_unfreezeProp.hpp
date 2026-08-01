#ifndef UE4SS_SDK_triggerBase_unfreezeProp_HPP
#define UE4SS_SDK_triggerBase_unfreezeProp_HPP

class AtriggerBase_unfreezeProp_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)

    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_triggerBase_unfreezeProp(int32 EntryPoint);
}; // Size: 0x298

#endif
