#ifndef UE4SS_SDK_bloodCLot_HPP
#define UE4SS_SDK_bloodCLot_HPP

class AbloodClot_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USphereComponent* suckRadius;                                               // 0x0370 (size: 0x8)
    class UParticleSystemComponent* eff_drain;                                        // 0x0378 (size: 0x8)
    class UParticleSystemComponent* eff_clot;                                         // 0x0380 (size: 0x8)
    bool sucking;                                                                     // 0x0388 (size: 0x1)
    FVector Force;                                                                    // 0x038C (size: 0xC)

    void suck(bool doSuck);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__bloodClot_suckRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__bloodClot_suckRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void timerSuck();
    void ExecuteUbergraph_bloodClot(int32 EntryPoint);
}; // Size: 0x398

#endif
