#ifndef UE4SS_SDK_prop_funGun_rpg_HPP
#define UE4SS_SDK_prop_funGun_rpg_HPP

class Aprop_funGun_rpg_C : public Aprop_funGun_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    class UParticleSystemComponent* eff_aimLight;                                     // 0x04F8 (size: 0x8)
    bool isAim;                                                                       // 0x0500 (size: 0x1)

    bool look(FHitResult& OutHit);
    void fireBulletPrimary();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_funGun_rpg(int32 EntryPoint);
}; // Size: 0x501

#endif
