#ifndef UE4SS_SDK_coordRadarDish_HPP
#define UE4SS_SDK_coordRadarDish_HPP

class AcoordRadarDish_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class Usvtarget_C* svtarget;                                                      // 0x0250 (size: 0x8)
    class UChildActorComponent* watchYoStep;                                          // 0x0258 (size: 0x8)
    class UBoxComponent* button_retract1;                                             // 0x0260 (size: 0x8)
    class UBoxComponent* button_retract2;                                             // 0x0268 (size: 0x8)
    class UBillboardComponent* lever;                                                 // 0x0270 (size: 0x8)
    class UBillboardComponent* fusesRoot;                                             // 0x0278 (size: 0x8)
    class UBillboardComponent* panel;                                                 // 0x0280 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0288 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0290 (size: 0x8)
    class UStaticMeshComponent* rot_Z;                                                // 0x0298 (size: 0x8)
    class UAudioComponent* audio_fuseInsert;                                          // 0x02A0 (size: 0x8)
    class UAudioComponent* audio_fusePullout;                                         // 0x02A8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x02B0 (size: 0x8)
    class UPointLightComponent* PointLight3;                                          // 0x02B8 (size: 0x8)
    class UPointLightComponent* PointLight2;                                          // 0x02C0 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x02C8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x02D0 (size: 0x8)
    class UAudioComponent* audio_click;                                               // 0x02D8 (size: 0x8)
    class UBoxComponent* buttonLever;                                                 // 0x02E0 (size: 0x8)
    class UStaticMeshComponent* meshLever;                                            // 0x02E8 (size: 0x8)
    class UAudioComponent* audio_lever;                                               // 0x02F0 (size: 0x8)
    class UAudioComponent* audio_fail;                                                // 0x02F8 (size: 0x8)
    class UAudioComponent* audio_success;                                             // 0x0300 (size: 0x8)
    class UParticleSystemComponent* eff_light4;                                       // 0x0308 (size: 0x8)
    class UParticleSystemComponent* eff_light3;                                       // 0x0310 (size: 0x8)
    class UParticleSystemComponent* eff_light2;                                       // 0x0318 (size: 0x8)
    class UParticleSystemComponent* eff_light1;                                       // 0x0320 (size: 0x8)
    class UBillboardComponent* lights;                                                // 0x0328 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0330 (size: 0x8)
    class UStaticMeshComponent* Base;                                                 // 0x0338 (size: 0x8)
    class UStaticMeshComponent* coordRadarDraft;                                      // 0x0340 (size: 0x8)
    float leverTL_a_75B5EFFB4B50A46DBB42C7B852405E6F;                                 // 0x0348 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> leverTL__Direction_75B5EFFB4B50A46DBB42C7B852405E6F; // 0x034C (size: 0x1)
    class UTimelineComponent* leverTL;                                                // 0x0350 (size: 0x8)
    int32 ID;                                                                         // 0x0358 (size: 0x4)
    bool IsBroken;                                                                    // 0x035C (size: 0x1)
    TArray<bool> puzzleLights;                                                        // 0x0360 (size: 0x10)
    TArray<class UPrimitiveComponent*> puzzle_buttons;                                // 0x0370 (size: 0x10)
    TArray<class UParticleSystemComponent*> puzzle_lights;                            // 0x0380 (size: 0x10)
    float dist;                                                                       // 0x0390 (size: 0x4)
    bool isLookAtButton;                                                              // 0x0394 (size: 0x1)
    FString lookatText;                                                               // 0x0398 (size: 0x10)
    int32 lookAtButtonIndex;                                                          // 0x03A8 (size: 0x4)
    bool leverMoving;                                                                 // 0x03AC (size: 0x1)
    bool isLookAtLever;                                                               // 0x03AD (size: 0x1)
    TArray<class UPrimitiveComponent*> fusesButtons;                                  // 0x03B0 (size: 0x10)
    TArray<class UPrimitiveComponent*> fusesFuses;                                    // 0x03C0 (size: 0x10)
    TArray<uint8> fuses;                                                              // 0x03D0 (size: 0x10)
    bool isLookAtFuse;                                                                // 0x03E0 (size: 0x1)
    int32 lookAtFuseIndex;                                                            // 0x03E4 (size: 0x4)
    FcoordRadarDish_CStateChanged stateChanged;                                       // 0x03E8 (size: 0x10)
    void stateChanged(bool broken);
    bool skipPuzzle;                                                                  // 0x03F8 (size: 0x1)
    TArray<class UStaticMeshComponent*> puzzleMeshes;                                 // 0x0400 (size: 0x10)
    bool opened;                                                                      // 0x0410 (size: 0x1)
    bool isLookAtRetract;                                                             // 0x0411 (size: 0x1)
    bool isAnim;                                                                      // 0x0412 (size: 0x1)
    FTimerHandle brokenLightTimerHandle;                                              // 0x0418 (size: 0x8)
    bool brokenLightState;                                                            // 0x0420 (size: 0x1)
    FcoordRadarDish_CCoordDishDamaged coordDishDamaged;                               // 0x0428 (size: 0x10)
    void coordDishDamaged(class AcoordRadarDish_C* dish, bool damagedHealth);
    int32 graceHeal;                                                                  // 0x0438 (size: 0x4)

    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void asContainer(class Aprop_container_C*& container);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
    void landedOn(class AmainPlayer_C* Player, bool& ignoreFallDamage);
    void asFood(class Aprop_food_C*& food);
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void asFarmPlant(class AgrowingPlant_C*& plant);
    void createMinigame(int32 Length);
    void insertFuseIn();
    void solvePuzzle();
    void countFuses(int32& Amount);
    void setBrokenLight();
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void updFuses();
    void genFuses();
    void Scramble Radar Dish();
    void switchNeighbors(int32 Index, bool Update);
    void switchSwitch(int32 Index, bool Update);
    void updPuzzle();
    void genPuzzle();
    void updBroken();
    void setRot(float Angle);
    void UserConstructionScript();
    void leverTL__FinishedFunc();
    void leverTL__UpdateFunc();
    void OnNotifyEnd_EF603E1346C61AF058F04FA9FE5C1BDE(FName NotifyName);
    void OnNotifyBegin_EF603E1346C61AF058F04FA9FE5C1BDE(FName NotifyName);
    void OnInterrupted_EF603E1346C61AF058F04FA9FE5C1BDE(FName NotifyName);
    void OnBlendOut_EF603E1346C61AF058F04FA9FE5C1BDE(FName NotifyName);
    void OnCompleted_EF603E1346C61AF058F04FA9FE5C1BDE(FName NotifyName);
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
    void moveLever(bool Condition);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void breakdown();
    void brokenLight();
    void brokenLightTimer();
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void ExecuteUbergraph_coordRadarDish(int32 EntryPoint);
    void coordDishDamaged__DelegateSignature(class AcoordRadarDish_C* dish, bool damagedHealth);
    void stateChanged__DelegateSignature(bool broken);
}; // Size: 0x43C

#endif
