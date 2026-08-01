#ifndef UE4SS_SDK_tentacleBallShot_HPP
#define UE4SS_SDK_tentacleBallShot_HPP

class AtentacleBallShot_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0228 (size: 0x8)
    class UParticleSystemComponent* eff_tentacleBallShoot;                            // 0x0230 (size: 0x8)
    class UAudioComponent* shot1;                                                     // 0x0238 (size: 0x8)
    class UAudioComponent* shot;                                                      // 0x0240 (size: 0x8)
    class UAudioComponent* post;                                                      // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0258 (size: 0x10)
    float explosion_force;                                                            // 0x0268 (size: 0x4)
    float explosion_radius;                                                           // 0x026C (size: 0x4)
    float explosion_damage;                                                           // 0x0270 (size: 0x4)
    FVector explosion_size;                                                           // 0x0274 (size: 0xC)
    FVector beam_size;                                                                // 0x0280 (size: 0xC)
    float pointDamage;                                                                // 0x028C (size: 0x4)
    float Pitch;                                                                      // 0x0290 (size: 0x4)
    float Volume;                                                                     // 0x0294 (size: 0x4)
    float pointForce;                                                                 // 0x0298 (size: 0x4)
    TArray<class AActor*> ignores;                                                    // 0x02A0 (size: 0x10)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_tentacleBallShot(int32 EntryPoint);
}; // Size: 0x2B0

#endif
