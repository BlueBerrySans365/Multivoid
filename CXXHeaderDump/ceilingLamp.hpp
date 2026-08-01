#ifndef UE4SS_SDK_ceilingLamp_HPP
#define UE4SS_SDK_ceilingLamp_HPP

class AceilingLamp_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UParticleSystemComponent* eff_flare;                                        // 0x0298 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x02A0 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02A8 (size: 0x8)
    class UBillboardComponent* Center;                                                // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x02B8 (size: 0x8)
    bool IsActive;                                                                    // 0x02C0 (size: 0x1)
    float power;                                                                      // 0x02C4 (size: 0x4)
    bool hasPower;                                                                    // 0x02C8 (size: 0x1)
    float Radius;                                                                     // 0x02CC (size: 0x4)
    float Strength;                                                                   // 0x02D0 (size: 0x4)
    float strengthMult;                                                               // 0x02D4 (size: 0x4)
    bool isBlinking;                                                                  // 0x02D8 (size: 0x1)
    class Atrigger_lightRoot_C* belongsToRoot;                                        // 0x02E0 (size: 0x8)

    void gatherDataFromKeyT(bool& gather);
    void upd();
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void SetActive(bool IsActive);
    void solar();
    void setVis();
    void Deactivate(bool hasPower);
    void toggle();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void powerChanged(bool active_calc, bool active_downl, bool active_coords, bool active_play, bool active_light);
    void off();
    void blink(float Weight);
    void ReceiveDestroyed();
    void intComs_gamemodeBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_ceilingLamp(int32 EntryPoint);
}; // Size: 0x2E8

#endif
