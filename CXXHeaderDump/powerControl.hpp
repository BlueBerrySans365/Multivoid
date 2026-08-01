#ifndef UE4SS_SDK_powerControl_HPP
#define UE4SS_SDK_powerControl_HPP

class ApowerControl_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UAudioComponent* Sound;                                                     // 0x0298 (size: 0x8)
    class UBillboardComponent* lights;                                                // 0x02A0 (size: 0x8)
    class UBoxComponent* power_light;                                                 // 0x02A8 (size: 0x8)
    class UBoxComponent* power_coordinates;                                           // 0x02B0 (size: 0x8)
    class UBoxComponent* power_downloading;                                           // 0x02B8 (size: 0x8)
    class UBoxComponent* power_playing;                                               // 0x02C0 (size: 0x8)
    class UBoxComponent* power_calculating;                                           // 0x02C8 (size: 0x8)
    class UParticleSystemComponent* eff_light_on;                                     // 0x02D0 (size: 0x8)
    class UParticleSystemComponent* eef_calc_on;                                      // 0x02D8 (size: 0x8)
    class UParticleSystemComponent* eff_downl_on;                                     // 0x02E0 (size: 0x8)
    class UParticleSystemComponent* eff_coords_on;                                    // 0x02E8 (size: 0x8)
    class UParticleSystemComponent* eff_play_on;                                      // 0x02F0 (size: 0x8)
    class UParticleSystemComponent* eff_light_off;                                    // 0x02F8 (size: 0x8)
    class UParticleSystemComponent* eef_calc_off;                                     // 0x0300 (size: 0x8)
    class UParticleSystemComponent* eff_downl_off;                                    // 0x0308 (size: 0x8)
    class UParticleSystemComponent* eff_coords_off;                                   // 0x0310 (size: 0x8)
    class UParticleSystemComponent* eff_play_off;                                     // 0x0318 (size: 0x8)
    class UTextRenderComponent* text_coords;                                          // 0x0320 (size: 0x8)
    class UTextRenderComponent* text_light;                                           // 0x0328 (size: 0x8)
    class UTextRenderComponent* text_downloading;                                     // 0x0330 (size: 0x8)
    class UTextRenderComponent* text_playing;                                         // 0x0338 (size: 0x8)
    class UTextRenderComponent* text_calc;                                            // 0x0340 (size: 0x8)
    class UStaticMeshComponent* lever_4;                                              // 0x0348 (size: 0x8)
    class UStaticMeshComponent* lever_3;                                              // 0x0350 (size: 0x8)
    class UStaticMeshComponent* lever_2;                                              // 0x0358 (size: 0x8)
    class UStaticMeshComponent* lever_1;                                              // 0x0360 (size: 0x8)
    class UStaticMeshComponent* lever_0;                                              // 0x0368 (size: 0x8)
    class UStaticMeshComponent* powerblock;                                           // 0x0370 (size: 0x8)
    class UPrimitiveComponent* comp;                                                  // 0x0378 (size: 0x8)
    bool press_coord;                                                                 // 0x0380 (size: 0x1)
    bool press_downl;                                                                 // 0x0381 (size: 0x1)
    bool press_play;                                                                  // 0x0382 (size: 0x1)
    bool press_calc;                                                                  // 0x0383 (size: 0x1)
    bool press_light;                                                                 // 0x0384 (size: 0x1)
    TArray<class Atrigger_lightRoot_C*> lighRoots;                                    // 0x0388 (size: 0x10)
    TArray<FName> lighRoots_keys;                                                     // 0x0398 (size: 0x10)
    bool soundActivated;                                                              // 0x03A8 (size: 0x1)
    TArray<class AserverBox_C*> servers;                                              // 0x03B0 (size: 0x10)
    class AAmbientSound* serversSound;                                                // 0x03C0 (size: 0x8)
    TArray<class Adoor_C*> doorsOpen;                                                 // 0x03C8 (size: 0x10)
    TArray<FName> doorsOpen_keys;                                                     // 0x03D8 (size: 0x10)
    bool Disabled;                                                                    // 0x03E8 (size: 0x1)
    TArray<FName> allkeys;                                                            // 0x03F0 (size: 0x10)
    int32 sep;                                                                        // 0x0400 (size: 0x4)
    TArray<class Aprop_wallAttachable_C*> wallMounts;                                 // 0x0408 (size: 0x10)
    TArray<class AActor*> miscObjects;                                                // 0x0418 (size: 0x10)
    bool areGensFine;                                                                 // 0x0428 (size: 0x1)
    bool check_calc;                                                                  // 0x0429 (size: 0x1)
    bool check_light;                                                                 // 0x042A (size: 0x1)
    bool waterlogged;                                                                 // 0x042B (size: 0x1)
    bool tutorial;                                                                    // 0x042C (size: 0x1)

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
    void setPowered(class AActor* Actor);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void sendPower();
    void processKeys(bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void solar();
    void playSND(bool activated);
    void buttonsVisibility();
    void UserConstructionScript();
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
    void updateStrAgl();
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void thrown(class AmainPlayer_C* Player);
    void broken_fire();
    void broken();
    void powerChanged(bool active_calc, bool active_downl, bool active_coords, bool active_play, bool active_light);
    void virus_pb();
    void sendName(FName Name);
    void kicked(bool kick);
    void virus(bool Activate);
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void driveDetached();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void moveLevers();
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_powerControl(int32 EntryPoint);
}; // Size: 0x42D

#endif
