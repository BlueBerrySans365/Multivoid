#ifndef UE4SS_SDK_prop_wireComponent_tpBeam_HPP
#define UE4SS_SDK_prop_wireComponent_tpBeam_HPP

class Aprop_wireComponent_tpBeam_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UPointLightComponent* Light;                                                // 0x0378 (size: 0x8)
    class UParticleSystemComponent* eff_beam;                                         // 0x0380 (size: 0x8)
    float tpAnim_a_8148159643412D4569D3C2A7D6E895E7;                                  // 0x0388 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> tpAnim__Direction_8148159643412D4569D3C2A7D6E895E7; // 0x038C (size: 0x1)
    class UTimelineComponent* tpAnim;                                                 // 0x0390 (size: 0x8)
    class Aprop_wireComponent_tpBeam_C* tpTo;                                         // 0x0398 (size: 0x8)
    bool isOn;                                                                        // 0x03A0 (size: 0x1)
    class UParticleSystem* effectOn;                                                  // 0x03A8 (size: 0x8)
    class UParticleSystem* effectOff;                                                 // 0x03B0 (size: 0x8)
    float Len;                                                                        // 0x03B8 (size: 0x4)
    float rad;                                                                        // 0x03BC (size: 0x4)
    bool Transform;                                                                   // 0x03C0 (size: 0x1)

    void tp();
    void tpAnim__FinishedFunc();
    void tpAnim__UpdateFunc();
    void wirePass(class Awire_C* wire);
    void telported();
    void ExecuteUbergraph_prop_wireComponent_tpBeam(int32 EntryPoint);
}; // Size: 0x3C1

#endif
