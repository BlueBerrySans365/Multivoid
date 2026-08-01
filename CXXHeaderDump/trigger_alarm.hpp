#ifndef UE4SS_SDK_trigger_alarm_HPP
#define UE4SS_SDK_trigger_alarm_HPP

class Atrigger_alarm_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UAudioComponent* audio1;                                                    // 0x0298 (size: 0x8)
    bool Active;                                                                      // 0x02A0 (size: 0x1)
    TArray<class AalarmLamp_C*> alarms;                                               // 0x02A8 (size: 0x10)

    void processKeys(bool& return);
    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_trigger_alarm(int32 EntryPoint);
}; // Size: 0x2B8

#endif
