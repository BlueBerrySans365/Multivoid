#ifndef UE4SS_SDK_trigger_TBoxActivator_HPP
#define UE4SS_SDK_trigger_TBoxActivator_HPP

class Atrigger_TBoxActivator_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class Atrigger_box_C* TriggerBox;                                                 // 0x0298 (size: 0x8)
    FName triggerBoxKey;                                                              // 0x02A0 (size: 0x8)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void UserConstructionScript();
    void runTrigger(class AActor* Owner, int32 Index);
    void intComs_gamemodeMakeKeys();
    void ExecuteUbergraph_trigger_TBoxActivator(int32 EntryPoint);
}; // Size: 0x2A8

#endif
