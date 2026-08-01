#ifndef UE4SS_SDK_outsideChurch_HPP
#define UE4SS_SDK_outsideChurch_HPP

class AoutsideChurch_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UChildActorComponent* pnormal;                                              // 0x0250 (size: 0x8)
    class UArrowComponent* Force;                                                     // 0x0258 (size: 0x8)
    class UBoxComponent* quartzZone;                                                  // 0x0260 (size: 0x8)
    class UParticleSystemComponent* eff_eye6;                                         // 0x0268 (size: 0x8)
    class UParticleSystemComponent* eff_eye5;                                         // 0x0270 (size: 0x8)
    class UParticleSystemComponent* eff_eye4;                                         // 0x0278 (size: 0x8)
    class UParticleSystemComponent* eff_eye3;                                         // 0x0280 (size: 0x8)
    class UParticleSystemComponent* eff_eye2;                                         // 0x0288 (size: 0x8)
    class UParticleSystemComponent* eff_eye1;                                         // 0x0290 (size: 0x8)
    class UStaticMeshComponent* torch8;                                               // 0x0298 (size: 0x8)
    class UStaticMeshComponent* torch7;                                               // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* torch6;                                               // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* torch5;                                               // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* torch4;                                               // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* torch3;                                               // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* torch2;                                               // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* torch1;                                               // 0x02D0 (size: 0x8)
    class UBillboardComponent* torches;                                               // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* herb3;                                                // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* herb1;                                                // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* herb2;                                                // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* herb8;                                                // 0x02F8 (size: 0x8)
    class UStaticMeshComponent* herb7;                                                // 0x0300 (size: 0x8)
    class UStaticMeshComponent* herb6;                                                // 0x0308 (size: 0x8)
    class UStaticMeshComponent* herb5;                                                // 0x0310 (size: 0x8)
    class UStaticMeshComponent* herb4;                                                // 0x0318 (size: 0x8)
    class UBillboardComponent* herbs;                                                 // 0x0320 (size: 0x8)
    class USphereComponent* lightningTrigger;                                         // 0x0328 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0330 (size: 0x8)
    class UParticleSystemComponent* eff_fire8;                                        // 0x0338 (size: 0x8)
    class UParticleSystemComponent* eff_fire7;                                        // 0x0340 (size: 0x8)
    class UParticleSystemComponent* eff_fire6;                                        // 0x0348 (size: 0x8)
    class UParticleSystemComponent* eff_fire5;                                        // 0x0350 (size: 0x8)
    class UParticleSystemComponent* eff_fire4;                                        // 0x0358 (size: 0x8)
    class UParticleSystemComponent* eff_fire3;                                        // 0x0360 (size: 0x8)
    class UParticleSystemComponent* eff_fire2;                                        // 0x0368 (size: 0x8)
    class UParticleSystemComponent* eff_fire1;                                        // 0x0370 (size: 0x8)
    class UStaticMeshComponent* statue;                                               // 0x0378 (size: 0x8)
    class UStaticMeshComponent* altar;                                                // 0x0380 (size: 0x8)
    class UBillboardComponent* focusLocation;                                         // 0x0388 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0390 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0398 (size: 0x8)
    class UParticleSystemComponent* eff_debris;                                       // 0x03A0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x03A8 (size: 0x8)
    class UBillboardComponent* strikeLocation;                                        // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* gib1;                                                 // 0x03B8 (size: 0x8)
    class UStaticMeshComponent* gib7;                                                 // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* gib6;                                                 // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* gib5;                                                 // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* gib4;                                                 // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* gib3;                                                 // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* gib2;                                                 // 0x03E8 (size: 0x8)
    class UBillboardComponent* gibs;                                                  // 0x03F0 (size: 0x8)
    class UStaticMeshComponent* church;                                               // 0x03F8 (size: 0x8)
    float slomoTL_a_5E82C6C54D39EDFE04C6F3B06B712C0E;                                 // 0x0400 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> slomoTL__Direction_5E82C6C54D39EDFE04C6F3B06B712C0E; // 0x0404 (size: 0x1)
    class UTimelineComponent* slomoTL;                                                // 0x0408 (size: 0x8)
    bool broken;                                                                      // 0x0410 (size: 0x1)
    TArray<class UStaticMeshComponent*> gibsComponents;                               // 0x0418 (size: 0x10)
    bool angry;                                                                       // 0x0428 (size: 0x1)
    bool striked;                                                                     // 0x0429 (size: 0x1)
    TArray<class UStaticMeshComponent*> herbsComponents;                              // 0x0430 (size: 0x10)
    TArray<bool> herbsSpawned;                                                        // 0x0440 (size: 0x10)
    bool wasRaining;                                                                  // 0x0450 (size: 0x1)
    TArray<class AgrowingPlant_stolasHerb_C*> grownHerbs;                             // 0x0458 (size: 0x10)
    bool Light;                                                                       // 0x0468 (size: 0x1)
    TArray<class USceneComponent*> Lighting;                                          // 0x0470 (size: 0x10)
    int32 harvests;                                                                   // 0x0480 (size: 0x4)
    bool initAngryDelay;                                                              // 0x0484 (size: 0x1)
    bool superstorm;                                                                  // 0x0485 (size: 0x1)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKeyT(bool& gather);
    void skipPreDelete(bool& Skip);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void fireLightningAtPlayer();
    void checkQuartz();
    void updEyes();
    void trySpawnHerb();
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void updBroken();
    void break(bool explode);
    void UserConstructionScript();
    void slomoTL__FinishedFunc();
    void slomoTL__UpdateFunc();
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void ReceiveBeginPlay();
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void lightningStrike();
    void runTrigger(class AActor* Owner, int32 Index);
    void BndEvt__outsideChurch_lightningTrigger_K2Node_ComponentBoundEvent_0_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveTick(float DeltaSeconds);
    void bindHarvested(class AgrowingPlant_stolasHerb_C* herb);
    void harvestedHerb();
    void truckLightning();
    void setAngry();
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void init_lightningStorm(float Time);
    void ExecuteUbergraph_outsideChurch(int32 EntryPoint);
}; // Size: 0x486

#endif
