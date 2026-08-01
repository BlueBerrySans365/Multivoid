#ifndef UE4SS_SDK_prop_grenade_HPP
#define UE4SS_SDK_prop_grenade_HPP

class Aprop_grenade_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float Timer;                                                                      // 0x0370 (size: 0x4)
    float Force;                                                                      // 0x0374 (size: 0x4)
    float Damage;                                                                     // 0x0378 (size: 0x4)

    void explode(class Aexplosion_C* explosion);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void fuse();
    void ExecuteUbergraph_prop_grenade(int32 EntryPoint);
}; // Size: 0x37C

#endif
