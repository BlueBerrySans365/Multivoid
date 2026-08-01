#ifndef UE4SS_SDK_prop_partydemon_HPP
#define UE4SS_SDK_prop_partydemon_HPP

class Aprop_partydemon_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void ExecuteUbergraph_prop_partydemon(int32 EntryPoint);
}; // Size: 0x370

#endif
