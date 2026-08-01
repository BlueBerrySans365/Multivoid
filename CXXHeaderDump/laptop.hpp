#ifndef UE4SS_SDK_laptop_HPP
#define UE4SS_SDK_laptop_HPP

class Alaptop_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0250 (size: 0x8)
    class UArrowComponent* seatRotation;                                              // 0x0258 (size: 0x8)
    class UAudioComponent* audio_hit;                                                 // 0x0260 (size: 0x8)
    class UAudioComponent* snd;                                                       // 0x0268 (size: 0x8)
    class UBillboardComponent* screenCorner;                                          // 0x0270 (size: 0x8)
    class UAudioComponent* audio_camnoise;                                            // 0x0278 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0280 (size: 0x8)
    class UAudioComponent* audio_coordKeyPress;                                       // 0x0288 (size: 0x8)
    class UStaticMeshComponent* zipcoll;                                              // 0x0290 (size: 0x8)
    class UPhysicsConstraintComponent* constr_zipNocoll;                              // 0x0298 (size: 0x8)
    class UBillboardComponent* zipRoot;                                               // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* zipMesh;                                              // 0x02A8 (size: 0x8)
    class UBillboardComponent* zipMove;                                               // 0x02B0 (size: 0x8)
    class UBoxComponent* zipHitbox;                                                   // 0x02B8 (size: 0x8)
    class UCableComponent* cable_zip;                                                 // 0x02C0 (size: 0x8)
    class UPhysicsConstraintComponent* constr_zip;                                    // 0x02C8 (size: 0x8)
    class UBillboardComponent* attach_zip;                                            // 0x02D0 (size: 0x8)
    class UBillboardComponent* zipdRoot;                                              // 0x02D8 (size: 0x8)
    class UChildActorComponent* pcpart_zip;                                           // 0x02E0 (size: 0x8)
    class UPhysicsConstraintComponent* constr_floppyNocoll;                           // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* floppycoll;                                           // 0x02F0 (size: 0x8)
    class UBoxComponent* floppyHitbox;                                                // 0x02F8 (size: 0x8)
    class UBillboardComponent* floppyRoot;                                            // 0x0300 (size: 0x8)
    class UMediaSoundComponent* MediaSound_floppy;                                    // 0x0308 (size: 0x8)
    class UStaticMeshComponent* floppyMesh;                                           // 0x0310 (size: 0x8)
    class UBillboardComponent* floppyMove;                                            // 0x0318 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x0320 (size: 0x8)
    class UPhysicsConstraintComponent* constr_speaker;                                // 0x0328 (size: 0x8)
    class UBoxComponent* boxBlock;                                                    // 0x0330 (size: 0x8)
    class UBillboardComponent* attach_block;                                          // 0x0338 (size: 0x8)
    class UPhysicsConstraintComponent* constr_keyboard;                               // 0x0340 (size: 0x8)
    class UPhysicsConstraintComponent* constr_mouse;                                  // 0x0348 (size: 0x8)
    class UBillboardComponent* bLock;                                                 // 0x0350 (size: 0x8)
    class UBillboardComponent* attach_mouse;                                          // 0x0358 (size: 0x8)
    class UBillboardComponent* attach_speaker;                                        // 0x0360 (size: 0x8)
    class UCableComponent* cable_speaker;                                             // 0x0368 (size: 0x8)
    class UCableComponent* cable_block;                                               // 0x0370 (size: 0x8)
    class UPhysicsConstraintComponent* constr_block;                                  // 0x0378 (size: 0x8)
    class UCableComponent* cable_mouse;                                               // 0x0380 (size: 0x8)
    class UCableComponent* cable_keyboard;                                            // 0x0388 (size: 0x8)
    class UBillboardComponent* attach_keyboard;                                       // 0x0390 (size: 0x8)
    class UAudioComponent* startup;                                                   // 0x0398 (size: 0x8)
    class UChildActorComponent* pcpart_speakerR;                                      // 0x03A0 (size: 0x8)
    class UChildActorComponent* pcpart_mouse;                                         // 0x03A8 (size: 0x8)
    class UChildActorComponent* pcpart_keyboard;                                      // 0x03B0 (size: 0x8)
    class UParticleSystemComponent* eff_button;                                       // 0x03B8 (size: 0x8)
    class UChildActorComponent* pcpart_block;                                         // 0x03C0 (size: 0x8)
    class UBoxComponent* boxScreen;                                                   // 0x03C8 (size: 0x8)
    class UStaticMeshComponent* gamingPc;                                             // 0x03D0 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x03D8 (size: 0x8)
    class UArrowComponent* lookAt_0;                                                  // 0x03E0 (size: 0x8)
    class UWidgetComponent* screen;                                                   // 0x03E8 (size: 0x8)
    float Timeline_0_a_7E6BDEA947E5B65ABC1726A23462848D;                              // 0x03F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_7E6BDEA947E5B65ABC1726A23462848D; // 0x03F4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03F8 (size: 0x8)
    float TL_floppy_floppyIn_611CD14F45D551EDF803E0B7809DE17B;                        // 0x0400 (size: 0x4)
    float TL_floppy_floppyTR_611CD14F45D551EDF803E0B7809DE17B;                        // 0x0404 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_floppy__Direction_611CD14F45D551EDF803E0B7809DE17B; // 0x0408 (size: 0x1)
    class UTimelineComponent* TL_floppy;                                              // 0x0410 (size: 0x8)
    bool isOpened;                                                                    // 0x0418 (size: 0x1)
    class Uui_laptop_C* Widget;                                                       // 0x0420 (size: 0x8)
    bool canUse;                                                                      // 0x0428 (size: 0x1)
    bool tutorial;                                                                    // 0x0429 (size: 0x1)
    bool Anim;                                                                        // 0x042A (size: 0x1)
    bool powered;                                                                     // 0x042B (size: 0x1)
    bool beginplayTurnOn;                                                             // 0x042C (size: 0x1)
    class UMediaPlayer* MediaPlayer;                                                  // 0x0430 (size: 0x8)
    class UMediaTexture* MediaTexture;                                                // 0x0438 (size: 0x8)
    Flaptop_CPcLaunched pcLaunched;                                                   // 0x0440 (size: 0x10)
    void pcLaunched(bool opened);
    int32 floppyType;                                                                 // 0x0450 (size: 0x4)
    TArray<FString> floppyData;                                                       // 0x0458 (size: 0x10)
    FTransform fltr_A;                                                                // 0x0470 (size: 0x30)
    FString floppyNametype;                                                           // 0x04A0 (size: 0x10)
    bool use_powerbutton;                                                             // 0x04B0 (size: 0x1)
    bool use_floppybox;                                                               // 0x04B1 (size: 0x1)
    TArray<FString> floppyBuffer;                                                     // 0x04B8 (size: 0x10)
    FString floppyObjectData;                                                         // 0x04C8 (size: 0x10)
    TArray<int32> floppyBufferUIDs;                                                   // 0x04D8 (size: 0x10)
    int32 floppyReadwrites;                                                           // 0x04E8 (size: 0x4)
    class Aprop_floppyDisc_C* floppyIn;                                               // 0x04F0 (size: 0x8)
    bool zip;                                                                         // 0x04F8 (size: 0x1)
    bool use_zipBox;                                                                  // 0x04F9 (size: 0x1)
    bool floppyProcess;                                                               // 0x04FA (size: 0x1)
    bool instantHit;                                                                  // 0x04FB (size: 0x1)
    class Aprop_seat_C* seat;                                                         // 0x0500 (size: 0x8)
    bool screenUI;                                                                    // 0x0508 (size: 0x1)

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
    void stabilizeSeat();
    void processFloppy(class UPrimitiveComponent* Slot, class AmainPlayer_C* Player, class AActor* Manual, bool errorNotif);
    void updButton();
    void getFloppy(class UStaticMeshComponent*& floppyMesh, class UBillboardComponent*& floppyMove);
    void setPcPartsDefaults();
    void setPcPartsData(const FTransform& bLock, const FTransform& keyboard, const FTransform& Mouse, const FTransform& Speaker, const FTransform& zip);
    void getPcPartsData(const FTransform& bLock, const FTransform& keyboard, const FTransform& Mouse, const FTransform& Speaker, const FTransform& zip);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void skipPreDelete(bool& Skip);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void toolboxFixTime(float& Time);
    void toolboxCanFix(bool& return);
    void isNotSawable(bool& return);
    void getPriceMultiplier(float& priceMult);
    void skipRadial(bool& Skip);
    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void canBeUsedHold(bool& return);
    void setPath(const TArray<FVector>& Path, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void setConstr();
    void Enter(class AmainPlayer_C* self2);
    void TL_floppy__FinishedFunc();
    void TL_floppy__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
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
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void powerChanged(bool active_calc, bool active_downl, bool active_coords, bool active_play, bool active_light);
    void insertFloppy(class Aprop_floppyDisc_C* floppy);
    void ejectFloppy();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void exitLaptop();
    void BndEvt__laptop_zipHitbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__laptop_floppyHitbox_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void disableFloppyBoxCollision();
    void intComs_gamemodeBeginPlay();
    void shitAssDelay();
    void pcHit();
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void ExecuteUbergraph_laptop(int32 EntryPoint);
    void pcLaunched__DelegateSignature(bool opened);
}; // Size: 0x509

#endif
