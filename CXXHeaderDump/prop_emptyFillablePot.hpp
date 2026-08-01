#ifndef UE4SS_SDK_prop_emptyFillablePot_HPP
#define UE4SS_SDK_prop_emptyFillablePot_HPP

class Aprop_emptyFillablePot_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* dirtCollide;                                              // 0x0370 (size: 0x8)
    class UStaticMeshComponent* dirt;                                                 // 0x0378 (size: 0x8)
    uint8 dirtLevel;                                                                  // 0x0380 (size: 0x1)
    FName replacePotWith;                                                             // 0x0384 (size: 0x8)
    uint8 addDirt;                                                                    // 0x038C (size: 0x1)

    void dropDirt();
    void updateDirt();
    void UserConstructionScript();
    void BndEvt__prop_emptyFillablePot_dirtCollide_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void broken();
    void broken_fire();
    void ExecuteUbergraph_prop_emptyFillablePot(int32 EntryPoint);
}; // Size: 0x38D

#endif
