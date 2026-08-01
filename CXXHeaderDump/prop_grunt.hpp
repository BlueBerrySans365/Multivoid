#ifndef UE4SS_SDK_prop_grunt_HPP
#define UE4SS_SDK_prop_grunt_HPP

class Aprop_grunt_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class USphereComponent* damageSphere;                                             // 0x0378 (size: 0x8)
    bool jumped;                                                                      // 0x0380 (size: 0x1)
    float Speed;                                                                      // 0x0384 (size: 0x4)
    float maxHealth;                                                                  // 0x0388 (size: 0x4)
    float health;                                                                     // 0x038C (size: 0x4)
    float accDamage;                                                                  // 0x0390 (size: 0x4)
    bool crit;                                                                        // 0x0394 (size: 0x1)
    class Uui_madnessCombat_C* killcount;                                             // 0x0398 (size: 0x8)
    float Damage;                                                                     // 0x03A0 (size: 0x4)

    void setDmg();
    void assignGib(class UObject* self2);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__prop_grunt_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void resumeJump();
    void BndEvt__prop_grunt_damageSphere_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void CustomEvent();
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void fireDamage(float Damage);
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_grunt(int32 EntryPoint);
}; // Size: 0x3A4

#endif
