#ifndef UE4SS_SDK_prop_stickybomb_HPP
#define UE4SS_SDK_prop_stickybomb_HPP

class Aprop_stickybomb_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Aprop_funGun_stickyLauncher_C* launcher;                                    // 0x0370 (size: 0x8)

    void BndEvt__prop_stickybomb_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void Dest(class AActor* DestroyedActor);
    void explode();
    void CustomEvent(class AActor* DestroyedActor);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_prop_stickybomb(int32 EntryPoint);
}; // Size: 0x378

#endif
