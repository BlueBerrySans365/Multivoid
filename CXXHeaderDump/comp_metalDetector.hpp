#ifndef UE4SS_SDK_comp_metalDetector_HPP
#define UE4SS_SDK_comp_metalDetector_HPP

class Ucomp_metalDetector_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FVector Vector;                                                                   // 0x00B8 (size: 0xC)
    class UPrimitiveComponent* vectorComponent;                                       // 0x00C8 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x00D0 (size: 0x8)
    bool Active;                                                                      // 0x00D8 (size: 0x1)
    float powr;                                                                       // 0x00DC (size: 0x4)
    float maxt;                                                                       // 0x00E0 (size: 0x4)
    class UAudioComponent* detectorBeepComponent;                                     // 0x00E8 (size: 0x8)
    class UParticleSystemComponent* LightComponent;                                   // 0x00F0 (size: 0x8)
    float Time;                                                                       // 0x00F8 (size: 0x4)
    FVector Location;                                                                 // 0x00FC (size: 0xC)
    bool setLightLoc;                                                                 // 0x0108 (size: 0x1)
    FVector hitLoc;                                                                   // 0x010C (size: 0xC)
    FVector HitNormal;                                                                // 0x0118 (size: 0xC)
    class AmainPlayer_C* Player;                                                      // 0x0128 (size: 0x8)

    FVector getHitLocation();
    FVector getLocation();
    void Init(class UPrimitiveComponent* vectorComponent, class UAudioComponent* detectorBeepComponent, class UParticleSystemComponent* LightComponent);
    void Closest(TArray<class AActor*>& Array, class AActor*& Output, bool& return);
    void getVector(FVector& Vector);
    void activateDetector(bool Active);
    void ReceiveTick(float DeltaSeconds);
    void checkRadius();
    void ReceiveBeginPlay();
    void playerActivate(bool Pressed);
    void ExecuteUbergraph_comp_metalDetector(int32 EntryPoint);
}; // Size: 0x130

#endif
