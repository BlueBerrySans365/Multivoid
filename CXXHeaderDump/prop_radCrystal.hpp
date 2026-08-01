#ifndef UE4SS_SDK_prop_radCrystal_HPP
#define UE4SS_SDK_prop_radCrystal_HPP

class Aprop_radCrystal_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Ucomp_radiation_C* radComp;                                                 // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)
    int32 hits;                                                                       // 0x0380 (size: 0x4)
    int32 crystals;                                                                   // 0x0384 (size: 0x4)
    FName Drop;                                                                       // 0x0388 (size: 0x8)

    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_radCrystal(int32 EntryPoint);
}; // Size: 0x390

#endif
