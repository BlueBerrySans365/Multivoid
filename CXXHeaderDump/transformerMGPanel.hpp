#ifndef UE4SS_SDK_transformerMGPanel_HPP
#define UE4SS_SDK_transformerMGPanel_HPP

class AtransformerMGPanel_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* eff_hoverover_slider;                             // 0x0228 (size: 0x8)
    class UBoxComponent* boxSlider;                                                   // 0x0230 (size: 0x8)
    class UArrowComponent* sliderPlane;                                               // 0x0238 (size: 0x8)
    class UStaticMeshComponent* slider_amp;                                           // 0x0240 (size: 0x8)
    class USceneComponent* sliderBase;                                                // 0x0248 (size: 0x8)
    class UAudioComponent* audio_rotator;                                             // 0x0250 (size: 0x8)
    class UAudioComponent* audio_switch;                                              // 0x0258 (size: 0x8)
    class USceneComponent* batch_switches;                                            // 0x0260 (size: 0x8)
    class USceneComponent* batch_rotators;                                            // 0x0268 (size: 0x8)
    class UStaticMeshComponent* knobTop_offset;                                       // 0x0270 (size: 0x8)
    class UStaticMeshComponent* knobBottom_freq;                                      // 0x0278 (size: 0x8)
    class UBoxComponent* useBox;                                                      // 0x0280 (size: 0x8)
    class UArrowComponent* look;                                                      // 0x0288 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0290 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0298 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x02A0 (size: 0x8)
    class Uuiwindow_transformerScreens_C* widgetInst;                                 // 0x02A8 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x02B0 (size: 0x8)
    TArray<class UPrimitiveComponent*> buttons_rotators;                              // 0x02B8 (size: 0x10)
    TArray<class UPrimitiveComponent*> buttons_switches;                              // 0x02C8 (size: 0x10)
    TArray<bool> switches_states;                                                     // 0x02D8 (size: 0x10)
    TArray<uint8> rotators_states;                                                    // 0x02E8 (size: 0x10)
    bool isMoving;                                                                    // 0x02F8 (size: 0x1)
    int32 sine_offset;                                                                // 0x02FC (size: 0x4)
    int32 sine_frequency;                                                             // 0x0300 (size: 0x4)
    int32 sine_amplitude;                                                             // 0x0304 (size: 0x4)
    bool button_knobTop;                                                              // 0x0308 (size: 0x1)
    bool button_knobBottom;                                                           // 0x0309 (size: 0x1)
    bool button_knobSlider;                                                           // 0x030A (size: 0x1)
    class UMaterialInstanceDynamic* dynmat_sine;                                      // 0x0310 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_bar_sine;                                  // 0x0318 (size: 0x8)
    int32 targetSine_offset;                                                          // 0x0320 (size: 0x4)
    int32 targetSine_frequency;                                                       // 0x0324 (size: 0x4)
    int32 targetSine_amplitude;                                                       // 0x0328 (size: 0x4)
    float sineOffsetDiff;                                                             // 0x032C (size: 0x4)
    float sineFrequencyDIff;                                                          // 0x0330 (size: 0x4)
    float sineAmplitudeDIff;                                                          // 0x0334 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_barSwitches;                               // 0x0338 (size: 0x8)
    FVector Loc;                                                                      // 0x0340 (size: 0xC)
    uint8 switches_target;                                                            // 0x034C (size: 0x1)
    uint8 switchesBitsToBytes;                                                        // 0x034D (size: 0x1)
    TArray<bool> compareArray;                                                        // 0x0350 (size: 0x10)
    bool isSineComplete;                                                              // 0x0360 (size: 0x1)
    bool isRotatorsComplete;                                                          // 0x0361 (size: 0x1)
    bool isSwitchesComplete;                                                          // 0x0362 (size: 0x1)
    float sineResult;                                                                 // 0x0364 (size: 0x4)
    TArray<Fstruct_generatorRotator> rotators_colorGrid;                              // 0x0368 (size: 0x10)
    TArray<Fstruct_generatorRotator> defaultCol;                                      // 0x0378 (size: 0x10)
    TArray<uint8> defaultColors;                                                      // 0x0388 (size: 0x10)
    TEnumAsByte<enum_difficulty::Type> difficulty;                                    // 0x0398 (size: 0x1)
    class Agenerator_C* transformer;                                                  // 0x03A0 (size: 0x8)
    float switchesMatch;                                                              // 0x03A8 (size: 0x4)
    FString lookatText;                                                               // 0x03B0 (size: 0x10)
    bool initiated;                                                                   // 0x03C0 (size: 0x1)
    bool isSlider;                                                                    // 0x03C1 (size: 0x1)
    int32 knobRotDiff;                                                                // 0x03C4 (size: 0x4)
    bool hover_knobTop;                                                               // 0x03C8 (size: 0x1)
    bool hover_knobBottom;                                                            // 0x03C9 (size: 0x1)
    bool hover_knobSlider;                                                            // 0x03CA (size: 0x1)
    int32 buttonUnderCursor;                                                          // 0x03CC (size: 0x4)
    int32 buttonUnderCursor_check;                                                    // 0x03D0 (size: 0x4)
    TArray<class UPrimitiveComponent*> buttonsHoverOver;                              // 0x03D8 (size: 0x10)
    class UPrimitiveComponent* buttonHoverOver;                                       // 0x03E8 (size: 0x8)
    class UPrimitiveComponent* buttonHoverOver_check;                                 // 0x03F0 (size: 0x8)
    TArray<Fstruct_generatorRotator> rotators_blank;                                  // 0x03F8 (size: 0x10)

    void lightningInfluence(bool& influence, float& Multiplier);
    void ignoreHook(bool& ignore);
    void overlayBoyancy(bool& Overlay, float& boyancy);
    void crematorTimeMultiplier(float& mult);
    void crematorAction(bool& Action);
    void wallFixer_fix(class Aprop_wallfixer_C* wallFixer, bool& return);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void canBeUsedHold(bool& return);
    void processKeys(bool& return);
    void getOnlyKey(FName& Key);
    void setPath(const TArray<FVector>& Path, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void skipRadial(bool& Skip);
    void getPriceMultiplier(float& priceMult);
    void isNotSawable(bool& return);
    void toolboxCanFix(bool& return);
    void toolboxFixTime(float& Time);
    void canHit(bool& noHit);
    void getUpgradesList(TArray<FName>& Items);
    void switchToHeavyDrag(bool& isHeavy);
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
    void findButtonUnderCursor();
    void addVal(int32 Add, int32 var);
    void initiate();
    void updateAll();
    void playTick();
    void randomizeSines();
    void randomizeValues();
    void initValues();
    void checkColors(bool& solved);
    void rotateColor(Fstruct_generatorRotator In, uint8 Turn, Fstruct_generatorRotator& OutputPin);
    void removeColors(TArray<uint8>& Colors, TArray<uint8>& colorsOut);
    void assignRandomColors(Fstruct_generatorRotator& In, TArray<uint8>& Rand, Fstruct_generatorRotator& Out);
    void returnColorsExcept(bool Top, bool Right, bool Bottom, bool Left, TArray<uint8>& colorsOut);
    void solveColorGrid();
    void byteToColor(uint8 Byte, class UMaterialInstance*& Mat);
    FRotator getSwitchRot(bool bPickA);
    void setSwitches();
    void setRotators();
    FRotator getKnobRot(uint8 Index);
    void randomizeTargets();
    void setKnobs();
    void Init();
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
    void exitInterface();
    void assign();
    void microwave(class Aprop_microwave_C* microwave);
    void clicked_rotataors(class UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);
    void ignite(float fuel);
    void clicked_switchers(class UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);
    void moveSwitch(int32 Index);
    void moveRotator(int32 Index);
    void BndEvt__transformerMGPanel_knobBottom_K2Node_ComponentBoundEvent_0_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);
    void BndEvt__transformerMGPanel_knobTop_K2Node_ComponentBoundEvent_2_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);
    void scrollUp();
    void scrollDown();
    void kicked(bool kick);
    void fireDamage(float Damage);
    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void unhook();
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void digUp();
    void driveDetached();
    void physPreDestroyed();
    void reachedByLightning(class AlightningStrike_C* lightning);
    void physDestroyed();
    void crowbarOpen(class ApryingCrowbar_C* pryingCrowbar);
    void setKey(FName Key);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void driveBrokenNearby(class Aprop_drive_C* drive);
    void craftDepleted(class Aprop_workbench_C* workbench);
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void virus(bool Activate);
    void eaten(class AmainPlayer_C* Player);
    void lookedAt(class AmainPlayer_C* Player, FHitResult HitResult, class UPrimitiveComponent* lookAtComponent);
    void leaveWaterOrigin(class AwaterVolume_C* Water);
    void sendTag(FName Tag);
    void enterWaterOrigin(class AwaterVolume_C* Water);
    void padlock_unlock(class Aprop_padlock_C* padlock);
    void padlock_lock(class Aprop_padlock_C* padlock);
    void leaveWater(class AwaterVolume_C* Water);
    void enterWater(class AwaterVolume_C* Water);
    void upgradeTake(FName Item);
    void playerUsedOn_delay(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void playerUnsit(class AmainPlayer_C* Player);
    void playerSit(class AmainPlayer_C* Player);
    void insertBattery(class AmainPlayer_C* Player, class Aprop_batts_C* battery);
    void hookTension(class Ahook_C* hook);
    void cleanSponge(float clean, class AmainPlayer_C* Player, class Aprop_sponge_C* sponge, FHitResult Hit);
    void crafted();
    void BndEvt__transformerMGPanel_slider_K2Node_ComponentBoundEvent_4_ComponentOnClickedSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent, FKey ButtonPressed);
    void sendName(FName Name);
    void releaseSlider();
    void lmb(bool Pressed);
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void hooked(class Ahook_C* hook);
    void mov(bool set);
    void attemptIgnite();
    void exitFromWidget();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void BndEvt__transformerMGPanel_boxSlider_K2Node_ComponentBoundEvent_1_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
    void BndEvt__transformerMGPanel_boxSlider_K2Node_ComponentBoundEvent_3_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
    void BndEvt__transformerMGPanel_knobBottom_K2Node_ComponentBoundEvent_5_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
    void BndEvt__transformerMGPanel_knobBottom_K2Node_ComponentBoundEvent_6_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
    void BndEvt__transformerMGPanel_knobTop_K2Node_ComponentBoundEvent_7_ComponentBeginCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
    void BndEvt__transformerMGPanel_knobTop_K2Node_ComponentBoundEvent_8_ComponentEndCursorOverSignature__DelegateSignature(class UPrimitiveComponent* TouchedComponent);
    void mouseDelta(float Delta);
    void playerscrollUp();
    void playerscrollDown();
    void ReceiveTick(float DeltaSeconds);
    void slice(bool clean);
    void bitten(class AmainPlayer_C* Player);
    void reachedByExplosion(FVector Location, float Damage, class Aexplosion_C* explosion);
    void playerLookAway(class AmainPlayer_C* Player);
    void stepped(float Volume, FVector Location);
    void ActionName(class AmainPlayer_C* Player, FHitResult Hit, FString Name);
    void accumulateTemperature(float Temperature, float Speed, float DeltaTime);
    void addTemperature(float Temperature);
    void microwaveElec();
    void playerHandAnyKey(class AmainPlayer_C* Player, FKey Key, bool Pressed);
    void playerHandMouse(class AmainPlayer_C* Player, FVector2D Mouse);
    void playerHandMouseWheel(class AmainPlayer_C* Player, float wheelDelta);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void extinguishFire();
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void ExecuteUbergraph_transformerMGPanel(int32 EntryPoint);
}; // Size: 0x408

#endif
