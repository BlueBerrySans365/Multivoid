#ifndef UE4SS_SDK_prop_flareGren_HPP
#define UE4SS_SDK_prop_flareGren_HPP

class Aprop_flareGren_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void BndEvt__prop_flareGren_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ExecuteUbergraph_prop_flareGren(int32 EntryPoint);
}; // Size: 0x370

#endif
