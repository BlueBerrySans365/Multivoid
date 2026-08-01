#ifndef UE4SS_SDK_prop_radCrystal_quartz_HPP
#define UE4SS_SDK_prop_radCrystal_quartz_HPP

class Aprop_radCrystal_quartz_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 crystals;                                                                   // 0x0370 (size: 0x4)
    int32 hits;                                                                       // 0x0374 (size: 0x4)

    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_radCrystal_quartz(int32 EntryPoint);
}; // Size: 0x378

#endif
