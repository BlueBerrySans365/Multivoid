#ifndef UE4SS_SDK_prop_rock_HPP
#define UE4SS_SDK_prop_rock_HPP

class Aprop_rock_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 ignites;                                                                    // 0x0370 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void fireDamage(float Damage);
    void ExecuteUbergraph_prop_rock(int32 EntryPoint);
}; // Size: 0x374

#endif
