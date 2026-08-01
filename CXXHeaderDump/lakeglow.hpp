#ifndef UE4SS_SDK_lakeglow_HPP
#define UE4SS_SDK_lakeglow_HPP

class Alakeglow_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* glow;                                                 // 0x0228 (size: 0x8)
    class UStaticMeshComponent* hole;                                                 // 0x0230 (size: 0x8)
    class UParticleSystemComponent* splash;                                           // 0x0238 (size: 0x8)
    class UParticleSystemComponent* eff_lakebeam;                                     // 0x0240 (size: 0x8)
    class UBoxComponent* pulling;                                                     // 0x0248 (size: 0x8)
    class UAudioComponent* water_splash_Cue;                                          // 0x0250 (size: 0x8)
    class UAudioComponent* waterEnt_pull;                                             // 0x0258 (size: 0x8)
    class UAudioComponent* waterEnt_loop;                                             // 0x0260 (size: 0x8)
    class UAudioComponent* waterEnt_init;                                             // 0x0268 (size: 0x8)
    class UAudioComponent* waterEnt_attack_Cue;                                       // 0x0270 (size: 0x8)
    class UParticleSystemComponent* mist;                                             // 0x0278 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)
    class AmainPlayer_C* playerIn;                                                    // 0x0290 (size: 0x8)
    bool attacking;                                                                   // 0x0298 (size: 0x1)
    class AmainPlayer_C* Temp;                                                        // 0x02A0 (size: 0x8)
    bool IsActive;                                                                    // 0x02A8 (size: 0x1)
    bool alpwaysActive;                                                               // 0x02A9 (size: 0x1)
    float dmg;                                                                        // 0x02AC (size: 0x4)
    float Delay;                                                                      // 0x02B0 (size: 0x4)
    float Duration;                                                                   // 0x02B4 (size: 0x4)

    void SetActive(bool Activate);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void pullDown();
    void BndEvt__lakeglow_pulling_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__lakeglow_pulling_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_lakeglow(int32 EntryPoint);
}; // Size: 0x2B8

#endif
