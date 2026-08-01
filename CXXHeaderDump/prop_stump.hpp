#ifndef UE4SS_SDK_prop_stump_HPP
#define UE4SS_SDK_prop_stump_HPP

class Aprop_stump_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Ucomp_paranormal_C* comp_paranormal;                                        // 0x0370 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0378 (size: 0x8)
    bool Condition;                                                                   // 0x0380 (size: 0x1)

    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void ExecuteUbergraph_prop_stump(int32 EntryPoint);
}; // Size: 0x381

#endif
