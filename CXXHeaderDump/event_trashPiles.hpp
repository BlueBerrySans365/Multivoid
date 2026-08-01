#ifndef UE4SS_SDK_event_trashPiles_HPP
#define UE4SS_SDK_event_trashPiles_HPP

class Aevent_trashPiles_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0250 (size: 0x8)

    void BndEvt__event_funnyGascans_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_event_trashPiles(int32 EntryPoint);
}; // Size: 0x258

#endif
