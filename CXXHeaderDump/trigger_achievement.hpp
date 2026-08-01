#ifndef UE4SS_SDK_trigger_achievement_HPP
#define UE4SS_SDK_trigger_achievement_HPP

class Atrigger_achievement_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    FName achiv;                                                                      // 0x0298 (size: 0x8)

    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_trigger_achievement(int32 EntryPoint);
}; // Size: 0x2A0

#endif
