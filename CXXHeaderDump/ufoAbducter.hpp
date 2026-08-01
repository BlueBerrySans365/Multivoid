#ifndef UE4SS_SDK_ufoAbducter_HPP
#define UE4SS_SDK_ufoAbducter_HPP

class AufoAbducter_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* volumeBeam;                                           // 0x0228 (size: 0x8)
    class UParticleSystemComponent* eff_ufobeam;                                      // 0x0230 (size: 0x8)
    class UBillboardComponent* abductLoc;                                             // 0x0238 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0240 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0248 (size: 0x8)
    class USkeletalMeshComponent* grayUfoSk;                                          // 0x0250 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0258 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0260 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0268 (size: 0x8)
    FVector Timeline_0_vec_80F53A1D417FAF54F08F71A22B6CBF78;                          // 0x0270 (size: 0xC)
    float Timeline_0_abduct_80F53A1D417FAF54F08F71A22B6CBF78;                         // 0x027C (size: 0x4)
    float Timeline_0_blinkWeight_80F53A1D417FAF54F08F71A22B6CBF78;                    // 0x0280 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_80F53A1D417FAF54F08F71A22B6CBF78; // 0x0284 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0288 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> O;                                          // 0x0290 (size: 0x10)
    bool flyAway;                                                                     // 0x02A0 (size: 0x1)
    FVector Init;                                                                     // 0x02A4 (size: 0xC)
    bool Fly;                                                                         // 0x02B0 (size: 0x1)
    float Weight;                                                                     // 0x02B4 (size: 0x4)
    class AmainGamemode_C* GameMode;                                                  // 0x02B8 (size: 0x8)
    class AActor* abduct;                                                             // 0x02C0 (size: 0x8)
    FVector loc_A;                                                                    // 0x02C8 (size: 0xC)
    bool abducting;                                                                   // 0x02D4 (size: 0x1)
    float Height;                                                                     // 0x02D8 (size: 0x4)
    FVector Add;                                                                      // 0x02DC (size: 0xC)

    void activated();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__afterAbduct__EventFunc();
    void Timeline_0__preAbduct__EventFunc();
    void Timeline_0__startAbduct__EventFunc();
    void Timeline_0__abducted__EventFunc();
    void forceDeploy();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void killKerfur();
    void ExecuteUbergraph_ufoAbducter(int32 EntryPoint);
}; // Size: 0x2E8

#endif
