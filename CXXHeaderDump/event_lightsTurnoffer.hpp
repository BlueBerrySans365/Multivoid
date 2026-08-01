#ifndef UE4SS_SDK_event_lightsTurnoffer_HPP
#define UE4SS_SDK_event_lightsTurnoffer_HPP

class Aevent_lightsTurnoffer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    class Alightswitch_C* lightswitch;                                                // 0x0238 (size: 0x8)
    class Adoor_C* door;                                                              // 0x0240 (size: 0x8)
    class ApasswordLock_C* passlock;                                                  // 0x0248 (size: 0x8)
    class Adoor_C* door2;                                                             // 0x0250 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x0258 (size: 0x8)

    void ReceiveBeginPlay();
    void BndEvt__lightsTurnoffer_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_event_lightsTurnoffer(int32 EntryPoint);
}; // Size: 0x260

#endif
