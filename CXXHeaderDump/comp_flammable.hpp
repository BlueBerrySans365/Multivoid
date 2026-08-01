#ifndef UE4SS_SDK_comp_flammable_HPP
#define UE4SS_SDK_comp_flammable_HPP

class Ucomp_flammable_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class AActor* Owner;                                                              // 0x00B8 (size: 0x8)
    class UPrimitiveComponent* Component;                                             // 0x00C0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x00C8 (size: 0x8)
    class UParticleSystemComponent* particle;                                         // 0x00D0 (size: 0x8)
    bool isBurning;                                                                   // 0x00D8 (size: 0x1)
    float fuel;                                                                       // 0x00DC (size: 0x4)
    class UStaticMeshComponent* Static;                                               // 0x00E0 (size: 0x8)
    FVector b_orig;                                                                   // 0x00E8 (size: 0xC)
    FVector b_ext;                                                                    // 0x00F4 (size: 0xC)
    float fuelSpeed;                                                                  // 0x0100 (size: 0x4)
    FTimerHandle timerSpread;                                                         // 0x0108 (size: 0x8)
    float fireSize;                                                                   // 0x0110 (size: 0x4)
    float effectRate;                                                                 // 0x0114 (size: 0x4)
    Fcomp_flammable_CExtinguished extinguished;                                       // 0x0118 (size: 0x10)
    void extinguished();
    class UParticleSystem* fireParticleEmitter;                                       // 0x0128 (size: 0x8)
    float igniteChance;                                                               // 0x0130 (size: 0x4)
    float DeltaSeconds;                                                               // 0x0134 (size: 0x4)
    float igniteScale;                                                                // 0x0138 (size: 0x4)

    void igniteSound();
    void Bound(const class USceneComponent* Component, FVector& Origin, FVector& BoxExtent);
    void ReceiveBeginPlay();
    void ignite_s(float fuel);
    void extinguish();
    void des(class AActor* DestroyedActor);
    void spreadFire();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_comp_flammable(int32 EntryPoint);
    void extinguished__DelegateSignature();
}; // Size: 0x13C

#endif
