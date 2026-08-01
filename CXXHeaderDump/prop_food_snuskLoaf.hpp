#ifndef UE4SS_SDK_prop_food_snuskLoaf_HPP
#define UE4SS_SDK_prop_food_snuskLoaf_HPP

class Aprop_food_snuskLoaf_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x03E0 (size: 0x8)
    class Ucomp_paranormal_C* comp_paranormal;                                        // 0x03E8 (size: 0x8)
    class Ucomp_radiation_C* comp_radiation;                                          // 0x03F0 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x03F8 (size: 0x8)

    void crafted();
    void eaten(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_food_snuskLoaf(int32 EntryPoint);
}; // Size: 0x400

#endif
