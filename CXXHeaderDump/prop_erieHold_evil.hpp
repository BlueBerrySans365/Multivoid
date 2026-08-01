#ifndef UE4SS_SDK_prop_erieHold_evil_HPP
#define UE4SS_SDK_prop_erieHold_evil_HPP

class Aprop_erieHold_evil_C : public Aprop_erieHold_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    class UParticleSystemComponent* eff_bonk;                                         // 0x0398 (size: 0x8)
    int32 bonks;                                                                      // 0x03A0 (size: 0x4)

    void playerHitWith(FHitResult Hit, class AmainPlayer_C* Player);
    void bonked();
    void ExecuteUbergraph_prop_erieHold_evil(int32 EntryPoint);
}; // Size: 0x3A4

#endif
