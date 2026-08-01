#ifndef UE4SS_SDK_prop_landmine_HPP
#define UE4SS_SDK_prop_landmine_HPP

class Aprop_landmine_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x0370 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0378 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0380 (size: 0x8)
    bool Active;                                                                      // 0x0388 (size: 0x1)

    void canPickup(bool& return);
    void Init();
    void BndEvt__prop_landmine_Cylinder_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_landmine_Cylinder_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_landmine(int32 EntryPoint);
}; // Size: 0x389

#endif
