#ifndef UE4SS_SDK_puffballExplosion_HPP
#define UE4SS_SDK_puffballExplosion_HPP

class ApuffballExplosion_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* flesh;                                                     // 0x0228 (size: 0x8)
    class UAudioComponent* Far;                                                       // 0x0230 (size: 0x8)
    class UAudioComponent* Close;                                                     // 0x0238 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0240 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_puffballExplosion(int32 EntryPoint);
}; // Size: 0x248

#endif
