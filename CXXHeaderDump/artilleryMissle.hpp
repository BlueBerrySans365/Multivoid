#ifndef UE4SS_SDK_artilleryMissle_HPP
#define UE4SS_SDK_artilleryMissle_HPP

class AartilleryMissle_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* eff_rocket;                                       // 0x0228 (size: 0x8)
    class UParticleSystemComponent* eff_trail;                                        // 0x0230 (size: 0x8)
    class UStaticMeshComponent* rocketMesh;                                           // 0x0238 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0240 (size: 0x8)
    class UAudioComponent* audio_incoming;                                            // 0x0248 (size: 0x8)
    class UAudioComponent* artilleryLaunch;                                           // 0x0250 (size: 0x8)
    class UBillboardComponent* moveUp;                                                // 0x0258 (size: 0x8)
    class UBillboardComponent* moveLand;                                              // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    float A;                                                                          // 0x0270 (size: 0x4)
    float Speed;                                                                      // 0x0274 (size: 0x4)
    float Distance;                                                                   // 0x0278 (size: 0x4)
    float Height;                                                                     // 0x027C (size: 0x4)
    FVector lastloc;                                                                  // 0x0280 (size: 0xC)
    bool incoming;                                                                    // 0x028C (size: 0x1)
    class AActor* Target;                                                             // 0x0290 (size: 0x8)
    FVector Offset;                                                                   // 0x0298 (size: 0xC)
    FVector Local;                                                                    // 0x02A4 (size: 0xC)
    FVector Hit;                                                                      // 0x02B0 (size: 0xC)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_artilleryMissle(int32 EntryPoint);
}; // Size: 0x2BC

#endif
