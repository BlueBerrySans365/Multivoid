#ifndef UE4SS_SDK_firetankDeploy_HPP
#define UE4SS_SDK_firetankDeploy_HPP

class AfiretankDeploy_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0228 (size: 0x8)
    class UParticleSystemComponent* eff_thruster4;                                    // 0x0230 (size: 0x8)
    class UParticleSystemComponent* eff_thruster3;                                    // 0x0238 (size: 0x8)
    class UParticleSystemComponent* eff_thruster2;                                    // 0x0240 (size: 0x8)
    class UParticleSystemComponent* eff_thruster1;                                    // 0x0248 (size: 0x8)
    class UParticleSystemComponent* eff_smoke;                                        // 0x0250 (size: 0x8)
    class UAudioComponent* Audio_ambience;                                            // 0x0258 (size: 0x8)
    class UAudioComponent* audio_deploying;                                           // 0x0260 (size: 0x8)
    class UParticleSystemComponent* Light;                                            // 0x0268 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0270 (size: 0x8)
    class UStaticMeshComponent* firetankBox;                                          // 0x0278 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)
    float Alpha;                                                                      // 0x0290 (size: 0x4)
    FVector locStart;                                                                 // 0x0294 (size: 0xC)
    float Speed;                                                                      // 0x02A0 (size: 0x4)

    void spawnParts();
    void ReceiveTick(float DeltaSeconds);
    void actorHit(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void BndEvt__firetankDeploy_firetankBox_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveDestroyed();
    void ExecuteUbergraph_firetankDeploy(int32 EntryPoint);
}; // Size: 0x2A4

#endif
