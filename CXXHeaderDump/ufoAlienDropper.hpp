#ifndef UE4SS_SDK_ufoAlienDropper_HPP
#define UE4SS_SDK_ufoAlienDropper_HPP

class AufoAlienDropper_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UParticleSystemComponent* eff_halloweenPower;                               // 0x0250 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0258 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0260 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0268 (size: 0x8)
    class USkeletalMeshComponent* grayUfoSk;                                          // 0x0270 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0278 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0280 (size: 0x8)
    FVector Timeline_0_vec_599A2DDE480D6BBCAD843EA25BEE5176;                          // 0x0288 (size: 0xC)
    float Timeline_0_blinkWeight_599A2DDE480D6BBCAD843EA25BEE5176;                    // 0x0294 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_599A2DDE480D6BBCAD843EA25BEE5176; // 0x0298 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x02A0 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> O;                                          // 0x02A8 (size: 0x10)
    bool flyAway;                                                                     // 0x02B8 (size: 0x1)
    FVector Init;                                                                     // 0x02BC (size: 0xC)
    bool Fly;                                                                         // 0x02C8 (size: 0x1)
    TSubclassOf<class AActor> Drop;                                                   // 0x02D0 (size: 0x8)
    float Weight;                                                                     // 0x02D8 (size: 0x4)
    class AmainGamemode_C* GameMode_0;                                                // 0x02E0 (size: 0x8)
    int32 aliens;                                                                     // 0x02E8 (size: 0x4)
    bool arrived;                                                                     // 0x02EC (size: 0x1)
    TArray<class AActor*> alinens;                                                    // 0x02F0 (size: 0x10)
    bool spawnArir;                                                                   // 0x0300 (size: 0x1)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__turnoff__EventFunc();
    void Timeline_0__drop__EventFunc();
    void forceDeploy();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void tickerMortar();
    void CustomEvent();
    void destAlien(class AActor* DestroyedActor);
    void CustomEvent_1();
    void healer();
    void ExecuteUbergraph_ufoAlienDropper(int32 EntryPoint);
}; // Size: 0x301

#endif
