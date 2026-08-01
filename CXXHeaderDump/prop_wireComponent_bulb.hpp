#ifndef UE4SS_SDK_prop_wireComponent_bulb_HPP
#define UE4SS_SDK_prop_wireComponent_bulb_HPP

class Aprop_wireComponent_bulb_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0378 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0380 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0388 (size: 0x8)
    int32 Color;                                                                      // 0x0390 (size: 0x4)

    void col();
    void UserConstructionScript();
    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_bulb(int32 EntryPoint);
}; // Size: 0x394

#endif
