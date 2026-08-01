#ifndef UE4SS_SDK_prop_motionLight_HPP
#define UE4SS_SDK_prop_motionLight_HPP

class Aprop_motionLight_C : public Aprop_wallAttachable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UParticleSystemComponent* eff_light;                                        // 0x03E0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03E8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x03F0 (size: 0x8)
    bool checkVis;                                                                    // 0x03F8 (size: 0x1)
    bool power;                                                                       // 0x03F9 (size: 0x1)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKeyT(bool& gather);
    void Overlap();
    void ReceiveBeginPlay();
    void testOverlap();
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ExecuteUbergraph_prop_motionLight(int32 EntryPoint);
}; // Size: 0x3FA

#endif
