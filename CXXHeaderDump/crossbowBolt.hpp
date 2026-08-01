#ifndef UE4SS_SDK_crossbowBolt_HPP
#define UE4SS_SDK_crossbowBolt_HPP

class AcrossbowBolt_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0228 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0230 (size: 0x8)
    class UParticleSystemComponent* eff_glowCrossbowBolt;                             // 0x0238 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0240 (size: 0x8)
    class UStaticMeshComponent* bolt;                                                 // 0x0248 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0250 (size: 0x8)
    float viewcam_TL_a_9BD8D97D4CCFD8BA695FF1AAC4B5D6C9;                              // 0x0258 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> viewcam_TL__Direction_9BD8D97D4CCFD8BA695FF1AAC4B5D6C9; // 0x025C (size: 0x1)
    class UTimelineComponent* viewcam_TL;                                             // 0x0260 (size: 0x8)
    FVector lastloc;                                                                  // 0x0268 (size: 0xC)
    FVector Velocity;                                                                 // 0x0274 (size: 0xC)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0280 (size: 0x10)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0290 (size: 0x8)
    float Temp;                                                                       // 0x0298 (size: 0x4)
    bool notick;                                                                      // 0x029C (size: 0x1)
    bool Hit;                                                                         // 0x029D (size: 0x1)
    bool viewCam;                                                                     // 0x029E (size: 0x1)
    class AActor* HitActor;                                                           // 0x02A0 (size: 0x8)

    void removeViewer();
    void boltHit(FHitResult Hit);
    void viewcam_TL__FinishedFunc();
    void viewcam_TL__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void resetLoc();
    void Dest(class AActor* DestroyedActor);
    void ReceiveDestroyed();
    void reverseTime();
    void ExecuteUbergraph_crossbowBolt(int32 EntryPoint);
}; // Size: 0x2A8

#endif
