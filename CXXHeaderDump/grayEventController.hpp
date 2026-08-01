#ifndef UE4SS_SDK_grayEventController_HPP
#define UE4SS_SDK_grayEventController_HPP

class AgrayEventController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* TriggerBox;                                                  // 0x0228 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0230 (size: 0x8)
    class UStaticMeshComponent* spawn2;                                               // 0x0238 (size: 0x8)
    class UStaticMeshComponent* spawn1;                                               // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    TArray<class AgrayTest_C*> grays;                                                 // 0x0250 (size: 0x10)
    class Agenerator_C* transformer;                                                  // 0x0260 (size: 0x8)
    bool IsActive;                                                                    // 0x0268 (size: 0x1)

    void Spawn();
    void despawn();
    void ReceiveDestroyed();
    void begin();
    void BndEvt__grayEventController_triggerbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void turnedOn();
    void deac();
    void ExecuteUbergraph_grayEventController(int32 EntryPoint);
}; // Size: 0x269

#endif
