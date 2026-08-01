#ifndef UE4SS_SDK_skyUfo_HPP
#define UE4SS_SDK_skyUfo_HPP

class AskyUfo_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0250 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x0258 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0260 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0268 (size: 0x8)
    class USkeletalMeshComponent* grayUfoSk;                                          // 0x0270 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0278 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0280 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0288 (size: 0x8)
    FVector2D clampHeight;                                                            // 0x0290 (size: 0x8)
    bool rendered;                                                                    // 0x0298 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void timer1();
    void timer2();
    void ExecuteUbergraph_skyUfo(int32 EntryPoint);
}; // Size: 0x299

#endif
