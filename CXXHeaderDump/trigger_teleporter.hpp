#ifndef UE4SS_SDK_trigger_teleporter_HPP
#define UE4SS_SDK_trigger_teleporter_HPP

class Atrigger_teleporter_C : public Atrigger_box_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02C8 (size: 0x8)

    void BndEvt__trigger_teleporter_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_trigger_teleporter(int32 EntryPoint);
}; // Size: 0x2D0

#endif
