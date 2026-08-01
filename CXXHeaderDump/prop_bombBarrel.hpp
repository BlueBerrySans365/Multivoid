#ifndef UE4SS_SDK_prop_bombBarrel_HPP
#define UE4SS_SDK_prop_bombBarrel_HPP

class Aprop_bombBarrel_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    FVector impact;                                                                   // 0x0370 (size: 0xC)

    void broken();
    void broken_fire();
    void BndEvt__prop_bombBarrel_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void fireDamage(float Damage);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void ExecuteUbergraph_prop_bombBarrel(int32 EntryPoint);
}; // Size: 0x37C

#endif
