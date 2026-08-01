#ifndef UE4SS_SDK_prop_sponge_p_HPP
#define UE4SS_SDK_prop_sponge_p_HPP

class Aprop_sponge_p_C : public Aprop_sponge_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03C8 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_prop_sponge_p(int32 EntryPoint);
}; // Size: 0x3D0

#endif
