#ifndef UE4SS_SDK_prop_bloodGib_HPP
#define UE4SS_SDK_prop_bloodGib_HPP

class Aprop_bloodGib_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)

    void BndEvt__prop_bloodGib_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void slice(bool clean);
    void broken();
    void ExecuteUbergraph_prop_bloodGib(int32 EntryPoint);
}; // Size: 0x3E0

#endif
