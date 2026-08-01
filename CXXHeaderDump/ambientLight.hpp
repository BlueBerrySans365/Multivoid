#ifndef UE4SS_SDK_ambientLight_HPP
#define UE4SS_SDK_ambientLight_HPP

class AambientLight_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class URectLightComponent* topLight;                                              // 0x0298 (size: 0x8)
    class URectLightComponent* bottomLight;                                           // 0x02A0 (size: 0x8)
    FVector2D Size;                                                                   // 0x02A8 (size: 0x8)
    float Intensity;                                                                  // 0x02B0 (size: 0x4)
    bool debug_0;                                                                     // 0x02B4 (size: 0x1)
    bool Enabled;                                                                     // 0x02B5 (size: 0x1)
    float attenuationMultiply;                                                        // 0x02B8 (size: 0x4)
    float Height;                                                                     // 0x02BC (size: 0x4)
    float topLightIntensityMult;                                                      // 0x02C0 (size: 0x4)
    float topLightRadiusMult;                                                         // 0x02C4 (size: 0x4)
    bool enableTopLight;                                                              // 0x02C8 (size: 0x1)

    void updVisible();
    void gatherDataFromKeyT(bool& gather);
    void upd();
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void SetActive(bool Active);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_ambientLight(int32 EntryPoint);
}; // Size: 0x2C9

#endif
