#ifndef UE4SS_SDK_arirShipVanishing_HPP
#define UE4SS_SDK_arirShipVanishing_HPP

class AarirShipVanishing_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class USphereComponent* vanishradius;                                             // 0x0250 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0258 (size: 0x8)
    float vanishTimeline_a_2FBA7CDF4B716616E92306AF422DE5AE;                          // 0x0260 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> vanishTimeline__Direction_2FBA7CDF4B716616E92306AF422DE5AE; // 0x0264 (size: 0x1)
    class UTimelineComponent* vanishTimeline;                                         // 0x0268 (size: 0x8)

    void checkVanish();
    void vanishTimeline__FinishedFunc();
    void vanishTimeline__UpdateFunc();
    void vanish(bool Condition);
    void BndEvt__arirShipVanishing_vanishradius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__arirShipVanishing_vanishradius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_arirShipVanishing(int32 EntryPoint);
}; // Size: 0x270

#endif
