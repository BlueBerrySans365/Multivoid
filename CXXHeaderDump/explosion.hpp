#ifndef UE4SS_SDK_explosion_HPP
#define UE4SS_SDK_explosion_HPP

class Aexplosion_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* deaf_close;                                               // 0x0228 (size: 0x8)
    class USphereComponent* deaf_mid;                                                 // 0x0230 (size: 0x8)
    class USphereComponent* deaf_far;                                                 // 0x0238 (size: 0x8)
    class UAudioComponent* explosionEcho;                                             // 0x0240 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0248 (size: 0x8)
    class UAudioComponent* explosion_Cue;                                             // 0x0250 (size: 0x8)
    class URadialForceComponent* RadialForce;                                         // 0x0258 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0260 (size: 0x8)
    float a_a_B13196C64BC7C4D979C821B817D18F40;                                       // 0x0268 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_B13196C64BC7C4D979C821B817D18F40; // 0x026C (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0270 (size: 0x8)
    float Force;                                                                      // 0x0278 (size: 0x4)
    float Radius;                                                                     // 0x027C (size: 0x4)
    float Damage;                                                                     // 0x0280 (size: 0x4)
    TEnumAsByte<enum_explosionDebrisType::Type> debrisType;                           // 0x0284 (size: 0x1)
    int32 debris;                                                                     // 0x0288 (size: 0x4)
    float debrisForce;                                                                // 0x028C (size: 0x4)
    float fireStrength;                                                               // 0x0290 (size: 0x4)
    float fireFuel;                                                                   // 0x0294 (size: 0x4)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0298 (size: 0x10)
    FVector Loc;                                                                      // 0x02A8 (size: 0xC)
    FVector impact;                                                                   // 0x02B4 (size: 0xC)
    bool Skip Setting;                                                                // 0x02C0 (size: 0x1)
    bool ignoreWalls;                                                                 // 0x02C1 (size: 0x1)
    TSubclassOf<class UCameraShakeBase> Shake;                                        // 0x02C8 (size: 0x8)
    float innerShake;                                                                 // 0x02D0 (size: 0x4)
    float outerShake;                                                                 // 0x02D4 (size: 0x4)
    int32 objType;                                                                    // 0x02D8 (size: 0x4)
    TArray<class AActor*> ignores;                                                    // 0x02E0 (size: 0x10)
    TArray<class AActor*> ignores_0;                                                  // 0x02F0 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x0300 (size: 0x8)
    bool isEvent;                                                                     // 0x0308 (size: 0x1)
    FName Tag;                                                                        // 0x030C (size: 0x8)
    Fexplosion_CPostExplosion postExplosion;                                          // 0x0318 (size: 0x10)
    void postExplosion();

    FName getDebris();
    void processDeaf();
    void scorchmark();
    void runeCheck();
    void a__FinishedFunc();
    void a__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_explosion(int32 EntryPoint);
    void postExplosion__DelegateSignature();
}; // Size: 0x328

#endif
