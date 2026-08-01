#ifndef UE4SS_SDK_serverBox_HPP
#define UE4SS_SDK_serverBox_HPP

class AserverBox_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UAudioComponent* audio_install;                                             // 0x0250 (size: 0x8)
    class UAudioComponent* audio_take;                                                // 0x0258 (size: 0x8)
    class UBoxComponent* coll;                                                        // 0x0260 (size: 0x8)
    class UBoxComponent* takeUpgrade;                                                 // 0x0268 (size: 0x8)
    class UAudioComponent* server_repair;                                             // 0x0270 (size: 0x8)
    class UAudioComponent* audio_death;                                               // 0x0278 (size: 0x8)
    class UStaticMeshComponent* upg2;                                                 // 0x0280 (size: 0x8)
    class UStaticMeshComponent* upg3;                                                 // 0x0288 (size: 0x8)
    class UStaticMeshComponent* upg1;                                                 // 0x0290 (size: 0x8)
    class UBillboardComponent* floppyRoot;                                            // 0x0298 (size: 0x8)
    class UStaticMeshComponent* floppyMesh;                                           // 0x02A0 (size: 0x8)
    class UBillboardComponent* floppyMove;                                            // 0x02A8 (size: 0x8)
    class UAudioComponent* server_damage1;                                            // 0x02B0 (size: 0x8)
    class UAudioComponent* server_damage;                                             // 0x02B8 (size: 0x8)
    class UStaticMeshComponent* Body;                                                 // 0x02C0 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x02C8 (size: 0x8)
    class UBillboardComponent* kerfFix;                                               // 0x02D0 (size: 0x8)
    class UNavModifierComponent* NavModifier;                                         // 0x02D8 (size: 0x8)
    class UParticleSystemComponent* eff;                                              // 0x02E0 (size: 0x8)
    class UBillboardComponent* cen;                                                   // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x02F0 (size: 0x8)
    class UTextRenderComponent* TextRender;                                           // 0x02F8 (size: 0x8)
    class UAudioComponent* server_snd;                                                // 0x0300 (size: 0x8)
    class UAudioComponent* server_loop;                                               // 0x0308 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0310 (size: 0x8)
    class Usvtarget_C* svtarget;                                                      // 0x0318 (size: 0x8)
    class UBillboardComponent* fol;                                                   // 0x0320 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0328 (size: 0x8)
    class UBillboardComponent* slideIn;                                               // 0x0330 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0338 (size: 0x8)
    float Timeline_2_a_6D1B0B7147322C34576F58A205E2BB97;                              // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_6D1B0B7147322C34576F58A205E2BB97; // 0x0344 (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0348 (size: 0x8)
    float Timeline_1_floppyIn_55C49B2F4C6C026206E4BEA2FF41A5C0;                       // 0x0350 (size: 0x4)
    float Timeline_1_floppyTR_55C49B2F4C6C026206E4BEA2FF41A5C0;                       // 0x0354 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_55C49B2F4C6C026206E4BEA2FF41A5C0; // 0x0358 (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0360 (size: 0x8)
    FString Name;                                                                     // 0x0368 (size: 0x10)
    bool IsBroken;                                                                    // 0x0378 (size: 0x1)
    int32 Type;                                                                       // 0x037C (size: 0x4)
    FserverBox_CFixed fixed;                                                          // 0x0380 (size: 0x10)
    void fixed();
    FTransform aR;                                                                    // 0x0390 (size: 0x30)
    class UStaticMeshComponent* disc;                                                 // 0x03C0 (size: 0x8)
    bool resisnant;                                                                   // 0x03C8 (size: 0x1)
    float resTime;                                                                    // 0x03CC (size: 0x4)
    int32 dishIndex;                                                                  // 0x03D0 (size: 0x4)
    bool isSuper;                                                                     // 0x03D4 (size: 0x1)
    bool Active;                                                                      // 0x03D5 (size: 0x1)
    bool calc;                                                                        // 0x03D6 (size: 0x1)
    bool damaged;                                                                     // 0x03D7 (size: 0x1)
    TArray<FString> floppyData;                                                       // 0x03D8 (size: 0x10)
    FString floppyObjectData;                                                         // 0x03E8 (size: 0x10)
    int32 floppyType;                                                                 // 0x03F8 (size: 0x4)
    FTransform fltr_A;                                                                // 0x0400 (size: 0x30)
    int32 floppyReadwrites;                                                           // 0x0430 (size: 0x4)
    bool upgrade_1;                                                                   // 0x0434 (size: 0x1)
    bool upgrade_2;                                                                   // 0x0435 (size: 0x1)
    bool upgrade_3;                                                                   // 0x0436 (size: 0x1)
    int32 minigame;                                                                   // 0x0438 (size: 0x4)
    bool staticMinigame;                                                              // 0x043C (size: 0x1)
    int32 upgrades;                                                                   // 0x0440 (size: 0x4)
    bool lookatFloppyButton;                                                          // 0x0444 (size: 0x1)
    FserverBox_CServerBroke serverBroke;                                              // 0x0448 (size: 0x10)
    void serverBroke(class AserverBox_C* server, bool damagedHealth);
    bool lookatUpgrades;                                                              // 0x0458 (size: 0x1)

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
    void canBePutInContainer(bool& return);
    void asProp(class Aprop_C*& return);
    void canPickup(bool& return);
    void noRespawn(bool noRespawn, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void isButtonUsed(bool& failed);
    void pocessFloppy(class UObject* Object);
    void countHealth(int32& health);
    void canBreak(bool& break);
    void updUpgrades();
    void skipPreDelete(bool& Skip);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void Visual(bool Active);
    void break_type(int32 Type);
    void check();
    void fix();
    void breakServer();
    void SetActive(bool bNewActive);
    void UserConstructionScript();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
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
    void res();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void powerChanged(bool active_calc, bool active_downl, bool active_coords, bool active_play, bool active_light);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void insertFloppy(class Aprop_floppyDisc_C* floppy);
    void ejectFloppy();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void blinker();
    void BndEvt__serverBox_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_serverBox(int32 EntryPoint);
    void serverBroke__DelegateSignature(class AserverBox_C* server, bool damagedHealth);
    void fixed__DelegateSignature();
}; // Size: 0x459

#endif
