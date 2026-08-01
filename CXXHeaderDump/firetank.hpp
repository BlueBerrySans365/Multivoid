#ifndef UE4SS_SDK_firetank_HPP
#define UE4SS_SDK_firetank_HPP

class Afiretank_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class UBillboardComponent* Center;                                                // 0x0288 (size: 0x8)
    class UBoxComponent* collider3;                                                   // 0x0290 (size: 0x8)
    class UBoxComponent* collider2;                                                   // 0x0298 (size: 0x8)
    class UBoxComponent* collider1;                                                   // 0x02A0 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x02A8 (size: 0x8)
    class UStaticMeshComponent* cube1;                                                // 0x02B0 (size: 0x8)
    class UAudioComponent* firetank_noise_Cue;                                        // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* gascan_R;                                             // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* gascan_L;                                             // 0x02C8 (size: 0x8)
    class UBillboardComponent* gt_L;                                                  // 0x02D0 (size: 0x8)
    class UBillboardComponent* gt_R;                                                  // 0x02D8 (size: 0x8)
    class UParticleSystemComponent* eff_light2;                                       // 0x02E0 (size: 0x8)
    class UParticleSystemComponent* eff_light1;                                       // 0x02E8 (size: 0x8)
    class USpotLightComponent* SpotLight1;                                            // 0x02F0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x02F8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0300 (size: 0x8)
    class UBoxComponent* backoffCollide;                                              // 0x0308 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0310 (size: 0x8)
    class UArrowComponent* eyes;                                                      // 0x0318 (size: 0x8)
    class UBillboardComponent* threadsVelocityPoint_L;                                // 0x0320 (size: 0x8)
    class UBillboardComponent* threadsVelocityPoint_R;                                // 0x0328 (size: 0x8)
    class UAudioComponent* firetank_alarm;                                            // 0x0330 (size: 0x8)
    class UAudioComponent* firetank_gun;                                              // 0x0338 (size: 0x8)
    class UAudioComponent* firetank_loop;                                             // 0x0340 (size: 0x8)
    class UAudioComponent* firetank_zrot;                                             // 0x0348 (size: 0x8)
    class UAudioComponent* firetank_arm;                                              // 0x0350 (size: 0x8)
    class UParticleSystemComponent* eff_fpoint_L;                                     // 0x0358 (size: 0x8)
    class UParticleSystemComponent* eff_fpoint_R;                                     // 0x0360 (size: 0x8)
    class UBoxComponent* headCollider;                                                // 0x0368 (size: 0x8)
    class UAudioComponent* firetank_speak;                                            // 0x0370 (size: 0x8)
    class UParticleSystemComponent* eff_smoke;                                        // 0x0378 (size: 0x8)
    class USkeletalMeshComponent* thread_R;                                           // 0x0380 (size: 0x8)
    class USkeletalMeshComponent* thread_L;                                           // 0x0388 (size: 0x8)
    class UChildActorComponent* flamethrower;                                         // 0x0390 (size: 0x8)
    class UAudioComponent* engine_L;                                                  // 0x0398 (size: 0x8)
    class UAudioComponent* engine_R;                                                  // 0x03A0 (size: 0x8)
    class USphereComponent* seeZone;                                                  // 0x03A8 (size: 0x8)
    class USphereComponent* attackZone;                                               // 0x03B0 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x03B8 (size: 0x8)
    class UArrowComponent* fireDir;                                                   // 0x03C0 (size: 0x8)
    class USkeletalMeshComponent* firetank;                                           // 0x03C8 (size: 0x8)
    class UArrowComponent* Forward;                                                   // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* cube;                                                 // 0x03D8 (size: 0x8)
    float timeline_point_a_E55B857E43B75A02D562258222797A31;                          // 0x03E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> timeline_point__Direction_E55B857E43B75A02D562258222797A31; // 0x03E4 (size: 0x1)
    class UTimelineComponent* timeline_point;                                         // 0x03E8 (size: 0x8)
    float timeline_armStartSpeed_b_990DF4CD4CB6B2B7467972AA9FF57A76;                  // 0x03F0 (size: 0x4)
    float timeline_armStartSpeed_a_990DF4CD4CB6B2B7467972AA9FF57A76;                  // 0x03F4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> timeline_armStartSpeed__Direction_990DF4CD4CB6B2B7467972AA9FF57A76; // 0x03F8 (size: 0x1)
    class UTimelineComponent* timeline_armStartSpeed;                                 // 0x0400 (size: 0x8)
    FVector Loc;                                                                      // 0x0408 (size: 0xC)
    FVector prev;                                                                     // 0x0414 (size: 0xC)
    float Speed;                                                                      // 0x0420 (size: 0x4)
    TArray<class UPhysicsConstraintComponent*> constraints_right;                     // 0x0428 (size: 0x10)
    TArray<class UPhysicsConstraintComponent*> constraints_left;                      // 0x0438 (size: 0x10)
    TArray<class UStaticMeshComponent*> wheels_right;                                 // 0x0448 (size: 0x10)
    TArray<class UStaticMeshComponent*> wheels_left;                                  // 0x0458 (size: 0x10)
    class UNavigationPath* pathComponent;                                             // 0x0468 (size: 0x8)
    int32 dir;                                                                        // 0x0470 (size: 0x4)
    FVector pathPoint_A;                                                              // 0x0474 (size: 0xC)
    FVector pathPoint_B;                                                              // 0x0480 (size: 0xC)
    FVector pathDir;                                                                  // 0x048C (size: 0xC)
    bool isBackingOff;                                                                // 0x0498 (size: 0x1)
    float multWheels_right;                                                           // 0x049C (size: 0x4)
    float multWheels_left;                                                            // 0x04A0 (size: 0x4)
    bool skipTurn;                                                                    // 0x04A4 (size: 0x1)
    bool turning;                                                                     // 0x04A5 (size: 0x1)
    float threads_R;                                                                  // 0x04A8 (size: 0x4)
    float threads_L;                                                                  // 0x04AC (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_thread_R;                                  // 0x04B0 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_thread_L;                                  // 0x04B8 (size: 0x8)
    class Ufiretank_thread_Skeleton_AnimBlueprint_C* anim_thread_R;                   // 0x04C0 (size: 0x8)
    class Ufiretank_thread_Skeleton_AnimBlueprint_C* anim_thread_L;                   // 0x04C8 (size: 0x8)
    TArray<class UPhysicsConstraintComponent*> constraintsSus_right;                  // 0x04D0 (size: 0x10)
    TArray<class UPhysicsConstraintComponent*> constraintsSus_left;                   // 0x04E0 (size: 0x10)
    class APawn* chasing;                                                             // 0x04F0 (size: 0x8)
    FVector chasing_lastLoc;                                                          // 0x04F8 (size: 0xC)
    class Ufiretank_Skeleton_AnimBlueprint_C* anim_tank;                              // 0x0508 (size: 0x8)
    bool Active;                                                                      // 0x0510 (size: 0x1)
    class Aflamethrower_C* flamethrowerComponent;                                     // 0x0518 (size: 0x8)
    float backoffVel;                                                                 // 0x0520 (size: 0x4)
    float Acceleration;                                                               // 0x0524 (size: 0x4)
    FVector torque_R;                                                                 // 0x0528 (size: 0xC)
    FVector torque_L;                                                                 // 0x0534 (size: 0xC)
    FVector threadsOffset;                                                            // 0x0540 (size: 0xC)
    TArray<class UPhysicsConstraintComponent*> allSus;                                // 0x0550 (size: 0x10)
    TArray<class UPhysicsConstraintComponent*> allWheels;                             // 0x0560 (size: 0x10)
    float health_R;                                                                   // 0x0570 (size: 0x4)
    float health_L;                                                                   // 0x0574 (size: 0x4)
    float maxHealth;                                                                  // 0x0578 (size: 0x4)
    bool damaged;                                                                     // 0x057C (size: 0x1)
    int32 stage;                                                                      // 0x0580 (size: 0x4)
    class AfiretankController_C* firetankController;                                  // 0x0588 (size: 0x8)
    class AfiretankCharacterController_C* CharacterMovement;                          // 0x0590 (size: 0x8)
    FName Key;                                                                        // 0x0598 (size: 0x8)
    bool isInEvent;                                                                   // 0x05A0 (size: 0x1)
    FVector Velocity;                                                                 // 0x05A4 (size: 0xC)
    float fuel_R;                                                                     // 0x05B0 (size: 0x4)
    float fuel_L;                                                                     // 0x05B4 (size: 0x4)
    bool disableDamage;                                                               // 0x05B8 (size: 0x1)
    float notice;                                                                     // 0x05BC (size: 0x4)
    class AActor* lastDamagedActor;                                                   // 0x05C0 (size: 0x8)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ignoreSave(bool& ignoreSave);
    void skipPreDelete(bool& Skip);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void asContainer(class Aprop_container_C*& container);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void asFood(class Aprop_food_C*& food);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void lightningInfluence(bool& influence, float& Multiplier);
    void ignoreHook(bool& ignore);
    void overlayBoyancy(bool& Overlay, float& boyancy);
    void crematorTimeMultiplier(float& mult);
    void crematorAction(bool& Action);
    void wallFixer_fix(class Aprop_wallfixer_C* wallFixer, bool& return);
    void switchToHeavyDrag(bool& isHeavy);
    void getUpgradesList(TArray<FName>& Items);
    void canHit(bool& noHit);
    void toolboxFixTime(float& Time);
    void toolboxCanFix(bool& return);
    void isNotSawable(bool& return);
    void getPriceMultiplier(float& priceMult);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void canBeUsedHold(bool& return);
    void processKeys(bool& return);
    void getOnlyKey(FName& Key);
    void setPath(const TArray<FVector>& Path, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void skipRadial(bool& Skip);
    void ariralShoot(FHitResult Hit, class AarirGun_shoot_C* shoot);
    void addGastankHealthEffect();
    void updGastankRot();
    void updGastank();
    void makePathPoints();
    void updStage();
    void gcanExp(FTransform SpawnTransform);
    void setThreadsOffset();
    void updAnim();
    void sensePawn(float Spread);
    void updThreads();
    void checkSides();
    void constructWheels();
    void timeline_armStartSpeed__FinishedFunc();
    void timeline_armStartSpeed__UpdateFunc();
    void timeline_point__FinishedFunc();
    void timeline_point__UpdateFunc();
    void OnFail_99FD1C99470CA485602C19950841354D(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_99FD1C99470CA485602C19950841354D(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void setIgnoreSave(bool ignore);
    void driveDetached();
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void kicked(bool kick);
    void sendName(FName Name);
    void broken();
    void broken_fire();
    void thrown(class AmainPlayer_C* Player);
    void updateStrAgl();
    void playerUnequip(class AmainPlayer_C* Player);
    void playerHoldPost(class AmainPlayer_C* Player);
    void playerHitWith(FHitResult Hit, class AmainPlayer_C* Player);
    void unequpped(class AmainPlayer_C* Player);
    void playerHoldPre(class AmainPlayer_C* Player);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void playerStepped(FHitResult Hit);
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void enterWater(class AwaterVolume_C* Water);
    void leaveWater(class AwaterVolume_C* Water);
    void enterWaterOrigin(class AwaterVolume_C* Water);
    void leaveWaterOrigin(class AwaterVolume_C* Water);
    void eaten(class AmainPlayer_C* Player);
    void virus(bool Activate);
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void setKey(FName Key);
    void physDestroyed();
    void physPreDestroyed();
    void digUp();
    void unhook();
    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void fireDamage(float Damage);
    void ignite(float fuel);
    void microwave(class Aprop_microwave_C* microwave);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void extinguishFire();
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void playerHandMouseWheel(class AmainPlayer_C* Player, float wheelDelta);
    void playerHandMouse(class AmainPlayer_C* Player, FVector2D Mouse);
    void playerHandAnyKey(class AmainPlayer_C* Player, FKey Key, bool Pressed);
    void microwaveElec();
    void addTemperature(float Temperature);
    void accumulateTemperature(float Temperature, float Speed, float DeltaTime);
    void ActionName(class AmainPlayer_C* Player, FHitResult Hit, FString Name);
    void stepped(float Volume, FVector Location);
    void playerLookAway(class AmainPlayer_C* Player);
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void bitten(class AmainPlayer_C* Player);
    void slice(bool clean);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void attemptIgnite();
    void hooked(class Ahook_C* hook);
    void crafted();
    void cleanSponge(float clean, class AmainPlayer_C* Player, class Aprop_sponge_C* sponge, FHitResult Hit);
    void hookTension(class Ahook_C* hook);
    void insertBattery(class AmainPlayer_C* Player, class Aprop_batts_C* battery);
    void playerSit(class AmainPlayer_C* Player);
    void playerUnsit(class AmainPlayer_C* Player);
    void playerUsedOn_delay(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void upgradeTake(FName Item);
    void padlock_lock(class Aprop_padlock_C* padlock);
    void padlock_unlock(class Aprop_padlock_C* padlock);
    void sendTag(FName Tag);
    void lookedAt(class AmainPlayer_C* Player, FHitResult HitResult, class UPrimitiveComponent* lookAtComponent);
    void craftDepleted(class Aprop_workbench_C* workbench);
    void driveBrokenNearby(class Aprop_drive_C* drive);
    void crowbarOpen(class ApryingCrowbar_C* pryingCrowbar);
    void reachedByLightning(class AlightningStrike_C* lightning);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void moveTo();
    void Update();
    void backoff();
    void BndEvt__testTank_backoffCollide_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void senseUpdate();
    void saw();
    void Activate();
    void fire();
    void assignChasedAsDestroyed();
    void Dest(class AActor* DestroyedActor);
    void speak();
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void BndEvt__testTank_seeZone_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__testTank_seeZone_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveDestroyed();
    void makeHealthNoise();
    void checkhealth();
    void BndEvt__testTank_Cube1_K2Node_ComponentBoundEvent_3_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void BndEvt__firetank_Cube_K2Node_ComponentBoundEvent_5_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void checkIfDead();
    void setDamageActor(class AActor* lastDamagedActor);
    void ExecuteUbergraph_firetank(int32 EntryPoint);
}; // Size: 0x5C8

#endif
