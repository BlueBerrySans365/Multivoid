#ifndef UE4SS_SDK_prop_lifeCrystal_HPP
#define UE4SS_SDK_prop_lifeCrystal_HPP

class Aprop_lifeCrystal_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* voic;                                                      // 0x0370 (size: 0x8)
    class UParticleSystemComponent* effAtt;                                           // 0x0378 (size: 0x8)
    class UParticleSystemComponent* eff5;                                             // 0x0380 (size: 0x8)
    class UParticleSystemComponent* eff4;                                             // 0x0388 (size: 0x8)
    class UParticleSystemComponent* eff3;                                             // 0x0390 (size: 0x8)
    class UParticleSystemComponent* eff2;                                             // 0x0398 (size: 0x8)
    class UParticleSystemComponent* eff1;                                             // 0x03A0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x03A8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x03B0 (size: 0x8)

    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void ExecuteUbergraph_prop_lifeCrystal(int32 EntryPoint);
}; // Size: 0x3B8

#endif
