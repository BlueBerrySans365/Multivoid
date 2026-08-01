#ifndef UE4SS_SDK_prop_pipebomb_sticky_HPP
#define UE4SS_SDK_prop_pipebomb_sticky_HPP

class Aprop_pipebomb_sticky_C : public Aprop_pipebomb_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)

    void Activate();
    void BndEvt__prop_pipebomb_sticky_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_prop_pipebomb_sticky(int32 EntryPoint);
}; // Size: 0x390

#endif
