#ifndef UE4SS_SDK_prop_dummy_HPP
#define UE4SS_SDK_prop_dummy_HPP

class Aprop_dummy_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void fireDamage(float Damage);
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void ExecuteUbergraph_prop_dummy(int32 EntryPoint);
}; // Size: 0x370

#endif
