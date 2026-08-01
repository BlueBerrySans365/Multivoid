#ifndef UE4SS_SDK_flamethrower_HPP
#define UE4SS_SDK_flamethrower_HPP

class Aflamethrower_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* fire;                                                      // 0x0228 (size: 0x8)
    class UParticleSystemComponent* eff_flamethrower;                                 // 0x0230 (size: 0x8)
    class UAudioComponent* loop;                                                      // 0x0238 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0240 (size: 0x8)
    TArray<class AActor*> ignores;                                                    // 0x0248 (size: 0x10)
    bool IsActive;                                                                    // 0x0258 (size: 0x1)
    float Time;                                                                       // 0x025C (size: 0x4)
    float Spread;                                                                     // 0x0260 (size: 0x4)
    float Distance;                                                                   // 0x0264 (size: 0x4)
    TArray<class AActor*> IgnoreActors;                                               // 0x0268 (size: 0x10)

    void Activate(bool bNewActive);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_flamethrower(int32 EntryPoint);
}; // Size: 0x278

#endif
