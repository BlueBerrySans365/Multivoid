#ifndef UE4SS_SDK_event_bottomHoleController_HPP
#define UE4SS_SDK_event_bottomHoleController_HPP

class Aevent_bottomHoleController_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0250 (size: 0x8)
    class AholeBottom_C* room;                                                        // 0x0258 (size: 0x8)
    class AholeDevice_C* device;                                                      // 0x0260 (size: 0x8)
    class AkavotiaPatrolController_C* kavotiaPatrol;                                  // 0x0268 (size: 0x8)
    TArray<class Aprop_rozitalBeacon_C*> beacons;                                     // 0x0270 (size: 0x10)

    void BndEvt__event_bottomHoleController_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveDestroyed();
    void ExecuteUbergraph_event_bottomHoleController(int32 EntryPoint);
}; // Size: 0x280

#endif
