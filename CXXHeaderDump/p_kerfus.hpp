#ifndef UE4SS_SDK_p_kerfus_HPP
#define UE4SS_SDK_p_kerfus_HPP

class Ap_kerfus_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UChildActorComponent* wheel;                                                // 0x03B0 (size: 0x8)
    class UAudioComponent* kerfurJump;                                                // 0x03B8 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* wheelAttach;                                          // 0x03C8 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x03D0 (size: 0x8)
    class UChildActorComponent* cam;                                                  // 0x03D8 (size: 0x8)
    class UArrowComponent* doorStuck;                                                 // 0x03E0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x03E8 (size: 0x8)
    class UAudioComponent* Roll;                                                      // 0x03F0 (size: 0x8)
    class UAudioComponent* meow;                                                      // 0x03F8 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0400 (size: 0x8)
    float jumpTimeline_a_2A1C3D6A4B6561682874F184D7A1417C;                            // 0x0408 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> jumpTimeline__Direction_2A1C3D6A4B6561682874F184D7A1417C; // 0x040C (size: 0x1)
    class UTimelineComponent* jumpTimeline;                                           // 0x0410 (size: 0x8)
    class UPrimitiveComponent* bodyCOmponent;                                         // 0x0418 (size: 0x8)
    FVector Target_0;                                                                 // 0x0420 (size: 0xC)
    class UPrimitiveComponent* wheelComponent;                                        // 0x0430 (size: 0x8)
    float P;                                                                          // 0x0438 (size: 0x4)
    float S;                                                                          // 0x043C (size: 0x4)
    float dirr;                                                                       // 0x0440 (size: 0x4)
    class AActor* moveTo;                                                             // 0x0448 (size: 0x8)
    bool doingTask;                                                                   // 0x0450 (size: 0x1)
    class AserverBox_C* servFix;                                                      // 0x0458 (size: 0x8)
    bool Active;                                                                      // 0x0460 (size: 0x1)
    float powUpright;                                                                 // 0x0464 (size: 0x4)
    bool wall;                                                                        // 0x0468 (size: 0x1)
    class APawn* Pawn;                                                                // 0x0470 (size: 0x8)
    bool searching;                                                                   // 0x0478 (size: 0x1)
    class AkerfusFace_C* face;                                                        // 0x0480 (size: 0x8)
    FVector wheelTorque;                                                              // 0x0488 (size: 0xC)
    class Aprop_camera_good_C* Camera;                                                // 0x0498 (size: 0x8)
    int32 Type;                                                                       // 0x04A0 (size: 0x4)
    FVector possessLoc;                                                               // 0x04A4 (size: 0xC)
    int32 pets;                                                                       // 0x04B0 (size: 0x4)
    float meowPitch;                                                                  // 0x04B4 (size: 0x4)
    class Acord_C* objCord1;                                                          // 0x04B8 (size: 0x8)
    float energy;                                                                     // 0x04C0 (size: 0x4)
    bool charging;                                                                    // 0x04C4 (size: 0x1)
    bool remoteControl;                                                               // 0x04C5 (size: 0x1)
    FVector RC_vector;                                                                // 0x04C8 (size: 0xC)
    bool backup;                                                                      // 0x04D4 (size: 0x1)
    float wheelSPeed;                                                                 // 0x04D8 (size: 0x4)
    FVector jump_h;                                                                   // 0x04DC (size: 0xC)
    float jump_f;                                                                     // 0x04E8 (size: 0x4)
    bool IsJumping;                                                                   // 0x04EC (size: 0x1)
    bool debugTurnOn;                                                                 // 0x04ED (size: 0x1)
    class Aprop_kerfurWheel_C* wheelObject;                                           // 0x04F0 (size: 0x8)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void checkPath();
    FVector makeTurn();
    void SetDamping();
    float dtime();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    FVector loccccccc();
    void Possess(FVector possessLoc);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ignoreSave(bool& ignoreSave);
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void canBeUsedHold(bool& return);
    void isButtonUsed(bool& failed);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void noRespawn(bool noRespawn, bool& return);
    void canPickup(bool& return);
    void asProp(class Aprop_C*& return);
    void canBePutInContainer(bool& return);
    void upd(bool skipFace);
    void findBrokenServer();
    class AActor* TargetActor(FVector& possessLoc);
    void jumpTimeline__FinishedFunc();
    void jumpTimeline__UpdateFunc();
    void jumpTimeline__jump__EventFunc();
    void OnNotifyEnd_B4D86F6844FB2B9300F777A94A2F493A(FName NotifyName);
    void OnNotifyBegin_B4D86F6844FB2B9300F777A94A2F493A(FName NotifyName);
    void OnInterrupted_B4D86F6844FB2B9300F777A94A2F493A(FName NotifyName);
    void OnBlendOut_B4D86F6844FB2B9300F777A94A2F493A(FName NotifyName);
    void OnCompleted_B4D86F6844FB2B9300F777A94A2F493A(FName NotifyName);
    void OnMoveFinished_B05A0B444B7E9787DBA4D5B18E6421E7(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    void OnRequestFailed_B05A0B444B7E9787DBA4D5B18E6421E7();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Task();
    void ReceiveDestroyed();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void meowAnim();
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void possessTimer();
    void ActionName(class AmainPlayer_C* Player, FHitResult Hit, FString Name);
    void crafted();
    void Jump();
    void checkJump();
    void exitTheWater();
    void leaveWater(class AwaterVolume_C* Water);
    void RCjump();
    void movePawnTo();
    void updatePath();
    void animJump();
    void enterWater(class AwaterVolume_C* Water);
    void enteredTheWater();
    void intComs_gamemodeBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_p_kerfus(int32 EntryPoint);
}; // Size: 0x4F8

#endif
