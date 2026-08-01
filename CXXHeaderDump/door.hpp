#ifndef UE4SS_SDK_door_HPP
#define UE4SS_SDK_door_HPP

class Adoor_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UStaticMeshComponent* ramp1;                                                // 0x0298 (size: 0x8)
    class UStaticMeshComponent* door_L;                                               // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* door_R;                                               // 0x02A8 (size: 0x8)
    class UBillboardComponent* door_L_root;                                           // 0x02B0 (size: 0x8)
    class UBillboardComponent* door_R_root;                                           // 0x02B8 (size: 0x8)
    class UAudioComponent* audio_doorOpened;                                          // 0x02C0 (size: 0x8)
    class UAudioComponent* audio_doorClosed;                                          // 0x02C8 (size: 0x8)
    class UBoxComponent* faceSmasher;                                                 // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* doorshadow_L;                                         // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* doorshadow_R;                                         // 0x02E0 (size: 0x8)
    class UChildActorComponent* navmod;                                               // 0x02E8 (size: 0x8)
    class UBoxComponent* coll;                                                        // 0x02F0 (size: 0x8)
    class UAudioComponent* audio_doorstop;                                            // 0x02F8 (size: 0x8)
    class UAudioComponent* audio_doorSlide;                                           // 0x0300 (size: 0x8)
    class UBoxComponent* sensor;                                                      // 0x0308 (size: 0x8)
    class UStaticMeshComponent* Frame;                                                // 0x0310 (size: 0x8)
    class UBillboardComponent* Resize;                                                // 0x0318 (size: 0x8)
    float Timeline_0_a_FEDC794D4632BAEAF5C4B7B399814414;                              // 0x0320 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_FEDC794D4632BAEAF5C4B7B399814414; // 0x0324 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0328 (size: 0x8)
    float openJammed_a_33504C814931C8ACCF06789CFA66D580;                              // 0x0330 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> openJammed__Direction_33504C814931C8ACCF06789CFA66D580; // 0x0334 (size: 0x1)
    class UTimelineComponent* openJammed;                                             // 0x0338 (size: 0x8)
    float move_a_88C181824A7CA370E6BB3DAAE7420F44;                                    // 0x0340 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> move__Direction_88C181824A7CA370E6BB3DAAE7420F44; // 0x0344 (size: 0x1)
    class UTimelineComponent* move;                                                   // 0x0348 (size: 0x8)
    bool isOpened;                                                                    // 0x0350 (size: 0x1)
    bool isMoving;                                                                    // 0x0351 (size: 0x1)
    bool Active;                                                                      // 0x0352 (size: 0x1)
    bool autoclose;                                                                   // 0x0353 (size: 0x1)
    class AtriggerBase_C* trigger_opened;                                             // 0x0358 (size: 0x8)
    FName trigger_opened_key;                                                         // 0x0360 (size: 0x8)
    class AtriggerBase_C* trigger_closed;                                             // 0x0368 (size: 0x8)
    FName trigger_closed_key;                                                         // 0x0370 (size: 0x8)
    bool superClosed;                                                                 // 0x0378 (size: 0x1)
    class AnavModifierBox_C* nav;                                                     // 0x0380 (size: 0x8)
    bool ignoreNPC;                                                                   // 0x0388 (size: 0x1)
    TArray<class ApasswordLock_C*> passlocks;                                         // 0x0390 (size: 0x10)
    TArray<FName> passlocks_keys;                                                     // 0x03A0 (size: 0x10)
    bool jammed;                                                                      // 0x03B0 (size: 0x1)
    bool alienated;                                                                   // 0x03B1 (size: 0x1)
    FString keycardName;                                                              // 0x03B8 (size: 0x10)
    bool ignoreBlackout;                                                              // 0x03C8 (size: 0x1)
    Fdoor_CDoorOpened doorOpened;                                                     // 0x03D0 (size: 0x10)
    void doorOpened();
    FVector openDoor;                                                                 // 0x03E0 (size: 0xC)
    FVector Scale;                                                                    // 0x03EC (size: 0xC)
    FVector lerpA_R;                                                                  // 0x03F8 (size: 0xC)
    FVector lerpA_L;                                                                  // 0x0404 (size: 0xC)
    bool damageProtected;                                                             // 0x0410 (size: 0x1)
    TArray<class AActor*> sensorOverlaps;                                             // 0x0418 (size: 0x10)
    TEnumAsByte<ETimelineDirection::Type> dir;                                        // 0x0428 (size: 0x1)
    bool doorBumping;                                                                 // 0x0429 (size: 0x1)
    bool cantClose;                                                                   // 0x042A (size: 0x1)
    bool ignoreInteractions;                                                          // 0x042B (size: 0x1)
    bool drawDecals;                                                                  // 0x042C (size: 0x1)

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
    void gatherDataFromKeyT(bool& gather);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void jam(bool autoCancel);
    void hack(FVector Source);
    void processKeys(bool& return);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void upd();
    void snd();
    void UserConstructionScript();
    void move__FinishedFunc();
    void move__UpdateFunc();
    void openJammed__FinishedFunc();
    void openJammed__UpdateFunc();
    void openJammed__jam2__EventFunc();
    void openJammed__jam1__EventFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
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
    void checkSensor();
    void doorClose(bool bypassCheck);
    void doorOpen(bool bypassCheck);
    void runTrigger(class AActor* Owner, int32 Index);
    void settime(bool opened);
    void ReceiveBeginPlay();
    void jamCancel(float Duration);
    void del();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void BndEvt__door_sensor_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__door_sensor_K2Node_ComponentBoundEvent_3_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void BndEvt__door_faceSmasher_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void doorImpact(float B);
    void intComs_gamemodeBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_door(int32 EntryPoint);
    void doorOpened__DelegateSignature();
}; // Size: 0x42D

#endif
