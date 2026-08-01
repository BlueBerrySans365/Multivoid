#ifndef UE4SS_SDK_ufo_boofo_HPP
#define UE4SS_SDK_ufo_boofo_HPP

class Aufo_boofo_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UChildActorComponent* radar;                                                // 0x0228 (size: 0x8)
    class UStaticMeshComponent* UFO;                                                  // 0x0230 (size: 0x8)
    class UBillboardComponent* ufoAnchor;                                             // 0x0238 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0240 (size: 0x8)
    class UParticleSystemComponent* eff_R;                                            // 0x0248 (size: 0x8)
    class UParticleSystemComponent* eff_L;                                            // 0x0250 (size: 0x8)
    class USplineComponent* flySpline;                                                // 0x0258 (size: 0x8)
    class USplineComponent* travelSpline;                                             // 0x0260 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0268 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0270 (size: 0x8)
    bool debug;                                                                       // 0x0278 (size: 0x1)
    int32 splinePoints;                                                               // 0x027C (size: 0x4)
    float Alpha;                                                                      // 0x0280 (size: 0x4)
    float Length;                                                                     // 0x0284 (size: 0x4)
    float Speed;                                                                      // 0x0288 (size: 0x4)
    float Radius;                                                                     // 0x028C (size: 0x4)
    FVector2D squish;                                                                 // 0x0290 (size: 0x8)
    bool shockwave;                                                                   // 0x0298 (size: 0x1)
    float begin;                                                                      // 0x029C (size: 0x4)
    bool getPoints;                                                                   // 0x02A0 (size: 0x1)
    TArray<FVector> Points;                                                           // 0x02A8 (size: 0x10)
    bool setPoints;                                                                   // 0x02B8 (size: 0x1)
    bool dir;                                                                         // 0x02B9 (size: 0x1)

    float ufoToPlayerDir(bool Start);
    void gen();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ufo_boofo(int32 EntryPoint);
}; // Size: 0x2BA

#endif
