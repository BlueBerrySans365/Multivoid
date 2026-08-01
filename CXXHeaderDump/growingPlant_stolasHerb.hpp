#ifndef UE4SS_SDK_growingPlant_stolasHerb_HPP
#define UE4SS_SDK_growingPlant_stolasHerb_HPP

class AgrowingPlant_stolasHerb_C : public AgrowingPlant_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0378 (size: 0x8)
    class UParticleSystemComponent* eff_particles;                                    // 0x0380 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0388 (size: 0x8)
    bool noLightning;                                                                 // 0x0390 (size: 0x1)

    void grown();
    void ExecuteUbergraph_growingPlant_stolasHerb(int32 EntryPoint);
}; // Size: 0x391

#endif
