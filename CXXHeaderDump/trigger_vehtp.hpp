#ifndef UE4SS_SDK_trigger_vehtp_HPP
#define UE4SS_SDK_trigger_vehtp_HPP

class Atrigger_vehtp_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0298 (size: 0x8)
    class AATV_C* Vehicle;                                                            // 0x02A0 (size: 0x8)
    class AActor* tp;                                                                 // 0x02A8 (size: 0x8)
    FVector Pos;                                                                      // 0x02B0 (size: 0xC)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void UserConstructionScript();
    void runTrigger(class AActor* Owner, int32 Index);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_trigger_vehtp(int32 EntryPoint);
}; // Size: 0x2BC

#endif
