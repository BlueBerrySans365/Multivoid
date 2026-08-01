#ifndef UE4SS_SDK_trigger_solarBoom_HPP
#define UE4SS_SDK_trigger_solarBoom_HPP

class Atrigger_solarBoom_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    TArray<class Atrigger_lightRoot_C*> roots;                                        // 0x0298 (size: 0x10)
    TArray<FName> roots_keys;                                                         // 0x02A8 (size: 0x10)

    void UserConstructionScript();
    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_trigger_solarBoom(int32 EntryPoint);
}; // Size: 0x2B8

#endif
