#ifndef UE4SS_SDK_murderKerfur_HPP
#define UE4SS_SDK_murderKerfur_HPP

class AmurderKerfur_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* Billboard1;                                            // 0x0370 (size: 0x8)
    class USphereComponent* sightRange;                                               // 0x0378 (size: 0x8)
    class USphereComponent* veh;                                                      // 0x0380 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0388 (size: 0x8)
    class UAudioComponent* murderfurVoice_cue;                                        // 0x0390 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x0398 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* murderfur_st1;                                        // 0x03A8 (size: 0x8)
    class UAudioComponent* murderfurThemePlaceholder;                                 // 0x03B0 (size: 0x8)
    class USphereComponent* noSave;                                                   // 0x03B8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x03C0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x03C8 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x03D0 (size: 0x8)
    class USphereComponent* attackSphere;                                             // 0x03D8 (size: 0x8)
    class UAudioComponent* Roll;                                                      // 0x03E0 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x03E8 (size: 0x8)
    class UArrowComponent* doorStuck;                                                 // 0x03F0 (size: 0x8)
    class UChildActorComponent* wheel;                                                // 0x03F8 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0400 (size: 0x8)
    float light_a_F1286C1341F5DA5C91610CB958AE2826;                                   // 0x0408 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> light__Direction_F1286C1341F5DA5C91610CB958AE2826; // 0x040C (size: 0x1)
    class UTimelineComponent* Light;                                                  // 0x0410 (size: 0x8)
    float mus_a_17CCC79C402BAC3723AE9791B7730586;                                     // 0x0418 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> mus__Direction_17CCC79C402BAC3723AE9791B7730586; // 0x041C (size: 0x1)
    class UTimelineComponent* mus;                                                    // 0x0420 (size: 0x8)
    float Timeline_1_a_FE0524D544F7289FB2827487F671912D;                              // 0x0428 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_FE0524D544F7289FB2827487F671912D; // 0x042C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0430 (size: 0x8)
    float Timeline_0_a_3FD169314E84DB4BFB10A1B8190E8CD6;                              // 0x0438 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3FD169314E84DB4BFB10A1B8190E8CD6; // 0x043C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0440 (size: 0x8)
    float a_a_BB102AB74E03E9B5E223F7B218DC3A83;                                       // 0x0448 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_BB102AB74E03E9B5E223F7B218DC3A83; // 0x044C (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0450 (size: 0x8)
    class UPrimitiveComponent* bodyCOmponent;                                         // 0x0458 (size: 0x8)
    FVector Target_0;                                                                 // 0x0460 (size: 0xC)
    class UPrimitiveComponent* wheelComponent;                                        // 0x0470 (size: 0x8)
    float P;                                                                          // 0x0478 (size: 0x4)
    float S;                                                                          // 0x047C (size: 0x4)
    float dirr;                                                                       // 0x0480 (size: 0x4)
    class AActor* moveTo;                                                             // 0x0488 (size: 0x8)
    bool Active;                                                                      // 0x0490 (size: 0x1)
    float powUpright;                                                                 // 0x0494 (size: 0x4)
    bool wall;                                                                        // 0x0498 (size: 0x1)
    class AkerfusPawn_C* Pawn;                                                        // 0x04A0 (size: 0x8)
    FVector wheelTorque;                                                              // 0x04A8 (size: 0xC)
    bool Anim;                                                                        // 0x04B4 (size: 0x1)
    int32 pathIndex;                                                                  // 0x04B8 (size: 0x4)
    class UObject* prevPath;                                                          // 0x04C0 (size: 0x8)
    class UNavigationPath* navpath;                                                   // 0x04C8 (size: 0x8)
    TArray<FName> Drop;                                                               // 0x04D0 (size: 0x10)
    class AActor* overlapped;                                                         // 0x04E0 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x04E8 (size: 0x10)
    bool backup;                                                                      // 0x04F8 (size: 0x1)
    float wheelSPeed;                                                                 // 0x04FC (size: 0x4)
    bool IsJumping;                                                                   // 0x0500 (size: 0x1)
    float animAlpha;                                                                  // 0x0504 (size: 0x4)
    int32 stage;                                                                      // 0x0508 (size: 0x4)
    int32 initInd;                                                                    // 0x050C (size: 0x4)
    float pwr;                                                                        // 0x0510 (size: 0x4)
    class AmainPlayer_C* playerIn;                                                    // 0x0518 (size: 0x8)
    int32 stage_changer;                                                              // 0x0520 (size: 0x4)
    float upright;                                                                    // 0x0524 (size: 0x4)
    bool inEvent;                                                                     // 0x0528 (size: 0x1)
    bool wasPlayerDamaged;                                                            // 0x0529 (size: 0x1)
    class AActor* spikeAt;                                                            // 0x0530 (size: 0x8)
    TEnumAsByte<ETimelineDirection::Type> dir;                                        // 0x0538 (size: 0x1)
    bool spikeMoved;                                                                  // 0x0539 (size: 0x1)
    bool combat;                                                                      // 0x053A (size: 0x1)
    bool targetPlayer;                                                                // 0x053B (size: 0x1)
    bool instantSpawn;                                                                // 0x053C (size: 0x1)
    int32 zeroValocityTimer;                                                          // 0x0540 (size: 0x4)
    bool isSetPathPoint;                                                              // 0x0544 (size: 0x1)
    FVector pathPoint;                                                                // 0x0548 (size: 0xC)
    bool pathReady;                                                                   // 0x0554 (size: 0x1)
    FVector stuckPoint;                                                               // 0x0558 (size: 0xC)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void SetDamping();
    void getSettings();
    FRotator rotateSpike(class AActor*& OutputPin);
    void openDoors();
    void updStage();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    FVector loccccccc();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void GetKey(FName& Key);
    void canBeUsedHold(bool& return);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
    void a__FinishedFunc();
    void a__UpdateFunc();
    void a__damage__EventFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_0__damage__EventFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_1__damage__EventFunc();
    void mus__FinishedFunc();
    void mus__UpdateFunc();
    void light__FinishedFunc();
    void light__UpdateFunc();
    void runTrigger(class AActor* Owner, int32 Index);
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void BndEvt__murderKerfur_attackSphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void recalcPathInd();
    void broken();
    void broken_fire();
    void prepareJump();
    void attemptJump();
    void spark();
    void attack(class AActor* spikeAt, FRotator NewRotation);
    void findPath(FString Reason);
    void BndEvt__murderKerfur_noSave_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__murderKerfur_noSave_K2Node_ComponentBoundEvent_2_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void themeFadein(bool FadeIn);
    void stunned();
    void stage3Spray();
    void Voice();
    void playerDamaged();
    void fireDamage(float Damage);
    void exitTheWater();
    void leaveWater(class AwaterVolume_C* Water);
    void enterWater(class AwaterVolume_C* Water);
    void enteredTheWater();
    void timer_detect();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_murderKerfur(int32 EntryPoint);
}; // Size: 0x564

#endif
