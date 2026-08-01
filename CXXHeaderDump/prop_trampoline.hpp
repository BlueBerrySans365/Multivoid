#ifndef UE4SS_SDK_prop_trampoline_HPP
#define UE4SS_SDK_prop_trampoline_HPP

class Aprop_trampoline_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UStaticMeshComponent* bounceCollision;                                      // 0x0370 (size: 0x8)
    class UAudioComponent* bounce;                                                    // 0x0378 (size: 0x8)

    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    FVector Jump(FVector InVec, float B);
    void ReceiveBeginPlay();
    void BndEvt__prop_trampoline_bounceCollision_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_prop_trampoline(int32 EntryPoint);
}; // Size: 0x380

#endif
