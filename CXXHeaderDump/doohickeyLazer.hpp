#ifndef UE4SS_SDK_doohickeyLazer_HPP
#define UE4SS_SDK_doohickeyLazer_HPP

class AdoohickeyLazer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0230 (size: 0x8)
    class UParticleSystemComponent* laser;                                            // 0x0238 (size: 0x8)
    int32 reflections;                                                                // 0x0240 (size: 0x4)
    class USoundBase* Audio;                                                          // 0x0248 (size: 0x8)
    class UParticleSystem* beam;                                                      // 0x0250 (size: 0x8)
    float Pitch;                                                                      // 0x0258 (size: 0x4)
    float Volume;                                                                     // 0x025C (size: 0x4)
    float Damage;                                                                     // 0x0260 (size: 0x4)

    void ReceiveBeginPlay();
    void shoot();
    void ExecuteUbergraph_doohickeyLazer(int32 EntryPoint);
}; // Size: 0x264

#endif
