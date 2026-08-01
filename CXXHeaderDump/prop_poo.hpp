#ifndef UE4SS_SDK_prop_poo_HPP
#define UE4SS_SDK_prop_poo_HPP

class Aprop_poo_C : public Aprop_sponge_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03D0 (size: 0x8)
    class UAudioComponent* fliesSlow_Cue;                                             // 0x03D8 (size: 0x8)
    class UParticleSystemComponent* eff_spoiled;                                      // 0x03E0 (size: 0x8)

    void BndEvt__prop_poo_physicsImpact_K2Node_ComponentBoundEvent_1_hitEvent__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_poo(int32 EntryPoint);
}; // Size: 0x3E8

#endif
