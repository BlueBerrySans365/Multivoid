#ifndef UE4SS_SDK_cremator_HPP
#define UE4SS_SDK_cremator_HPP

class Acremator_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class USphereComponent* impactRadius;                                             // 0x0250 (size: 0x8)
    class UStaticMeshComponent* cube;                                                 // 0x0258 (size: 0x8)
    class UChildActorComponent* navblock3;                                            // 0x0260 (size: 0x8)
    class UChildActorComponent* navblock2;                                            // 0x0268 (size: 0x8)
    class UChildActorComponent* navblock1;                                            // 0x0270 (size: 0x8)
    class UBoxComponent* firebox;                                                     // 0x0278 (size: 0x8)
    class UStaticMeshComponent* gasCanAlign1;                                         // 0x0280 (size: 0x8)
    class UBoxComponent* Trigger;                                                     // 0x0288 (size: 0x8)
    class UStaticMeshComponent* gasCanAlign;                                          // 0x0290 (size: 0x8)
    class USphereComponent* smokeExplode;                                             // 0x0298 (size: 0x8)
    class UParticleSystemComponent* eff_fuel;                                         // 0x02A0 (size: 0x8)
    class UArrowComponent* nozzlePour;                                                // 0x02A8 (size: 0x8)
    class UArrowComponent* closeArrow;                                                // 0x02B0 (size: 0x8)
    class UChildActorComponent* door;                                                 // 0x02B8 (size: 0x8)
    class UAudioComponent* crematorDoorSqueak;                                        // 0x02C0 (size: 0x8)
    class UAudioComponent* crematorDoorClose4;                                        // 0x02C8 (size: 0x8)
    class UAudioComponent* crematorDoorClose3;                                        // 0x02D0 (size: 0x8)
    class UAudioComponent* crematorDoorClose2;                                        // 0x02D8 (size: 0x8)
    class UAudioComponent* crematorDoorClose1;                                        // 0x02E0 (size: 0x8)
    class UAudioComponent* crematorDoorClose;                                         // 0x02E8 (size: 0x8)
    class UPhysicsConstraintComponent* disableCollision;                              // 0x02F0 (size: 0x8)
    class UStaticMeshComponent* doorHinge;                                            // 0x02F8 (size: 0x8)
    class UArrowComponent* knockback;                                                 // 0x0300 (size: 0x8)
    class UBoxComponent* burning;                                                     // 0x0308 (size: 0x8)
    class UBoxComponent* Info;                                                        // 0x0310 (size: 0x8)
    class UStaticMeshComponent* Handle;                                               // 0x0318 (size: 0x8)
    class UBoxComponent* gasValve;                                                    // 0x0320 (size: 0x8)
    class UPointLightComponent* firelight;                                            // 0x0328 (size: 0x8)
    class UBillboardComponent* All;                                                   // 0x0330 (size: 0x8)
    class UAudioComponent* audio_pour;                                                // 0x0338 (size: 0x8)
    class UAudioComponent* audio_burn;                                                // 0x0340 (size: 0x8)
    class UStaticMeshComponent* Body;                                                 // 0x0348 (size: 0x8)
    float bangAnim_NewTrack_0_D8E3AC7C4CC66C3C570D6AADA7AE2706;                       // 0x0350 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> bangAnim__Direction_D8E3AC7C4CC66C3C570D6AADA7AE2706; // 0x0354 (size: 0x1)
    class UTimelineComponent* bangAnim;                                               // 0x0358 (size: 0x8)
    float handleLimeline_a_7230965B498F9A965D1173820917C244;                          // 0x0360 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> handleLimeline__Direction_7230965B498F9A965D1173820917C244; // 0x0364 (size: 0x1)
    class UTimelineComponent* handleLimeline;                                         // 0x0368 (size: 0x8)
    bool IsActive;                                                                    // 0x0370 (size: 0x1)
    float gasAmount;                                                                  // 0x0374 (size: 0x4)
    float windup;                                                                     // 0x0378 (size: 0x4)
    class Aprop_gascan_C* gasCanObject;                                               // 0x0380 (size: 0x8)
    bool pouring;                                                                     // 0x0388 (size: 0x1)
    bool lookingAt_info;                                                              // 0x0389 (size: 0x1)
    bool lookingAt_handle;                                                            // 0x038A (size: 0x1)
    bool lookingAt_gascan;                                                            // 0x038B (size: 0x1)
    bool lookingAt_valve;                                                             // 0x038C (size: 0x1)
    class Aprop_C* doorObject;                                                        // 0x0390 (size: 0x8)
    bool Anim;                                                                        // 0x0398 (size: 0x1)
    bool IsClosed;                                                                    // 0x0399 (size: 0x1)
    TArray<class AActor*> Actors;                                                     // 0x03A0 (size: 0x10)
    TArray<float> health;                                                             // 0x03B0 (size: 0x10)
    TArray<float> giveFuel;                                                           // 0x03C0 (size: 0x10)
    FTimerHandle Timer;                                                               // 0x03D0 (size: 0x8)
    bool closedSnd;                                                                   // 0x03D8 (size: 0x1)
    bool banging;                                                                     // 0x03D9 (size: 0x1)
    int32 bangs;                                                                      // 0x03DC (size: 0x4)
    class Aprop_swinger_C* swingerDoor;                                               // 0x03E0 (size: 0x8)
    float pourRate;                                                                   // 0x03E8 (size: 0x4)
    bool isNozzleInGasCan;                                                            // 0x03EC (size: 0x1)
    bool isNozzleInGasCan_check;                                                      // 0x03ED (size: 0x1)
    bool lookatGasTrigger;                                                            // 0x03EE (size: 0x1)

    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void asContainer(class Aprop_container_C*& container);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void asFood(class Aprop_food_C*& food);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
    void collectObjects(bool cleanup);
    void addObject(class AActor* InputPin);
    void pourOut();
    void bang();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void playLoudAsFuck(float InputPin);
    void updPour();
    void calcFlamability(class UPhysicalMaterial* self2, float& flamability, float& fuelMultiply);
    void finishBurning();
    void setupBurning();
    void upd();
    void setClosed(bool Close);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    FString getGasCanFuel();
    void handleLimeline__FinishedFunc();
    void handleLimeline__UpdateFunc();
    void bangAnim__FinishedFunc();
    void bangAnim__UpdateFunc();
    void driveDetached();
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void kicked(bool kick);
    void sendName(FName Name);
    void broken();
    void broken_fire();
    void thrown(class AmainPlayer_C* Player);
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
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
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void rewindHandle();
    void ReceiveTick(float DeltaSeconds);
    void igniteInside();
    void removeTrash();
    void funnyClose();
    void useLever();
    void erieBanging();
    void timerBang();
    void openDoor();
    void pouringTimer();
    void BndEvt__cremator_trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void spitFireballs_timer();
    void BndEvt__cremator_burning_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__cremator_burning_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void intComs_propRenderer_finishProps();
    void ExecuteUbergraph_cremator(int32 EntryPoint);
}; // Size: 0x3EF

#endif
