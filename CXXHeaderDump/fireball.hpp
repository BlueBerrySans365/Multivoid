#ifndef UE4SS_SDK_fireball_HPP
#define UE4SS_SDK_fireball_HPP

class Afireball_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0228 (size: 0x8)
    class UAudioComponent* audio1;                                                    // 0x0230 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0238 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0240 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0248 (size: 0x8)
    class UParticleSystemComponent* eff_fireball;                                     // 0x0250 (size: 0x8)
    FVector Velocity;                                                                 // 0x0258 (size: 0xC)
    FVector Loc;                                                                      // 0x0264 (size: 0xC)
    TSubclassOf<class Aexplosion_C> explosionClass;                                   // 0x0270 (size: 0x8)
    float Force;                                                                      // 0x0278 (size: 0x4)
    float Radius;                                                                     // 0x027C (size: 0x4)
    float Damage;                                                                     // 0x0280 (size: 0x4)
    float Scale;                                                                      // 0x0284 (size: 0x4)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0288 (size: 0x10)
    TArray<class TSubclassOf<AActor>> Filter;                                         // 0x0298 (size: 0x10)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__fireball_eff_fireball_K2Node_ComponentBoundEvent_1_OnSystemFinished__DelegateSignature(class UParticleSystemComponent* PSystem);
    void ExecuteUbergraph_fireball(int32 EntryPoint);
}; // Size: 0x2A8

#endif
