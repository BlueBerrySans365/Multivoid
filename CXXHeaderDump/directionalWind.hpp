#ifndef UE4SS_SDK_directionalWind_HPP
#define UE4SS_SDK_directionalWind_HPP

class AdirectionalWind_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* Strength;                                                  // 0x0228 (size: 0x8)
    class UBillboardComponent* windOrigin;                                            // 0x0230 (size: 0x8)
    class UBillboardComponent* windTarget;                                            // 0x0238 (size: 0x8)
    class UBillboardComponent* windOffset;                                            // 0x0240 (size: 0x8)
    class USceneComponent* windPivots;                                                // 0x0248 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0250 (size: 0x8)
    class UParticleSystemComponent* eff_wind;                                         // 0x0258 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0260 (size: 0x8)
    class UArrowComponent* Direction;                                                 // 0x0268 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0270 (size: 0x8)
    class UChildActorComponent* windActor;                                            // 0x0278 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0280 (size: 0x8)
    class AWindDirectionalSource* windSource;                                         // 0x0288 (size: 0x8)
    TArray<class AActor*> objs;                                                       // 0x0290 (size: 0x10)
    bool tickable;                                                                    // 0x02A0 (size: 0x1)
    TArray<FVector> winds;                                                            // 0x02A8 (size: 0x10)
    FVectorSpringState spring;                                                        // 0x02B8 (size: 0x18)
    float Intensity;                                                                  // 0x02D0 (size: 0x4)
    FVector windLocation;                                                             // 0x02D4 (size: 0xC)
    float windAdd;                                                                    // 0x02E0 (size: 0x4)
    float windSpeed_rain;                                                             // 0x02E4 (size: 0x4)
    float windStrength_rain;                                                          // 0x02E8 (size: 0x4)
    float windSpeed_background;                                                       // 0x02EC (size: 0x4)
    float windStrength_background;                                                    // 0x02F0 (size: 0x4)
    float windSpeed_total;                                                            // 0x02F4 (size: 0x4)
    float windStrength_total;                                                         // 0x02F8 (size: 0x4)
    float windTexStr;                                                                 // 0x02FC (size: 0x4)
    class AmainGamemode_C* GameMode;                                                  // 0x0300 (size: 0x8)

    void setParameters(float Intensity, float Angle, float Speed, float Strength);
    void updState();
    void updateVars();
    void doWind();
    void BndEvt__directionalWind_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__directionalWind_Sphere_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void Dest(class AActor* DestroyedActor);
    void changeWindOrigin();
    void setWindLoc();
    void timer_spawnLeaves();
    void ReceiveTick(float DeltaSeconds);
    void updateDirWind();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_directionalWind(int32 EntryPoint);
}; // Size: 0x308

#endif
