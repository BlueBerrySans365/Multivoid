#ifndef UE4SS_SDK_radiotower_HPP
#define UE4SS_SDK_radiotower_HPP

class Aradiotower_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UInstancedStaticMeshComponent* greebles_3;                                  // 0x0250 (size: 0x8)
    class UInstancedStaticMeshComponent* greebles_2;                                  // 0x0258 (size: 0x8)
    class UInstancedStaticMeshComponent* greebles_1;                                  // 0x0260 (size: 0x8)
    class UInstancedStaticMeshComponent* greebles_0;                                  // 0x0268 (size: 0x8)
    class USceneComponent* Gizmos_1;                                                  // 0x0270 (size: 0x8)
    class UAudioComponent* audio_beep;                                                // 0x0278 (size: 0x8)
    class UAudioComponent* audio_lever;                                               // 0x0280 (size: 0x8)
    class UPhysicsConstraintComponent* doorNocollide;                                 // 0x0288 (size: 0x8)
    class UChildActorComponent* door_R;                                               // 0x0290 (size: 0x8)
    class UChildActorComponent* door_L;                                               // 0x0298 (size: 0x8)
    class UAudioComponent* audio_spark;                                               // 0x02A0 (size: 0x8)
    class UParticleSystemComponent* eff_spark;                                        // 0x02A8 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x02B0 (size: 0x8)
    class UBoxComponent* button_reset;                                                // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* leverReset;                                           // 0x02C0 (size: 0x8)
    class USceneComponent* resetLeverStart;                                           // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* leverConfirm;                                         // 0x02D0 (size: 0x8)
    class UBillboardComponent* fusesRoot;                                             // 0x02D8 (size: 0x8)
    class UBoxComponent* button_confirm;                                              // 0x02E0 (size: 0x8)
    class UBillboardComponent* puzzleFrameRoot;                                       // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* gameBase;                                             // 0x02F0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x02F8 (size: 0x8)
    class UAudioComponent* audio_fuseInsert;                                          // 0x0300 (size: 0x8)
    class UAudioComponent* audio_fusePullout;                                         // 0x0308 (size: 0x8)
    class UBillboardComponent* puzzleRoot;                                            // 0x0310 (size: 0x8)
    class UAudioComponent* audio_scramble;                                            // 0x0318 (size: 0x8)
    class UAudioComponent* audio_success;                                             // 0x0320 (size: 0x8)
    class UAudioComponent* audio_fail;                                                // 0x0328 (size: 0x8)
    class UAudioComponent* audio_click;                                               // 0x0330 (size: 0x8)
    class UChildActorComponent* ladder;                                               // 0x0338 (size: 0x8)
    class UBoxComponent* fix;                                                         // 0x0340 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem1;                                  // 0x0348 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0350 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem2;                                  // 0x0358 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0360 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem3;                                  // 0x0368 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0370 (size: 0x8)
    class UBillboardComponent* topPoint;                                              // 0x0378 (size: 0x8)
    class UStaticMeshComponent* Top;                                                  // 0x0380 (size: 0x8)
    class UInstancedStaticMeshComponent* segm_w;                                      // 0x0388 (size: 0x8)
    class UInstancedStaticMeshComponent* segm_r;                                      // 0x0390 (size: 0x8)
    class UStaticMeshComponent* found;                                                // 0x0398 (size: 0x8)
    class UBillboardComponent* vis;                                                   // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* rend;                                                 // 0x03A8 (size: 0x8)
    float TL_lever_a_4D0A95CC478A4A7551E8B7AE2357BF66;                                // 0x03B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_lever__Direction_4D0A95CC478A4A7551E8B7AE2357BF66; // 0x03B4 (size: 0x1)
    class UTimelineComponent* TL_lever;                                               // 0x03B8 (size: 0x8)
    float TL_reset_a_2ED4EDAD4A366A22936F3CA5F6CF46C3;                                // 0x03C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_reset__Direction_2ED4EDAD4A366A22936F3CA5F6CF46C3; // 0x03C4 (size: 0x1)
    class UTimelineComponent* TL_reset;                                               // 0x03C8 (size: 0x8)
    bool IsBroken;                                                                    // 0x03D0 (size: 0x1)
    int32 Height;                                                                     // 0x03D4 (size: 0x4)
    int32 I;                                                                          // 0x03D8 (size: 0x4)
    Fradiotower_CStateChanged stateChanged;                                           // 0x03E0 (size: 0x10)
    void stateChanged(bool broken);
    FIntPoint puzzleSize;                                                             // 0x03F0 (size: 0x8)
    TArray<class UPrimitiveComponent*> puzzleButtons;                                 // 0x03F8 (size: 0x10)
    TArray<class UParticleSystemComponent*> puzzleLights;                             // 0x0408 (size: 0x10)
    FString lookatText;                                                               // 0x0418 (size: 0x10)
    bool isLookAtFix;                                                                 // 0x0428 (size: 0x1)
    int32 lookAtIndex;                                                                // 0x042C (size: 0x4)
    bool isLookAtButton;                                                              // 0x0430 (size: 0x1)
    TArray<bool> puzzleData;                                                          // 0x0438 (size: 0x10)
    bool lookAtConfirm;                                                               // 0x0448 (size: 0x1)
    bool lookAtReset;                                                                 // 0x0449 (size: 0x1)
    TArray<uint8> fuses;                                                              // 0x0450 (size: 0x10)
    TArray<class UPrimitiveComponent*> fusesButtons;                                  // 0x0460 (size: 0x10)
    TArray<class UPrimitiveComponent*> fusesFuses;                                    // 0x0470 (size: 0x10)
    bool lookAtFuse;                                                                  // 0x0480 (size: 0x1)
    int32 lookAtFuseIndex;                                                            // 0x0484 (size: 0x4)
    bool skipPuzzle;                                                                  // 0x0488 (size: 0x1)
    Fradiotower_CRadioTowerBroken radioTowerBroken;                                   // 0x0490 (size: 0x10)
    void radioTowerBroken(class Aradiotower_C* radiotower, bool damagedHealth);
    bool Animation;                                                                   // 0x04A0 (size: 0x1)

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
    void generateGizmos();
    void completeMinigame();
    void countFuses(int32& Count);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void updFuses();
    void genFuses();
    void tryToFix();
    void scramble();
    void switchNeighbors(int32 Index, bool Update);
    void updPuzzle();
    void switchSwitch(int32 Index, bool Update);
    void genPuzzle();
    void setBroken(bool IsBroken, bool pullLever);
    void SetHeight();
    void setHidden(bool NewHidden);
    void visligh(bool bNewVisibility);
    void UserConstructionScript();
    void TL_reset__FinishedFunc();
    void TL_reset__UpdateFunc();
    void TL_reset__reset__EventFunc();
    void TL_lever__FinishedFunc();
    void TL_lever__UpdateFunc();
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
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void blinking();
    void breakdown();
    void blink();
    void setblinktimer();
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void resetLever();
    void ExecuteUbergraph_radiotower(int32 EntryPoint);
    void radioTowerBroken__DelegateSignature(class Aradiotower_C* radiotower, bool damagedHealth);
    void stateChanged__DelegateSignature(bool broken);
}; // Size: 0x4A1

#endif
