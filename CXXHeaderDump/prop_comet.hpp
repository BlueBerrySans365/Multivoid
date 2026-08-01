#ifndef UE4SS_SDK_prop_comet_HPP
#define UE4SS_SDK_prop_comet_HPP

class Aprop_comet_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float Force;                                                                      // 0x0370 (size: 0x4)

    void ReceiveBeginPlay();
    void BndEvt__prop_comet_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_comet(int32 EntryPoint);
}; // Size: 0x374

#endif
