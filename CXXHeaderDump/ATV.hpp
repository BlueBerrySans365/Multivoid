#ifndef UE4SS_SDK_ATV_HPP
#define UE4SS_SDK_ATV_HPP

class AATV_C : public APawn
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)
    class Usvtarget_C* svtarget3;                                                     // 0x0288 (size: 0x8)
    class Usvtarget_C* svtarget2;                                                     // 0x0290 (size: 0x8)
    class UParticleSystemComponent* eff_backlightR1;                                  // 0x0298 (size: 0x8)
    class UParticleSystemComponent* eff_backlightW2;                                  // 0x02A0 (size: 0x8)
    class UParticleSystemComponent* eff_backlightW1;                                  // 0x02A8 (size: 0x8)
    class UParticleSystemComponent* eff_backlightY2;                                  // 0x02B0 (size: 0x8)
    class UParticleSystemComponent* eff_backlightY1;                                  // 0x02B8 (size: 0x8)
    class UParticleSystemComponent* eff_backlightR2;                                  // 0x02C0 (size: 0x8)
    class UBillboardComponent* backlights;                                            // 0x02C8 (size: 0x8)
    class UParticleSystemComponent* eff_lightsparkL;                                  // 0x02D0 (size: 0x8)
    class UParticleSystemComponent* eff_lightsparkR;                                  // 0x02D8 (size: 0x8)
    class UAudioComponent* audio_lightzapL;                                           // 0x02E0 (size: 0x8)
    class UAudioComponent* audio_lightzapR;                                           // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* module_aircontrol;                                    // 0x02F0 (size: 0x8)
    class UArrowComponent* sitarrow;                                                  // 0x02F8 (size: 0x8)
    class USkeletalMeshComponent* sitkerf;                                            // 0x0300 (size: 0x8)
    class UChildActorComponent* radio;                                                // 0x0308 (size: 0x8)
    class UBoxComponent* radioBox;                                                    // 0x0310 (size: 0x8)
    class UStaticMeshComponent* module_radio;                                         // 0x0318 (size: 0x8)
    class UChildActorComponent* digitalMap;                                           // 0x0320 (size: 0x8)
    class UBillboardComponent* whl;                                                   // 0x0328 (size: 0x8)
    class UBillboardComponent* whr;                                                   // 0x0330 (size: 0x8)
    class UPhysicsConstraintComponent* sus_FL1;                                       // 0x0338 (size: 0x8)
    class UPhysicsConstraintComponent* sus_FR1;                                       // 0x0340 (size: 0x8)
    class UPhysicsConstraintComponent* sus_BL1;                                       // 0x0348 (size: 0x8)
    class UPhysicsConstraintComponent* sus_BR1;                                       // 0x0350 (size: 0x8)
    class UStaticMeshComponent* frontWheel_R;                                         // 0x0358 (size: 0x8)
    class UStaticMeshComponent* frontWheel_L;                                         // 0x0360 (size: 0x8)
    class UStaticMeshComponent* backWheelRoot;                                        // 0x0368 (size: 0x8)
    class UStaticMeshComponent* backWheel_R;                                          // 0x0370 (size: 0x8)
    class UStaticMeshComponent* backWheel_L;                                          // 0x0378 (size: 0x8)
    class UPhysicsConstraintComponent* ax_BL1;                                        // 0x0380 (size: 0x8)
    class UPhysicsConstraintComponent* ax_FL1;                                        // 0x0388 (size: 0x8)
    class UPhysicsConstraintComponent* ax_FR1;                                        // 0x0390 (size: 0x8)
    class UPhysicsConstraintComponent* ax_BR1;                                        // 0x0398 (size: 0x8)
    class UStaticMeshComponent* spareTire;                                            // 0x03A0 (size: 0x8)
    class UBoxComponent* spareTireBox;                                                // 0x03A8 (size: 0x8)
    class UBillboardComponent* Billboard4;                                            // 0x03B0 (size: 0x8)
    class UBoxComponent* tirePoint_BL;                                                // 0x03B8 (size: 0x8)
    class UBoxComponent* tirePoint_BR;                                                // 0x03C0 (size: 0x8)
    class UBoxComponent* tirePoint_FL;                                                // 0x03C8 (size: 0x8)
    class UBoxComponent* tirePoint_FR;                                                // 0x03D0 (size: 0x8)
    class UParticleSystemComponent* eff_atvExhaust;                                   // 0x03D8 (size: 0x8)
    class UAudioComponent* audio_car_drive_start;                                     // 0x03E0 (size: 0x8)
    class UAudioComponent* audio_car_brakeLever;                                      // 0x03E8 (size: 0x8)
    class UAudioComponent* audio_car_start_Cue;                                       // 0x03F0 (size: 0x8)
    class UAudioComponent* audio_car_stop;                                            // 0x03F8 (size: 0x8)
    class UAudioComponent* audio_car_drive_loop;                                      // 0x0400 (size: 0x8)
    class UAudioComponent* audio_car_drive_brake;                                     // 0x0408 (size: 0x8)
    class UAudioComponent* audio_car_turbo;                                           // 0x0410 (size: 0x8)
    class UAudioComponent* audio_car_damage;                                          // 0x0418 (size: 0x8)
    class USceneComponent* Sounds;                                                    // 0x0420 (size: 0x8)
    class UPhysicsConstraintComponent* wheel1Nocollide1;                              // 0x0428 (size: 0x8)
    class UPhysicsConstraintComponent* wheel1Nocollide;                               // 0x0430 (size: 0x8)
    class UStaticMeshComponent* module_floaties;                                      // 0x0438 (size: 0x8)
    class UBillboardComponent* backWheels;                                            // 0x0440 (size: 0x8)
    class UBillboardComponent* unscrewPos;                                            // 0x0448 (size: 0x8)
    class UBoxComponent* container;                                                   // 0x0450 (size: 0x8)
    class UStaticMeshComponent* module_solar;                                         // 0x0458 (size: 0x8)
    class UStaticMeshComponent* module_container;                                     // 0x0460 (size: 0x8)
    class UStaticMeshComponent* module_belt;                                          // 0x0468 (size: 0x8)
    class UStaticMeshComponent* module_front;                                         // 0x0470 (size: 0x8)
    class UStaticMeshComponent* module_bigLights;                                     // 0x0478 (size: 0x8)
    class UBillboardComponent* modulesRoot;                                           // 0x0480 (size: 0x8)
    class USpringArmComponent* lag;                                                   // 0x0488 (size: 0x8)
    class UPhysicsConstraintComponent* ragdollNocollide;                              // 0x0490 (size: 0x8)
    class UBillboardComponent* Billboard2;                                            // 0x0498 (size: 0x8)
    class UBillboardComponent* frontWheels;                                           // 0x04A0 (size: 0x8)
    class UBillboardComponent* back;                                                  // 0x04A8 (size: 0x8)
    class UParticleSystemComponent* eff_beeplight2;                                   // 0x04B0 (size: 0x8)
    class UParticleSystemComponent* eff_beeplight1;                                   // 0x04B8 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x04C0 (size: 0x8)
    class UArrowComponent* potentialMovement;                                         // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* cq_handle;                                            // 0x04D0 (size: 0x8)
    class UArrowComponent* handleAxis;                                                // 0x04D8 (size: 0x8)
    class Usvtarget_C* svtarget1;                                                     // 0x04E0 (size: 0x8)
    class UBoxComponent* Box1;                                                        // 0x04E8 (size: 0x8)
    class UCapsuleComponent* playerHit;                                               // 0x04F0 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x04F8 (size: 0x8)
    class UParticleSystemComponent* eff_carSmoke;                                     // 0x0500 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0508 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0510 (size: 0x8)
    class USpotLightComponent* light_L;                                               // 0x0518 (size: 0x8)
    class USpotLightComponent* light_R;                                               // 0x0520 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0528 (size: 0x8)
    class USpringArmComponent* lagFl;                                                 // 0x0530 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0538 (size: 0x8)
    class USpringArmComponent* lagRot;                                                // 0x0540 (size: 0x8)
    class Ucomp_physicsImpact_C* physicsImpact;                                       // 0x0548 (size: 0x8)
    class UBoxComponent* fuelbox;                                                     // 0x0550 (size: 0x8)
    class UPhysicsConstraintComponent* lockB;                                         // 0x0558 (size: 0x8)
    class UBillboardComponent* tp;                                                    // 0x0560 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0568 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0570 (size: 0x8)
    float driveVolumeTL_a_E86912FC4DB69F18FDB737837ED6E14A;                           // 0x0578 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> driveVolumeTL__Direction_E86912FC4DB69F18FDB737837ED6E14A; // 0x057C (size: 0x1)
    class UTimelineComponent* driveVolumeTL;                                          // 0x0580 (size: 0x8)
    float enginePitchTL_a_92EBC2D349CB07DD15910F9A4780F11E;                           // 0x0588 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> enginePitchTL__Direction_92EBC2D349CB07DD15910F9A4780F11E; // 0x058C (size: 0x1)
    class UTimelineComponent* enginePitchTL;                                          // 0x0590 (size: 0x8)
    float Timeline_0_a_24E1EB0F4FA1A65327FAEF94C3038008;                              // 0x0598 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_24E1EB0F4FA1A65327FAEF94C3038008; // 0x059C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x05A0 (size: 0x8)
    bool input_forward;                                                               // 0x05A8 (size: 0x1)
    bool input_back;                                                                  // 0x05A9 (size: 0x1)
    bool input_right;                                                                 // 0x05AA (size: 0x1)
    bool input_left;                                                                  // 0x05AB (size: 0x1)
    class AmainPlayer_C* Player;                                                      // 0x05B0 (size: 0x8)
    float rotAlpha;                                                                   // 0x05B8 (size: 0x4)
    float torqAlpha;                                                                  // 0x05BC (size: 0x4)
    float Speed;                                                                      // 0x05C0 (size: 0x4)
    class USpotLightComponent* Light;                                                 // 0x05C8 (size: 0x8)
    bool IsDrive;                                                                     // 0x05D0 (size: 0x1)
    bool isDrive_sound;                                                               // 0x05D1 (size: 0x1)
    bool turbo;                                                                       // 0x05D2 (size: 0x1)
    float fuel;                                                                       // 0x05D4 (size: 0x4)
    bool Empty;                                                                       // 0x05D8 (size: 0x1)
    bool Brake;                                                                       // 0x05D9 (size: 0x1)
    float diff_fuel;                                                                  // 0x05DC (size: 0x4)
    bool lights;                                                                      // 0x05E0 (size: 0x1)
    float health;                                                                     // 0x05E4 (size: 0x4)
    bool imp;                                                                         // 0x05E8 (size: 0x1)
    bool brokenn;                                                                     // 0x05E9 (size: 0x1)
    bool input_alt;                                                                   // 0x05EA (size: 0x1)
    float speed_turbo;                                                                // 0x05EC (size: 0x4)
    float speed_default;                                                              // 0x05F0 (size: 0x4)
    bool nitro;                                                                       // 0x05F4 (size: 0x1)
    bool invX;                                                                        // 0x05F5 (size: 0x1)
    bool invY;                                                                        // 0x05F6 (size: 0x1)
    bool isDriven;                                                                    // 0x05F7 (size: 0x1)
    FVector lastloc;                                                                  // 0x05F8 (size: 0xC)
    TArray<class AActor*> hides;                                                      // 0x0608 (size: 0x10)
    FName Key;                                                                        // 0x0618 (size: 0x8)
    class AmainPlayer_C* prevPlayer;                                                  // 0x0620 (size: 0x8)
    bool underwater;                                                                  // 0x0628 (size: 0x1)
    TArray<bool> wheelsOnSurface;                                                     // 0x0630 (size: 0x10)
    bool inWater;                                                                     // 0x0640 (size: 0x1)
    bool floater;                                                                     // 0x0641 (size: 0x1)
    bool trap;                                                                        // 0x0642 (size: 0x1)
    FVector interpVel;                                                                // 0x0644 (size: 0xC)
    TArray<class AkerfurOmega_C*> allKerfuros;                                        // 0x0650 (size: 0x10)
    class AkerfurOmega_C* sittingKerfuro;                                             // 0x0660 (size: 0x8)
    bool zapped;                                                                      // 0x0668 (size: 0x1)
    float airtime;                                                                    // 0x066C (size: 0x4)
    bool IsInAir;                                                                     // 0x0670 (size: 0x1)
    bool landed;                                                                      // 0x0671 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x0678 (size: 0x8)
    float turnForce;                                                                  // 0x0680 (size: 0x4)
    FVector interpTorque;                                                             // 0x0684 (size: 0xC)
    FVector UpVector;                                                                 // 0x0690 (size: 0xC)
    FVector lastVel;                                                                  // 0x069C (size: 0xC)
    FVector previousUpVector;                                                         // 0x06A8 (size: 0xC)
    float prevDot;                                                                    // 0x06B4 (size: 0x4)
    bool isFrontflip;                                                                 // 0x06B8 (size: 0x1)
    bool flipFinished;                                                                // 0x06B9 (size: 0x1)
    bool canDoFlip;                                                                   // 0x06BA (size: 0x1)
    bool Fly;                                                                         // 0x06BB (size: 0x1)
    float lift;                                                                       // 0x06BC (size: 0x4)
    class UMaterialInstanceDynamic* decal_dynmat;                                     // 0x06C0 (size: 0x8)
    class UTexture2D* decalTexture;                                                   // 0x06C8 (size: 0x8)
    TArray<TEnumAsByte<enum_physicalModules::Type>> Modules;                          // 0x06D0 (size: 0x10)
    bool hasBigLights;                                                                // 0x06E0 (size: 0x1)
    bool hasBumper;                                                                   // 0x06E1 (size: 0x1)
    bool selectUpgrades;                                                              // 0x06E2 (size: 0x1)
    float battery;                                                                    // 0x06E4 (size: 0x4)
    FString displaykey_drive;                                                         // 0x06E8 (size: 0x10)
    FString displaykey_dismount;                                                      // 0x06F8 (size: 0x10)
    FString displaykey_brake;                                                         // 0x0708 (size: 0x10)
    FString displaykey_turbo;                                                         // 0x0718 (size: 0x10)
    FString displaykey_light;                                                         // 0x0728 (size: 0x10)
    bool hasSolar;                                                                    // 0x0738 (size: 0x1)
    bool hasBelt;                                                                     // 0x0739 (size: 0x1)
    bool hasContainer;                                                                // 0x073A (size: 0x1)
    class Aprop_inventoryContainer_atv_C* spawnedContainer;                           // 0x0740 (size: 0x8)
    FName containerKey;                                                               // 0x0748 (size: 0x8)
    bool lookAtContainer;                                                             // 0x0750 (size: 0x1)
    FTimerHandle Timer;                                                               // 0x0758 (size: 0x8)
    float UnscrewProgress;                                                            // 0x0760 (size: 0x4)
    class Uui_linearProgress_C* WidgetUnscrew;                                        // 0x0768 (size: 0x8)
    class AmainPlayer_C* playerUseOn;                                                 // 0x0770 (size: 0x8)
    float DeltaSeconds;                                                               // 0x0778 (size: 0x4)
    float energyWaste;                                                                // 0x077C (size: 0x4)
    bool hasGuns;                                                                     // 0x0780 (size: 0x1)
    bool hasFloaties;                                                                 // 0x0781 (size: 0x1)
    TArray<bool> tires;                                                               // 0x0788 (size: 0x10)
    float exhaustForce;                                                               // 0x0798 (size: 0x4)
    TArray<float> tiresDurability;                                                    // 0x07A0 (size: 0x10)
    TArray<float> tiresDirt;                                                          // 0x07B0 (size: 0x10)
    TArray<int32> tiresFixes;                                                         // 0x07C0 (size: 0x10)
    int32 lookAtTire;                                                                 // 0x07D0 (size: 0x4)
    int32 lookAtTireSocket;                                                           // 0x07D4 (size: 0x4)
    float dirt;                                                                       // 0x07D8 (size: 0x4)
    FVector cleanVec;                                                                 // 0x07DC (size: 0xC)
    FVector dirtVel;                                                                  // 0x07E8 (size: 0xC)
    FVector dirtVel_lerp;                                                             // 0x07F4 (size: 0xC)
    bool hasSpareTire;                                                                // 0x0800 (size: 0x1)
    float spareTire_durability;                                                       // 0x0804 (size: 0x4)
    float spareTire_dirt;                                                             // 0x0808 (size: 0x4)
    int32 spareTire_fixes;                                                            // 0x080C (size: 0x4)
    bool LookAtSpareTireBox;                                                          // 0x0810 (size: 0x1)
    bool lookAtSpareTire;                                                             // 0x0811 (size: 0x1)
    class Aprop_atvWheel_C* playersWheel;                                             // 0x0818 (size: 0x8)
    bool hasMap;                                                                      // 0x0820 (size: 0x1)
    bool hasRadio;                                                                    // 0x0821 (size: 0x1)
    bool lookAtRadio;                                                                 // 0x0822 (size: 0x1)
    int32 tirescount;                                                                 // 0x0824 (size: 0x4)
    bool hasAircontrol;                                                               // 0x0828 (size: 0x1)
    bool input_control;                                                               // 0x0829 (size: 0x1)
    FString displaykey_steering;                                                      // 0x0830 (size: 0x10)
    FString displaykey_honk;                                                          // 0x0840 (size: 0x10)
    FString displaykey_zoom;                                                          // 0x0850 (size: 0x10)
    bool hasFly;                                                                      // 0x0860 (size: 0x1)
    bool hasChargedEngine;                                                            // 0x0861 (size: 0x1)
    bool mouseSteering;                                                               // 0x0862 (size: 0x1)
    class Uui_objectUpgrades_C* upgradeUI;                                            // 0x0868 (size: 0x8)
    class AobjectViewer_C* Viewer;                                                    // 0x0870 (size: 0x8)
    TArray<FName> upgradesNames;                                                      // 0x0878 (size: 0x10)
    bool april1st;                                                                    // 0x0888 (size: 0x1)
    bool has_alternator;                                                              // 0x0889 (size: 0x1)
    bool bodyIsOnTheGround;                                                           // 0x088A (size: 0x1)
    TArray<uint8> tiresTypes;                                                         // 0x0890 (size: 0x10)
    bool skipTireUpdate;                                                              // 0x08A0 (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ignoreSave(bool& ignoreSave);
    void skipPreDelete(bool& Skip);
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
    void skipRadial(bool& Skip);
    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void setPath(const TArray<FVector>& Path, bool& return);
    void getOnlyKey(FName& Key);
    void processKeys(bool& return);
    void canBeUsedHold(bool& return);
    void GetKey(FName& Key);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
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
    FName getDefaultContainerName();
    void wheelTypeToMesh(uint8 Type, uint8 Position);
    void setWheelsType();
    bool isDown();
    void checkIfRunout();
    void updBattery();
    class UPrimitiveComponent* getUnscrewSpawn();
    class UStaticMeshComponent* getTire(int32 Index);
    void findTire(class USceneComponent* Component, int32& Index);
    void Upd Lights();
    void defaultTireLocations(FVector& FR, FVector& FL, FVector& BR, FVector& BL);
    void updSpareTire();
    void diretTire(int32 Index, class UPrimitiveComponent* wheel, float dirt);
    void updDirt();
    void putTire(int32 Index, class Aprop_atvWheel_C* wheelObject);
    void sound_tireDamage(class USceneComponent* Target);
    void processTire(int32 Index, class UPrimitiveComponent* Component, FVector impact);
    void ejectWheel(int32 Index, class UPrimitiveComponent* Component);
    void updTires();
    void createContainer();
    void takeOffUpgrade(class AmainPlayer_C* Player, FName Name);
    float getBumperMult(FVector A);
    void updUpgrades();
    void setBrake();
    void setFrontWheelsOrientation(float A);
    void vehicleGetParts(FVector& body_location, FRotator& body_rotation, FVector& frontRight_location, FRotator& frontRight_rotation, FVector& frontLeft_location, FRotator& frontLeftrotation, FVector& back_location, FRotator& back_rotation);
    void teleportVehicleAdvanced(FVector body_location, FRotator body_rotation, FVector frontRight_location, FRotator frontRight_rotation, FVector frontLeft_location, FRotator frontLeft_rotation, FVector back_location, FRotator back_rotation);
    void regenConstraints();
    void checkAirtime();
    void addCamRot(float Pitch, float Yaw);
    void applyWheelTorque();
    void fuelUp(class Aprop_gascan_C* InputPin, bool& fueled);
    void setSett(const Fstruct_settings1& sttruct_settings);
    void driven();
    void dismounted();
    void updHealth();
    void teleportVehicle(FVector NewLocation, FRotator NewRotation);
    void runout();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void enginePitchTL__FinishedFunc();
    void enginePitchTL__UpdateFunc();
    void driveVolumeTL__FinishedFunc();
    void driveVolumeTL__UpdateFunc();
    void InpActEvt_atv_zoom_K2Node_InputActionEvent_24(FKey Key);
    void InpActEvt_atv_zoom_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_atv_brake_K2Node_InputActionEvent_22(FKey Key);
    void InpActEvt_atv_fall_K2Node_InputActionEvent_21(FKey Key);
    void InpActEvt_atv_use_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_rotate_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_rotate_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_atv_viewSteering_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_atv_viewSteering_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_atv_honk_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_atv_honk_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_atv_turbo_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_atv_turbo_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_atv_left_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_atv_left_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_atv_right_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_atv_right_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_atv_back_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_atv_back_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_atv_forward_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_atv_forward_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_atv_lights_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_fire_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_fire_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_dismount_K2Node_InputActionEvent_0(FKey Key);
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
    void BndEvt__fuelbox_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void unbrake();
    void unzoom();
    void f_brake();
    void playerUsedOn_delay(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void playerUnsit(class AmainPlayer_C* Player);
    void enterWaterOrigin(class AwaterVolume_C* Water);
    void leaveWaterOrigin(class AwaterVolume_C* Water);
    void enterWater(class AwaterVolume_C* Water);
    void leaveWater(class AwaterVolume_C* Water);
    void fainted();
    void enteredTheWater();
    void exitTheWater();
    void loadBrake();
    void BndEvt__car1_backWheelRoot_K2Node_ComponentBoundEvent_2_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void alarm();
    void playerSit(class AmainPlayer_C* Player);
    void BndEvt__car1_frontWheelRoot_K2Node_ComponentBoundEvent_3_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void insertBattery(class AmainPlayer_C* Player, class Aprop_batts_C* battery);
    void hookTension(class Ahook_C* hook);
    void crafted();
    void BndEvt__car1_frontWheel_R_K2Node_ComponentBoundEvent_4_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void hooked(class Ahook_C* hook);
    void attemptIgnite();
    void slice(bool clean);
    void bitten(class AmainPlayer_C* Player);
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void playerLookAway(class AmainPlayer_C* Player);
    void stepped(float Volume, FVector Location);
    void accumulateTemperature(float Temperature, float Speed, float DeltaTime);
    void addTemperature(float Temperature);
    void microwaveElec();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void sawSound();
    void unscrewPanel(class UPrimitiveComponent* spawnAt);
    void resetUnscrew();
    void BndEvt__car1_backWheel_L_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__car1_backWheel_R_K2Node_ComponentBoundEvent_5_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void damageWheel(int32 Index, float Damage, class UPrimitiveComponent* Component);
    void playerHandAnyKey(class AmainPlayer_C* Player, FKey Key, bool Pressed);
    void cleanSponge(float clean, class AmainPlayer_C* Player, class Aprop_sponge_C* sponge, FHitResult Hit);
    void makeDirtTire(int32 Index, float Damage, class UPrimitiveComponent* Component);
    void playerHandMouse(class AmainPlayer_C* Player, FVector2D Mouse);
    void playerHandMouseWheel(class AmainPlayer_C* Player, float wheelDelta);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void extinguishFire();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void airtimeTimer();
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void microwave(class Aprop_microwave_C* microwave);
    void ignite(float fuel);
    void HitActor(class AActor* SelfActor, class AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);
    void explode(FVector fullBody);
    void fireDamage(float Damage);
    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void unhook();
    void digUp();
    void physPreDestroyed();
    void physDestroyed();
    void impulse(FVector Value);
    void BndEvt__car1_Capsule_K2Node_ComponentBoundEvent_6_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void BndEvt__mesh_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void simulate_turbo(bool Pressed);
    void setKey(FName Key);
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void virus(bool Activate);
    void eaten(class AmainPlayer_C* Player);
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void impactSquishCPP(class UPrimitiveComponent* Component);
    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void setIgnoreSave(bool ignore);
    void intComs_triggerSnow(bool isSnow);
    void intComs_gamemodePostKeys();
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void loadLights();
    void unturbo();
    void InpAxisEvt_mouseY_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_mouseX_K2Node_InputAxisEvent_0(float AxisValue);
    void intComs_gamemodeBeginPlay();
    void wakeup();
    void intComs_applyColor(FLinearColor Color);
    void intComs_propRenderer_finishProps();
    void ReceiveBeginPlay();
    void atvBlink();
    void intComs_gamemodeMakeKeys();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodePreLoad();
    void intComs_unfocused();
    void intComs_unfoc();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_signalSaved();
    void intComs_signalDeleted();
    void sendName(FName Name);
    void kicked(bool kick);
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void driveDetached();
    void reachedByLightning(class AlightningStrike_C* lightning);
    void crowbarOpen(class ApryingCrowbar_C* pryingCrowbar);
    void driveBrokenNearby(class Aprop_drive_C* drive);
    void craftDepleted(class Aprop_workbench_C* workbench);
    void lookedAt(class AmainPlayer_C* Player, FHitResult HitResult, class UPrimitiveComponent* lookAtComponent);
    void sendTag(FName Tag);
    void padlock_unlock(class Aprop_padlock_C* padlock);
    void padlock_lock(class Aprop_padlock_C* padlock);
    void ReceiveTick(float DeltaSeconds);
    void dismount();
    void upgradeTake(FName Item);
    void ActionName(class AmainPlayer_C* Player, FHitResult Hit, FString Name);
    void sound_drive();
    void ExecuteUbergraph_ATV(int32 EntryPoint);
}; // Size: 0x8A1

#endif
