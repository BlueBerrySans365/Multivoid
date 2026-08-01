#ifndef UE4SS_SDK_prop_radCrystal_shard_HPP
#define UE4SS_SDK_prop_radCrystal_shard_HPP

class Aprop_radCrystal_shard_C : public Aprop_C
{
    class Ucomp_radiation_C* radComp;                                                 // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0370 (size: 0x8)
    int32 hits;                                                                       // 0x0378 (size: 0x4)
    int32 crystals;                                                                   // 0x037C (size: 0x4)

}; // Size: 0x380

#endif
