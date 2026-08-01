#ifndef UE4SS_SDK_prop_asologoPiece_HPP
#define UE4SS_SDK_prop_asologoPiece_HPP

class Aprop_asologoPiece_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* audio_strain;                                              // 0x0370 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint4;                            // 0x0378 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint3;                            // 0x0380 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint2;                            // 0x0388 (size: 0x8)
    class UAudioComponent* audio_object;                                              // 0x0390 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint1;                            // 0x0398 (size: 0x8)
    class UAudioComponent* audio_offTheWall;                                          // 0x03A0 (size: 0x8)
    class UParticleSystemComponent* eff_break;                                        // 0x03A8 (size: 0x8)
    float health;                                                                     // 0x03B0 (size: 0x4)
    bool hasHit;                                                                      // 0x03B4 (size: 0x1)
    TArray<class UPhysicsConstraintComponent*> phArray;                               // 0x03B8 (size: 0x10)
    class UPhysicsConstraintComponent* toBreak;                                       // 0x03C8 (size: 0x8)
    bool customConstraints;                                                           // 0x03D0 (size: 0x1)

    void setPhysPos();
    void doDamage(float Sub);
    void break();
    void Init();
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void createHit();
    void assignHit(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void destroyHit();
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void breakingSequence();
    void ExecuteUbergraph_prop_asologoPiece(int32 EntryPoint);
}; // Size: 0x3D1

#endif
