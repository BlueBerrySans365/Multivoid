#ifndef UE4SS_SDK_prop_goose_HPP
#define UE4SS_SDK_prop_goose_HPP

class Aprop_goose_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void broken();
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void fireDamage(float Damage);
    void ExecuteUbergraph_prop_goose(int32 EntryPoint);
}; // Size: 0x370

#endif
