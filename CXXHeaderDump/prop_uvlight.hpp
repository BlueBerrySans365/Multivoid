#ifndef UE4SS_SDK_prop_uvlight_HPP
#define UE4SS_SDK_prop_uvlight_HPP

class Aprop_uvlight_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UChildActorComponent* uvlight;                                              // 0x03B0 (size: 0x8)
    class USphereComponent* Radius;                                                   // 0x03B8 (size: 0x8)
    bool powered;                                                                     // 0x03C0 (size: 0x1)
    TArray<class AgrowingPlant_C*> plantsInRadius;                                    // 0x03C8 (size: 0x10)
    float DeltaSeconds;                                                               // 0x03D8 (size: 0x4)

    void upd();
    void UserConstructionScript();
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ReceiveBeginPlay();
    void BndEvt__prop_uvlight_radius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_uvlight_radius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_uvlight(int32 EntryPoint);
}; // Size: 0x3DC

#endif
