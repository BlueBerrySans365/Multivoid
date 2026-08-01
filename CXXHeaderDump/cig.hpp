#ifndef UE4SS_SDK_cig_HPP
#define UE4SS_SDK_cig_HPP

class Acig_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0250 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0258 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0260 (size: 0x8)
    class UStaticMeshComponent* cigMesh;                                              // 0x0268 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0270 (size: 0x8)
    bool firstTick;                                                                   // 0x0278 (size: 0x1)
    bool litUp;                                                                       // 0x0279 (size: 0x1)
    float life;                                                                       // 0x027C (size: 0x4)
    float huffSpeed;                                                                  // 0x0280 (size: 0x4)
    float maxHealthDecrease;                                                          // 0x0284 (size: 0x4)
    float sleepIncrease;                                                              // 0x0288 (size: 0x4)

    void setLife();
    void getData(Fstruct_save& Data);
    void dropped();
    void loadData(Fstruct_save Data, bool& return);
    void lit(bool litUp);
    void ReceiveBeginPlay();
    void usedAlt(bool Pressed);
    void usedR(bool Pressed);
    void ReceiveTick(float DeltaSeconds);
    void usedRMB(bool Pressed);
    void fellAsleep();
    void woken();
    void destroyed(class AActor* DestroyedActor);
    void ExecuteUbergraph_cig(int32 EntryPoint);
}; // Size: 0x28C

#endif
