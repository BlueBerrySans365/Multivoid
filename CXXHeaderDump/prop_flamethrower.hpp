#ifndef UE4SS_SDK_prop_flamethrower_HPP
#define UE4SS_SDK_prop_flamethrower_HPP

class Aprop_flamethrower_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class UParticleSystemComponent* eff_flamethrower;                                 // 0x0378 (size: 0x8)

    void fireRay();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_flamethrower(int32 EntryPoint);
}; // Size: 0x380

#endif
