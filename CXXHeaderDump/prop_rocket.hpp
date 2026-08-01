#ifndef UE4SS_SDK_prop_rocket_HPP
#define UE4SS_SDK_prop_rocket_HPP

class Aprop_rocket_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* eff_rocketSmoke;                                  // 0x0370 (size: 0x8)
    class UAudioComponent* rocketFire_loop;                                           // 0x0378 (size: 0x8)
    FVector lastloc;                                                                  // 0x0380 (size: 0xC)
    class Aprop_funGun_rpg_C* rpg;                                                    // 0x0390 (size: 0x8)
    FVector aim;                                                                      // 0x0398 (size: 0xC)
    float Speed;                                                                      // 0x03A4 (size: 0x4)
    float MaxSpeed;                                                                   // 0x03A8 (size: 0x4)
    class USceneCaptureComponent2D* Camera;                                           // 0x03B0 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x03B8 (size: 0x8)
    Fprop_rocket_CImpact impact;                                                      // 0x03C0 (size: 0x10)
    void impact();
    bool followVelocity;                                                              // 0x03D0 (size: 0x1)
    float Damage;                                                                     // 0x03D4 (size: 0x4)
    float Force;                                                                      // 0x03D8 (size: 0x4)

    FVector makeAim();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_rocket(int32 EntryPoint);
    void impact__DelegateSignature();
}; // Size: 0x3DC

#endif
