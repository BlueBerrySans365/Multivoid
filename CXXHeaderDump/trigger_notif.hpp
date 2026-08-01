#ifndef UE4SS_SDK_trigger_notif_HPP
#define UE4SS_SDK_trigger_notif_HPP

class Atrigger_notif_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    FText Text;                                                                       // 0x0298 (size: 0x18)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_trigger_notif(int32 EntryPoint);
}; // Size: 0x2B0

#endif
