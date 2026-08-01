#ifndef UE4SS_SDK_prop_funGun_stickyLauncher_HPP
#define UE4SS_SDK_prop_funGun_stickyLauncher_HPP

class Aprop_funGun_stickyLauncher_C : public Aprop_funGun_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F0 (size: 0x8)
    TArray<class Aprop_stickybomb_C*> bombs;                                          // 0x04F8 (size: 0x10)

    void fireBulletPrimary();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_funGun_stickyLauncher(int32 EntryPoint);
}; // Size: 0x508

#endif
