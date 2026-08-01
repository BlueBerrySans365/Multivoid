#ifndef UE4SS_SDK_prop_slab_2_HPP
#define UE4SS_SDK_prop_slab_2_HPP

class Aprop_slab_2_C : public Aprop_slab_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)

    void fireDamage(float Damage);
    void ExecuteUbergraph_prop_slab_2(int32 EntryPoint);
}; // Size: 0x378

#endif
