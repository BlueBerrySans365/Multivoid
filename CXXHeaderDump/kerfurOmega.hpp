#ifndef UE4SS_SDK_kerfurOmega_HPP
#define UE4SS_SDK_kerfurOmega_HPP

class AkerfurOmega_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* vis;                                                  // 0x04C8 (size: 0x8)
    class UCapsuleComponent* HitBox;                                                  // 0x04D0 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x04D8 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x04E0 (size: 0x8)
    class UParticleSystemComponent* eff_lifeBelly;                                    // 0x04E8 (size: 0x8)
    class UPointLightComponent* lifeLight;                                            // 0x04F0 (size: 0x8)
    class UParticleSystemComponent* eff_lifeNeck;                                     // 0x04F8 (size: 0x8)
    class UParticleSystemComponent* eff_lifeFoot_L;                                   // 0x0500 (size: 0x8)
    class UParticleSystemComponent* eff_lifeFoot_R;                                   // 0x0508 (size: 0x8)
    class UParticleSystemComponent* eff_lifeLeg_L;                                    // 0x0510 (size: 0x8)
    class UParticleSystemComponent* eff_lifeLeg_R;                                    // 0x0518 (size: 0x8)
    class UParticleSystemComponent* eff_lifeThigh_L;                                  // 0x0520 (size: 0x8)
    class UParticleSystemComponent* eff_lifeThigh_R;                                  // 0x0528 (size: 0x8)
    class UParticleSystemComponent* eff_lifeHand_L;                                   // 0x0530 (size: 0x8)
    class UParticleSystemComponent* eff_lifeHand_R;                                   // 0x0538 (size: 0x8)
    class UParticleSystemComponent* eff_lifeArm_L;                                    // 0x0540 (size: 0x8)
    class UParticleSystemComponent* eff_lifeArm_R;                                    // 0x0548 (size: 0x8)
    class UParticleSystemComponent* eff_lifeShoulder_L;                               // 0x0550 (size: 0x8)
    class UParticleSystemComponent* eff_lifeShoulder_R;                               // 0x0558 (size: 0x8)
    class UArrowComponent* Forward;                                                   // 0x0560 (size: 0x8)
    class UBillboardComponent* grabPivot;                                             // 0x0568 (size: 0x8)
    class UBillboardComponent* grabPivot2;                                            // 0x0570 (size: 0x8)
    class UBillboardComponent* grabPivot1;                                            // 0x0578 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0580 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0588 (size: 0x8)
    class UArrowComponent* meshForw;                                                  // 0x0590 (size: 0x8)
    class USpringArmComponent* meshLag;                                               // 0x0598 (size: 0x8)
    class UChildActorComponent* cam;                                                  // 0x05A0 (size: 0x8)
    class UAudioComponent* kerfurEXE;                                                 // 0x05A8 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x05B0 (size: 0x8)
    float grabAnim_a_703BB32846D7713E5E4213947B567208;                                // 0x05B8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> grabAnim__Direction_703BB32846D7713E5E4213947B567208; // 0x05BC (size: 0x1)
    class UTimelineComponent* grabAnim;                                               // 0x05C0 (size: 0x8)
    TEnumAsByte<enum_kerfurCommand::Type> State;                                      // 0x05C8 (size: 0x1)
    class UObject* moveTo;                                                            // 0x05D0 (size: 0x8)
    class AserverBox_C* server;                                                       // 0x05D8 (size: 0x8)
    bool kill;                                                                        // 0x05E0 (size: 0x1)
    TArray<int32> doneDishes;                                                         // 0x05E8 (size: 0x10)
    class Adish_C* Task;                                                              // 0x05F8 (size: 0x8)
    FString currHash;                                                                 // 0x0600 (size: 0x10)
    int32 currDIsh;                                                                   // 0x0610 (size: 0x4)
    FString report;                                                                   // 0x0618 (size: 0x10)
    class Aprop_camera_good_C* Camera;                                                // 0x0628 (size: 0x8)
    class Agenerator_C* transformer;                                                  // 0x0630 (size: 0x8)
    FVector targetLoc;                                                                // 0x0638 (size: 0xC)
    class AActor* TargetActor;                                                        // 0x0648 (size: 0x8)
    FVector lastMeshLoc;                                                              // 0x0650 (size: 0xC)
    FVector meshVel;                                                                  // 0x065C (size: 0xC)
    float lean;                                                                       // 0x0668 (size: 0x4)
    FRotator floor;                                                                   // 0x066C (size: 0xC)
    bool Animation;                                                                   // 0x0678 (size: 0x1)
    class AActor* holdObject;                                                         // 0x0680 (size: 0x8)
    class UAnimBlueprint_kerfurOmega_regular_C* Anim;                                 // 0x0688 (size: 0x8)
    Fstruct_save holdObjectData;                                                      // 0x0690 (size: 0x100)
    TArray<FString> floppyData;                                                       // 0x0790 (size: 0x10)
    int32 floppyType;                                                                 // 0x07A0 (size: 0x4)
    int32 Type;                                                                       // 0x07A4 (size: 0x4)
    bool remoteControl;                                                               // 0x07A8 (size: 0x1)
    FVector RC_vector;                                                                // 0x07AC (size: 0xC)
    FRotator floor_lerp;                                                              // 0x07B8 (size: 0xC)
    class AkerfusFace_C* face;                                                        // 0x07C8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x07D0 (size: 0x8)
    bool sentient;                                                                    // 0x07D8 (size: 0x1)
    TArray<FName> drip;                                                               // 0x07E0 (size: 0x10)
    TArray<class UStaticMeshComponent*> dripArray;                                    // 0x07F0 (size: 0x10)
    TArray<FName> dripBones;                                                          // 0x0800 (size: 0x10)
    bool hasFloppy;                                                                   // 0x0810 (size: 0x1)
    TArray<FName> gibs;                                                               // 0x0818 (size: 0x10)
    float meow;                                                                       // 0x0828 (size: 0x4)
    TArray<class AserverBox_C*> serverIgnores;                                        // 0x0830 (size: 0x10)
    class AATV_C* occupyCar;                                                          // 0x0840 (size: 0x8)
    bool skipFaceAssign;                                                              // 0x0848 (size: 0x1)
    TSubclassOf<class Aprop_kerfurOmega_C> dropProp;                                  // 0x0850 (size: 0x8)
    class USoundBase* footstepSound;                                                  // 0x0858 (size: 0x8)
    class USkeletalMesh* skinMesh;                                                    // 0x0860 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x0868 (size: 0x8)
    bool isInFleshRoom;                                                               // 0x0870 (size: 0x1)
    float remoteControlSpeed;                                                         // 0x0874 (size: 0x4)
    TArray<Fstruct_kerfurDrip> dripData;                                              // 0x0878 (size: 0x10)
    TArray<class USkeletalMeshComponent*> outfits;                                    // 0x0888 (size: 0x10)
    FString debugjson;                                                                // 0x0898 (size: 0x10)
    Fstruct_save holdObjectData_json;                                                 // 0x08B0 (size: 0x100)
    FName loadedHoldObjectKey;                                                        // 0x09B0 (size: 0x8)
    FName Key;                                                                        // 0x09B8 (size: 0x8)
    int32 floppyReadwrites;                                                           // 0x09C0 (size: 0x4)
    float speed_walk;                                                                 // 0x09C4 (size: 0x4)
    float speed_run;                                                                  // 0x09C8 (size: 0x4)
    class Uui_objectUpgrades_C* upgradeUI;                                            // 0x09D0 (size: 0x8)
    class AobjectViewer_C* Viewer;                                                    // 0x09D8 (size: 0x8)
    bool rendered;                                                                    // 0x09E0 (size: 0x1)
    bool isSpooky;                                                                    // 0x09E1 (size: 0x1)
    int32 halts;                                                                      // 0x09E4 (size: 0x4)
    bool gatheredFloppies;                                                            // 0x09E8 (size: 0x1)
    int32 faceMaterialIndex;                                                          // 0x09EC (size: 0x4)

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
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void canBeUsedHold(bool& return);
    void processKeys(bool& return);
    void getOnlyKey(FName& Key);
    void setPath(const TArray<FVector>& Path, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
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
    void death();
    void setFace();
    void equipItem(class AmainPlayer_C* InputPin);
    void unequipItem(FString InputPin);
    void holdObject_kerf(class AmainPlayer_C* Player, class AActor* Actor);
    void loadHoldItem();
    void attemptMurerfur();
    void getOffCar(bool kill);
    void sitOnCar(class AATV_C* occupyCar);
    void failCar();
    void tryToOccupyCar(class AATV_C* car);
    void updateDrip();
    void makeFace();
    void makeSentient();
    void dropKerfurProp();
    void SetStyle(bool contrcut);
    void RC();
    void TargetLocation(FVector& OutputPin);
    void findTransformer(class Agenerator_C*& Array Element);
    void findTask(class Adish_C*& Output, int32& dish);
    void findBrokenServer(class AserverBox_C*& srv1);
    void UserConstructionScript();
    void grabAnim__FinishedFunc();
    void grabAnim__UpdateFunc();
    void OnFail_EA024D7E432D1840180F16BF6FBD1280(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_EA024D7E432D1840180F16BF6FBD1280(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_686DF02E4BB14E60B0B85BA2BB8C432E(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_686DF02E4BB14E60B0B85BA2BB8C432E(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_1BE7AE2F442743531837EBB77812D378(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_1BE7AE2F442743531837EBB77812D378(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_CDC4B4DC4BDCC9D6C5ED25B54C4FD538(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_CDC4B4DC4BDCC9D6C5ED25B54C4FD538(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_83759E564F481AAD0CE65E8926B6DC6B(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_83759E564F481AAD0CE65E8926B6DC6B(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_3D86A0044F104E17C55A31AAC842E015(FName NotifyName);
    void OnNotifyBegin_3D86A0044F104E17C55A31AAC842E015(FName NotifyName);
    void OnInterrupted_3D86A0044F104E17C55A31AAC842E015(FName NotifyName);
    void OnBlendOut_3D86A0044F104E17C55A31AAC842E015(FName NotifyName);
    void OnCompleted_3D86A0044F104E17C55A31AAC842E015(FName NotifyName);
    void OnNotifyEnd_66CE33D54AFADA773A1C96B1EFEE3284(FName NotifyName);
    void OnNotifyBegin_66CE33D54AFADA773A1C96B1EFEE3284(FName NotifyName);
    void OnInterrupted_66CE33D54AFADA773A1C96B1EFEE3284(FName NotifyName);
    void OnBlendOut_66CE33D54AFADA773A1C96B1EFEE3284(FName NotifyName);
    void OnCompleted_66CE33D54AFADA773A1C96B1EFEE3284(FName NotifyName);
    void OnNotifyEnd_E233AD08424FBDA61025C2915B5291B0(FName NotifyName);
    void OnNotifyBegin_E233AD08424FBDA61025C2915B5291B0(FName NotifyName);
    void OnInterrupted_E233AD08424FBDA61025C2915B5291B0(FName NotifyName);
    void OnBlendOut_E233AD08424FBDA61025C2915B5291B0(FName NotifyName);
    void OnCompleted_E233AD08424FBDA61025C2915B5291B0(FName NotifyName);
    void OnNotifyEnd_1134998B41FB3643E256DC92AFB0D107(FName NotifyName);
    void OnNotifyBegin_1134998B41FB3643E256DC92AFB0D107(FName NotifyName);
    void OnInterrupted_1134998B41FB3643E256DC92AFB0D107(FName NotifyName);
    void OnBlendOut_1134998B41FB3643E256DC92AFB0D107(FName NotifyName);
    void OnCompleted_1134998B41FB3643E256DC92AFB0D107(FName NotifyName);
    void OnNotifyEnd_7AC3DD824D2A2EBB4E59308080CEAB45(FName NotifyName);
    void OnNotifyBegin_7AC3DD824D2A2EBB4E59308080CEAB45(FName NotifyName);
    void OnInterrupted_7AC3DD824D2A2EBB4E59308080CEAB45(FName NotifyName);
    void OnBlendOut_7AC3DD824D2A2EBB4E59308080CEAB45(FName NotifyName);
    void OnCompleted_7AC3DD824D2A2EBB4E59308080CEAB45(FName NotifyName);
    void OnNotifyEnd_17473DEB48DAA32D70BE17B5656A7634(FName NotifyName);
    void OnNotifyBegin_17473DEB48DAA32D70BE17B5656A7634(FName NotifyName);
    void OnInterrupted_17473DEB48DAA32D70BE17B5656A7634(FName NotifyName);
    void OnBlendOut_17473DEB48DAA32D70BE17B5656A7634(FName NotifyName);
    void OnCompleted_17473DEB48DAA32D70BE17B5656A7634(FName NotifyName);
    void OnNotifyEnd_E6FBFE3B4BFD80CBCAB060AEEECBDEA7(FName NotifyName);
    void OnNotifyBegin_E6FBFE3B4BFD80CBCAB060AEEECBDEA7(FName NotifyName);
    void OnInterrupted_E6FBFE3B4BFD80CBCAB060AEEECBDEA7(FName NotifyName);
    void OnBlendOut_E6FBFE3B4BFD80CBCAB060AEEECBDEA7(FName NotifyName);
    void OnCompleted_E6FBFE3B4BFD80CBCAB060AEEECBDEA7(FName NotifyName);
    void OnFail_89CA73914C05883F3C2B2BBD3C9C7709(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_89CA73914C05883F3C2B2BBD3C9C7709(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_7968FCEE4F51A9B01B5CCF8EC99C1A91(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_7968FCEE4F51A9B01B5CCF8EC99C1A91(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void intComs_signalDeleted();
    void intComs_signalSaved();
    void intComs_gamemodeBeginPlay();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_unfoc();
    void intComs_unfocused();
    void intComs_gamemodePreLoad();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodeMakeKeys();
    void intComs_propRenderer_finishProps();
    void intComs_applyColor(FLinearColor Color);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_triggerSnow(bool isSnow);
    void setIgnoreSave(bool ignore);
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
    void microwave(class Aprop_microwave_C* microwave);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void extinguishFire();
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void playerHandMouseWheel(class AmainPlayer_C* Player, float wheelDelta);
    void playerHandMouse(class AmainPlayer_C* Player, FVector2D Mouse);
    void playerHandAnyKey(class AmainPlayer_C* Player, FKey Key, bool Pressed);
    void microwaveElec();
    void addTemperature(float Temperature);
    void accumulateTemperature(float Temperature, float Speed, float DeltaTime);
    void playerLookAway(class AmainPlayer_C* Player);
    void bitten(class AmainPlayer_C* Player);
    void slice(bool clean);
    void hooked(class Ahook_C* hook);
    void crafted();
    void cleanSponge(float clean, class AmainPlayer_C* Player, class Aprop_sponge_C* sponge, FHitResult Hit);
    void hookTension(class Ahook_C* hook);
    void insertBattery(class AmainPlayer_C* Player, class Aprop_batts_C* battery);
    void playerSit(class AmainPlayer_C* Player);
    void playerUnsit(class AmainPlayer_C* Player);
    void playerUsedOn_delay(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void padlock_lock(class Aprop_padlock_C* padlock);
    void padlock_unlock(class Aprop_padlock_C* padlock);
    void sendTag(FName Tag);
    void lookedAt(class AmainPlayer_C* Player, FHitResult HitResult, class UPrimitiveComponent* lookAtComponent);
    void craftDepleted(class Aprop_workbench_C* workbench);
    void driveBrokenNearby(class Aprop_drive_C* drive);
    void crowbarOpen(class ApryingCrowbar_C* pryingCrowbar);
    void reachedByLightning(class AlightningStrike_C* lightning);
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
    void move(bool moveServ);
    void moveToServ();
    void findServer();
    void ActionName(class AmainPlayer_C* Player, FHitResult Hit, FString Name);
    void doTask();
    void ReceiveBeginPlay();
    void checkDoor();
    void goTransfo();
    void ReceiveTick(float DeltaSeconds);
    void grabAnimation(bool Forward);
    void ReceiveDestroyed();
    void dropObject();
    void Dest(class AActor* DestroyedActor);
    void stepped(float Volume, FVector Location);
    void makeMeow();
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void step(FVector Location);
    void ignite(float fuel);
    void attemptIgnite();
    void startKill();
    void bindedHoldObject();
    void upgradeTake(FName Item);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void timer_face();
    void spookymove();
    void timer_kerf();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_gamemodePostKeys();
    void ExecuteUbergraph_kerfurOmega(int32 EntryPoint);
}; // Size: 0x9F0

#endif
