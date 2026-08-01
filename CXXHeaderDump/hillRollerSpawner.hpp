#ifndef UE4SS_SDK_hillRollerSpawner_HPP
#define UE4SS_SDK_hillRollerSpawner_HPP

class AhillRollerSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0230 (size: 0x8)
    class UArrowComponent* nail8;                                                     // 0x0238 (size: 0x8)
    class UArrowComponent* nail7;                                                     // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Light;                                                // 0x0248 (size: 0x8)
    class UArrowComponent* Forward;                                                   // 0x0250 (size: 0x8)
    class UStaticMeshComponent* alien;                                                // 0x0258 (size: 0x8)
    class UArrowComponent* nail5;                                                     // 0x0260 (size: 0x8)
    class UArrowComponent* nail4;                                                     // 0x0268 (size: 0x8)
    class UStaticMeshComponent* wheel3;                                               // 0x0270 (size: 0x8)
    class UStaticMeshComponent* wheel2;                                               // 0x0278 (size: 0x8)
    class UStaticMeshComponent* wheel1;                                               // 0x0280 (size: 0x8)
    class UStaticMeshComponent* wheel;                                                // 0x0288 (size: 0x8)
    class UArrowComponent* nail3;                                                     // 0x0290 (size: 0x8)
    class UArrowComponent* nail2;                                                     // 0x0298 (size: 0x8)
    class UArrowComponent* nail1;                                                     // 0x02A0 (size: 0x8)
    class UArrowComponent* nail;                                                      // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* Base;                                                 // 0x02B0 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02B8 (size: 0x8)
    bool debug;                                                                       // 0x02C0 (size: 0x1)

    void Spawn();
    void BndEvt__hillRollerSpawner_Audio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void BndEvt__hillRollerSpawner_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_hillRollerSpawner(int32 EntryPoint);
}; // Size: 0x2C1

#endif
