#ifndef UE4SS_SDK_trigger_lightRoot_HPP
#define UE4SS_SDK_trigger_lightRoot_HPP

class Atrigger_lightRoot_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    TArray<class AceilingLamp_C*> lights;                                             // 0x0298 (size: 0x10)
    TArray<class AambientLight_C*> ambs;                                              // 0x02A8 (size: 0x10)
    bool IsActive;                                                                    // 0x02B8 (size: 0x1)
    bool Active;                                                                      // 0x02B9 (size: 0x1)
    TArray<FName> lights_keys;                                                        // 0x02C0 (size: 0x10)
    TArray<FName> ambs_keys;                                                          // 0x02D0 (size: 0x10)
    bool buffIsActive;                                                                // 0x02E0 (size: 0x1)

    void setLightRoots();
    void processKeys(bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void SetActive(bool Active);
    void updLig();
    void UserConstructionScript();
    void runTrigger(class AActor* Owner, int32 Index);
    void loadAft();
    void flick();
    void ReceiveBeginPlay();
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_trigger_lightRoot(int32 EntryPoint);
}; // Size: 0x2E1

#endif
