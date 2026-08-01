#ifndef UE4SS_SDK_explosion_underwater_HPP
#define UE4SS_SDK_explosion_underwater_HPP

class Aexplosion_underwater_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* audio_explosion;                                           // 0x0228 (size: 0x8)
    class UAudioComponent* audio_explosionFar;                                        // 0x0230 (size: 0x8)
    class UAudioComponent* audio_surfaceSplash;                                       // 0x0238 (size: 0x8)
    class UParticleSystemComponent* eff_splash;                                       // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    class AwaterVolume_C* affectedWaterVolume;                                        // 0x0250 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_explosion_underwater(int32 EntryPoint);
}; // Size: 0x258

#endif
