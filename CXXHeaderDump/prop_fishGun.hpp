#ifndef UE4SS_SDK_prop_fishGun_HPP
#define UE4SS_SDK_prop_fishGun_HPP

class Aprop_fishGun_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    bool shoot;                                                                       // 0x0378 (size: 0x1)

    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_fishGun(int32 EntryPoint);
}; // Size: 0x379

#endif
