#ifndef UE4SS_SDK_trigger_forestMoan_HPP
#define UE4SS_SDK_trigger_forestMoan_HPP

class Atrigger_forestMoan_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class USphereComponent* Sphere_0;                                                 // 0x0298 (size: 0x8)

    void BndEvt__Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_trigger_forestMoan(int32 EntryPoint);
}; // Size: 0x2A0

#endif
