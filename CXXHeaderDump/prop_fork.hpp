#ifndef UE4SS_SDK_prop_fork_HPP
#define UE4SS_SDK_prop_fork_HPP

class Aprop_fork_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0370 (size: 0x8)

    void BndEvt__prop_fork_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_prop_fork(int32 EntryPoint);
}; // Size: 0x378

#endif
