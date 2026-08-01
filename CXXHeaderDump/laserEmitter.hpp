#ifndef UE4SS_SDK_laserEmitter_HPP
#define UE4SS_SDK_laserEmitter_HPP

class AlaserEmitter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* endEffect;                                        // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    TArray<class UParticleSystemComponent*> beams;                                    // 0x0240 (size: 0x10)
    float Length;                                                                     // 0x0250 (size: 0x4)
    int32 numOfHits;                                                                  // 0x0254 (size: 0x4)
    TArray<class UPointLightComponent*> lights;                                       // 0x0258 (size: 0x10)
    TArray<class AActor*> ignores;                                                    // 0x0268 (size: 0x10)
    bool ignorePlayer;                                                                // 0x0278 (size: 0x1)
    bool restrictReflections;                                                         // 0x0279 (size: 0x1)
    float Damage;                                                                     // 0x027C (size: 0x4)
    float damageDelay;                                                                // 0x0280 (size: 0x4)
    class AActor* daamgedActor;                                                       // 0x0288 (size: 0x8)
    class UParticleSystem* laserBeam;                                                 // 0x0290 (size: 0x8)
    FLinearColor Color;                                                               // 0x0298 (size: 0x10)
    TArray<class AActor*> hitActors;                                                  // 0x02A8 (size: 0x10)
    TArray<class UParticleSystemComponent*> beamsToDestroy;                           // 0x02B8 (size: 0x10)
    bool laserUpdated;                                                                // 0x02C8 (size: 0x1)
    bool destroyLaser;                                                                // 0x02C9 (size: 0x1)

    void slerp(FVector Direction, FVector Normal, float Alpha, FVector& res);
    void resetIgnores();
    void finishLaser();
    void updateLightElement(class UPointLightComponent* InputPin, FVector InputPin2, FVector InputPin3);
    void generateEffect(TArray<FVector>& hits);
    void fireLaser();
    void UserConstructionScript();
    void damageActor(class AActor* daamgedActor);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void damaging();
    void ReceiveDestroyed();
    void ExecuteUbergraph_laserEmitter(int32 EntryPoint);
}; // Size: 0x2CA

#endif
