#ifndef UE4SS_SDK_alienJump_HPP
#define UE4SS_SDK_alienJump_HPP

class AalienJump_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* nail18;                                                    // 0x0228 (size: 0x8)
    class UArrowComponent* nail22;                                                    // 0x0230 (size: 0x8)
    class UArrowComponent* nail16;                                                    // 0x0238 (size: 0x8)
    class UArrowComponent* nail23;                                                    // 0x0240 (size: 0x8)
    class UArrowComponent* nail15;                                                    // 0x0248 (size: 0x8)
    class UArrowComponent* nail17;                                                    // 0x0250 (size: 0x8)
    class UArrowComponent* nail19;                                                    // 0x0258 (size: 0x8)
    class UStaticMeshComponent* base10;                                               // 0x0260 (size: 0x8)
    class UArrowComponent* nail20;                                                    // 0x0268 (size: 0x8)
    class UStaticMeshComponent* base9;                                                // 0x0270 (size: 0x8)
    class UStaticMeshComponent* base12;                                               // 0x0278 (size: 0x8)
    class UStaticMeshComponent* base11;                                               // 0x0280 (size: 0x8)
    class UArrowComponent* nail21;                                                    // 0x0288 (size: 0x8)
    class UArrowComponent* nail14;                                                    // 0x0290 (size: 0x8)
    class UArrowComponent* nail13;                                                    // 0x0298 (size: 0x8)
    class UArrowComponent* nail12;                                                    // 0x02A0 (size: 0x8)
    class UArrowComponent* nail9;                                                     // 0x02A8 (size: 0x8)
    class UArrowComponent* nail8;                                                     // 0x02B0 (size: 0x8)
    class UArrowComponent* nail6;                                                     // 0x02B8 (size: 0x8)
    class UArrowComponent* nail4;                                                     // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* base4;                                                // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* base8;                                                // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* base7;                                                // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* base6;                                                // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* base5;                                                // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* base2;                                                // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* alien;                                                // 0x02F8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0300 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0308 (size: 0x8)
    class UArrowComponent* Forward;                                                   // 0x0310 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0318 (size: 0x8)
    bool CanJump;                                                                     // 0x0320 (size: 0x1)
    bool debug;                                                                       // 0x0321 (size: 0x1)

    void Spawn();
    void BndEvt__hillRollerSpawner_Box_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void throw();
    void ExecuteUbergraph_alienJump(int32 EntryPoint);
}; // Size: 0x322

#endif
