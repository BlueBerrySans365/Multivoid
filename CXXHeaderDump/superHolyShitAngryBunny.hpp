#ifndef UE4SS_SDK_superHolyShitAngryBunny_HPP
#define UE4SS_SDK_superHolyShitAngryBunny_HPP

class AsuperHolyShitAngryBunny_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* eff_rocket;                                       // 0x0228 (size: 0x8)
    class UAudioComponent* murderfurTheme_st3;                                        // 0x0230 (size: 0x8)
    class UAudioComponent* audio_shoot;                                               // 0x0238 (size: 0x8)
    class UBillboardComponent* head;                                                  // 0x0240 (size: 0x8)
    class UAudioComponent* audio1;                                                    // 0x0248 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0250 (size: 0x8)
    class UParticleSystemComponent* eff_eye_R;                                        // 0x0258 (size: 0x8)
    class UParticleSystemComponent* eff_eye_L;                                        // 0x0260 (size: 0x8)
    class UArrowComponent* eye_L;                                                     // 0x0268 (size: 0x8)
    class UArrowComponent* eye_R;                                                     // 0x0270 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0278 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0280 (size: 0x8)
    bool NewVar_0;                                                                    // 0x0288 (size: 0x1)
    FVector lastloc;                                                                  // 0x028C (size: 0xC)

    void fireLasers();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void tryShoot_timer();
    void ExecuteUbergraph_superHolyShitAngryBunny(int32 EntryPoint);
}; // Size: 0x298

#endif
