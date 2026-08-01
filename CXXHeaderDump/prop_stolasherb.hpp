#ifndef UE4SS_SDK_prop_stolasherb_HPP
#define UE4SS_SDK_prop_stolasherb_HPP

class Aprop_stolasherb_C : public Aprop_medkit_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)
    class UParticleSystemComponent* eff_particles;                                    // 0x0380 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0388 (size: 0x8)
    TArray<FName> effs;                                                               // 0x0390 (size: 0x10)

    void used();
    void ExecuteUbergraph_prop_stolasherb(int32 EntryPoint);
}; // Size: 0x3A0

#endif
