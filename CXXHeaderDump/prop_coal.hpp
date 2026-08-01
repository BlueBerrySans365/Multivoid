#ifndef UE4SS_SDK_prop_coal_HPP
#define UE4SS_SDK_prop_coal_HPP

class Aprop_coal_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void fireDamage(float Damage);
    void ignite(float fuel);
    void ExecuteUbergraph_prop_coal(int32 EntryPoint);
}; // Size: 0x370

#endif
