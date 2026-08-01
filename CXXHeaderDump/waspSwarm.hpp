#ifndef UE4SS_SDK_waspSwarm_HPP
#define UE4SS_SDK_waspSwarm_HPP

class AwaspSwarm_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0228 (size: 0x8)
    class USphereComponent* coll;                                                     // 0x0230 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0238 (size: 0x8)
    FVector lastloc;                                                                  // 0x0240 (size: 0xC)
    float LifeSpan;                                                                   // 0x024C (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_waspSwarm(int32 EntryPoint);
}; // Size: 0x250

#endif
