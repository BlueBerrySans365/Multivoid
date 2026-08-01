#ifndef UE4SS_SDK_prop_kerfurOmega_mynet_HPP
#define UE4SS_SDK_prop_kerfurOmega_mynet_HPP

class Aprop_kerfurOmega_mynet_C : public Aprop_kerfurOmega_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    class UParticleSystemComponent* eff_mynetEmitter;                                 // 0x0398 (size: 0x8)

    void straighten();
    void UserConstructionScript();
    void BndEvt__prop_kerfurOmega_mynet_StaticMesh_K2Node_ComponentBoundEvent_0_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_kerfurOmega_mynet(int32 EntryPoint);
}; // Size: 0x3A0

#endif
