#ifndef UE4SS_SDK_mainPlayer_HPP
#define UE4SS_SDK_mainPlayer_HPP

class AmainPlayer_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UPostProcessComponent* PostProcess_overlays_OBSOLETE;                       // 0x04C8 (size: 0x8)
    class USpringArmComponent* cameraLag;                                             // 0x04D0 (size: 0x8)
    class UParticleSystemComponent* eff_underwaterDirt;                               // 0x04D8 (size: 0x8)
    class UBoxComponent* lookatBox;                                                   // 0x04E0 (size: 0x8)
    class UPhysicsConstraintComponent* heavyPull_loc;                                 // 0x04E8 (size: 0x8)
    class UPhysicsConstraintComponent* heavyGrab;                                     // 0x04F0 (size: 0x8)
    class USkeletalMeshComponent* mesh_playerVisible;                                 // 0x04F8 (size: 0x8)
    class UArrowComponent* heavyRot;                                                  // 0x0500 (size: 0x8)
    class UAudioComponent* sndwtmktsts;                                               // 0x0508 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0510 (size: 0x8)
    class UAudioCaptureComponent* mic;                                                // 0x0518 (size: 0x8)
    class UAudioComponent* tinnitus1;                                                 // 0x0520 (size: 0x8)
    class UAudioComponent* startSprint;                                               // 0x0528 (size: 0x8)
    class UCameraComponent* Camera;                                                   // 0x0530 (size: 0x8)
    class UArrowComponent* cameraRoot;                                                // 0x0538 (size: 0x8)
    class UStaticMeshComponent* precMesh_overlap;                                     // 0x0540 (size: 0x8)
    class UStaticMeshComponent* precMesh;                                             // 0x0548 (size: 0x8)
    class UParticleSystemComponent* eff_mdetec;                                       // 0x0550 (size: 0x8)
    class Ucomp_metalDetector_C* comp_metalDetector;                                  // 0x0558 (size: 0x8)
    class UAudioComponent* beep;                                                      // 0x0560 (size: 0x8)
    class Ucomp_emf_C* comp_emf;                                                      // 0x0568 (size: 0x8)
    class USphereComponent* emf_sphere;                                               // 0x0570 (size: 0x8)
    class UBillboardComponent* pmPivot;                                               // 0x0578 (size: 0x8)
    class UAudioComponent* windHeightLoop;                                            // 0x0580 (size: 0x8)
    class UAudioComponent* windFalingLoop;                                            // 0x0588 (size: 0x8)
    class UPostProcessComponent* PostProcess_pl;                                      // 0x0590 (size: 0x8)
    class USceneComponent* foot;                                                      // 0x0598 (size: 0x8)
    class UStaticMeshComponent* wSubmesh;                                             // 0x05A0 (size: 0x8)
    class UStaticMeshComponent* pullComp;                                             // 0x05A8 (size: 0x8)
    class UStaticMeshComponent* pullSubcomp;                                          // 0x05B0 (size: 0x8)
    class UPhysicsConstraintComponent* heavyPull;                                     // 0x05B8 (size: 0x8)
    class UAudioComponent* burningAudio;                                              // 0x05C0 (size: 0x8)
    class UParticleSystemComponent* burningEffect;                                    // 0x05C8 (size: 0x8)
    class UAIPerceptionStimuliSourceComponent* AIPerceptionStimuliSource;             // 0x05D0 (size: 0x8)
    class USpringArmComponent* lag_fl1;                                               // 0x05D8 (size: 0x8)
    class USpringArmComponent* lag1;                                                  // 0x05E0 (size: 0x8)
    class Ucomp_gravitygun_C* weaponComp_gravityGun;                                  // 0x05E8 (size: 0x8)
    class UBillboardComponent* unrag;                                                 // 0x05F0 (size: 0x8)
    class USkeletalMeshComponent* arms;                                               // 0x05F8 (size: 0x8)
    class USpringArmComponent* arms_lag;                                              // 0x0600 (size: 0x8)
    class UStaticMeshComponent* weapon;                                               // 0x0608 (size: 0x8)
    class UBillboardComponent* viewmodel;                                             // 0x0610 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0618 (size: 0x8)
    class UAudioComponent* underwaterLoop;                                            // 0x0620 (size: 0x8)
    class UWidgetInteractionComponent* WidgetInteraction;                             // 0x0628 (size: 0x8)
    class Ucomp_physicsImpact_C* physicsImpact;                                       // 0x0630 (size: 0x8)
    class USkeletalMeshComponent* playermodel;                                        // 0x0638 (size: 0x8)
    class USpringArmComponent* lag;                                                   // 0x0640 (size: 0x8)
    class UBillboardComponent* crouchRoot;                                            // 0x0648 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x0650 (size: 0x8)
    class UStaticMeshComponent* grabComp;                                             // 0x0658 (size: 0x8)
    class UAudioComponent* A_M_O_G_U_S;                                               // 0x0660 (size: 0x8)
    class UAudioComponent* eat;                                                       // 0x0668 (size: 0x8)
    class USpringArmComponent* lag_fl;                                                // 0x0670 (size: 0x8)
    class USpotLightComponent* light_R;                                               // 0x0678 (size: 0x8)
    class UArrowComponent* grabrot;                                                   // 0x0680 (size: 0x8)
    class UPhysicsHandleComponent* grabHandle;                                        // 0x0688 (size: 0x8)
    float TL_crouchAnim_a_BB6BB5AC402BAB02B1C788862FD7C516;                           // 0x0690 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> TL_crouchAnim__Direction_BB6BB5AC402BAB02B1C788862FD7C516; // 0x0694 (size: 0x1)
    class UTimelineComponent* TL_crouchAnim;                                          // 0x0698 (size: 0x8)
    float Timeline_0_a_932C4B854DD08FF97D4141B22799032D;                              // 0x06A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_932C4B854DD08FF97D4141B22799032D; // 0x06A4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x06A8 (size: 0x8)
    float invSlideOut_a_F366BFCF46ADD7A4B77558AFB09780C1;                             // 0x06B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> invSlideOut__Direction_F366BFCF46ADD7A4B77558AFB09780C1; // 0x06B4 (size: 0x1)
    class UTimelineComponent* invSlideOut;                                            // 0x06B8 (size: 0x8)
    float tin_far_a_7BB8484F41B9A296FB8D51BC4AA8CFAA;                                 // 0x06C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> tin_far__Direction_7BB8484F41B9A296FB8D51BC4AA8CFAA; // 0x06C4 (size: 0x1)
    class UTimelineComponent* tin_far;                                                // 0x06C8 (size: 0x8)
    float tin_med_a_35A92277466036450588CEBE36A4BCF1;                                 // 0x06D0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> tin_med__Direction_35A92277466036450588CEBE36A4BCF1; // 0x06D4 (size: 0x1)
    class UTimelineComponent* tin_med;                                                // 0x06D8 (size: 0x8)
    float tin_close_a_150D0D92456EEA8D00D6C6BCAD3B5015;                               // 0x06E0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> tin_close__Direction_150D0D92456EEA8D00D6C6BCAD3B5015; // 0x06E4 (size: 0x1)
    class UTimelineComponent* tin_close;                                              // 0x06E8 (size: 0x8)
    float getUpTimeline_a_600A65B44BB925C6BB45C6B093F73841;                           // 0x06F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> getUpTimeline__Direction_600A65B44BB925C6BB45C6B093F73841; // 0x06F4 (size: 0x1)
    class UTimelineComponent* getUpTimeline;                                          // 0x06F8 (size: 0x8)
    float wakingup_a_647CE92E46DB65975F6DE6852BCCB05B;                                // 0x0700 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> wakingup__Direction_647CE92E46DB65975F6DE6852BCCB05B; // 0x0704 (size: 0x1)
    class UTimelineComponent* wakingup;                                               // 0x0708 (size: 0x8)
    float zoom_a_18C78453459B30F34B56A8B7AC1791DB;                                    // 0x0710 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> zoom__Direction_18C78453459B30F34B56A8B7AC1791DB; // 0x0714 (size: 0x1)
    class UTimelineComponent* Zoom;                                                   // 0x0718 (size: 0x8)
    float grab_a_C521EF8B455621FCBCA622B36B8D746B;                                    // 0x0720 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> grab__Direction_C521EF8B455621FCBCA622B36B8D746B; // 0x0724 (size: 0x1)
    class UTimelineComponent* grab;                                                   // 0x0728 (size: 0x8)
    bool input_forward;                                                               // 0x0730 (size: 0x1)
    bool input_back;                                                                  // 0x0731 (size: 0x1)
    bool input_right;                                                                 // 0x0732 (size: 0x1)
    bool input_left;                                                                  // 0x0733 (size: 0x1)
    float step;                                                                       // 0x0734 (size: 0x4)
    FVector lastStep;                                                                 // 0x0738 (size: 0xC)
    FHitResult HitResult;                                                             // 0x0744 (size: 0x88)
    class AActor* grabbing_actor;                                                     // 0x07D0 (size: 0x8)
    class UPrimitiveComponent* grabbing_component;                                    // 0x07D8 (size: 0x8)
    class UWidget* activeInterface;                                                   // 0x07E0 (size: 0x8)
    float animTimer;                                                                  // 0x07E8 (size: 0x4)
    float defSpeed;                                                                   // 0x07EC (size: 0x4)
    bool input_run;                                                                   // 0x07F0 (size: 0x1)
    FmainPlayer_CInput_scrollUp input_scrollUp;                                       // 0x07F8 (size: 0x10)
    void input_scrollUp();
    FmainPlayer_CInput_scrollDown input_scrollDown;                                   // 0x0808 (size: 0x10)
    void input_scrollDown();
    bool input_alt;                                                                   // 0x0818 (size: 0x1)
    float armLength;                                                                  // 0x081C (size: 0x4)
    FVector LookAtLocation;                                                           // 0x0820 (size: 0xC)
    FVector camLocation;                                                              // 0x082C (size: 0xC)
    bool flashlight;                                                                  // 0x0838 (size: 0x1)
    class UPrimitiveComponent* lookAtComponent;                                       // 0x0840 (size: 0x8)
    bool isLookAt;                                                                    // 0x0848 (size: 0x1)
    float mouseSens;                                                                  // 0x084C (size: 0x4)
    float inpF_forward;                                                               // 0x0850 (size: 0x4)
    float inpF_back;                                                                  // 0x0854 (size: 0x4)
    float inpF_rig;                                                                   // 0x0858 (size: 0x4)
    float inpF_lef;                                                                   // 0x085C (size: 0x4)
    bool input_rotate;                                                                // 0x0860 (size: 0x1)
    FVector camPrev;                                                                  // 0x0864 (size: 0xC)
    float camSpeed;                                                                   // 0x0870 (size: 0x4)
    bool grabsHeavy;                                                                  // 0x0874 (size: 0x1)
    bool s_invertX;                                                                   // 0x0875 (size: 0x1)
    bool s_invertY;                                                                   // 0x0876 (size: 0x1)
    float kickTime;                                                                   // 0x0878 (size: 0x4)
    bool isKicked;                                                                    // 0x087C (size: 0x1)
    bool canKick;                                                                     // 0x087D (size: 0x1)
    TEnumAsByte<enum_difficulty::Type> diff;                                          // 0x087E (size: 0x1)
    bool isRagdoll;                                                                   // 0x087F (size: 0x1)
    FTransform wakeup_A;                                                              // 0x0880 (size: 0x30)
    FVector fallVeloc;                                                                // 0x08B0 (size: 0xC)
    FTransform lastRagdollTransform;                                                  // 0x08C0 (size: 0x30)
    FTransform SpawnLocation;                                                         // 0x08F0 (size: 0x30)
    bool hulkMode;                                                                    // 0x0920 (size: 0x1)
    class Ukel_lmao_Skeleton_AnimBlueprint_C* Anim;                                   // 0x0928 (size: 0x8)
    bool arcade;                                                                      // 0x0930 (size: 0x1)
    FVector mov_forward;                                                              // 0x0934 (size: 0xC)
    FVector mov_back;                                                                 // 0x0940 (size: 0xC)
    FVector mov_right;                                                                // 0x094C (size: 0xC)
    FVector mov_left;                                                                 // 0x0958 (size: 0xC)
    FVector velRes;                                                                   // 0x0964 (size: 0xC)
    FVector sliding;                                                                  // 0x0970 (size: 0xC)
    class AActor* controlObject;                                                      // 0x0980 (size: 0x8)
    class Aladder_C* ladder;                                                          // 0x0988 (size: 0x8)
    TArray<class AwaterVolume_C*> waterVolumes_sub;                                   // 0x0990 (size: 0x10)
    bool inWater;                                                                     // 0x09A0 (size: 0x1)
    bool input_jump;                                                                  // 0x09A1 (size: 0x1)
    TArray<class AwaterVolume_C*> waterVolumes;                                       // 0x09A8 (size: 0x10)
    bool onWater;                                                                     // 0x09B8 (size: 0x1)
    bool waterJump;                                                                   // 0x09B9 (size: 0x1)
    bool underwaterPlayer;                                                            // 0x09BA (size: 0x1)
    bool noclip;                                                                      // 0x09BB (size: 0x1)
    bool input_crouch;                                                                // 0x09BC (size: 0x1)
    FmainPlayer_CFaint faint;                                                         // 0x09C0 (size: 0x10)
    void faint();
    float grabLen;                                                                    // 0x09D0 (size: 0x4)
    Fstruct_weapon weaponData;                                                        // 0x09D8 (size: 0x40)
    float reload;                                                                     // 0x0A18 (size: 0x4)
    bool input_fire;                                                                  // 0x0A1C (size: 0x1)
    class AActor* holding_actor;                                                      // 0x0A20 (size: 0x8)
    class Ahook_C* activeHook;                                                        // 0x0A28 (size: 0x8)
    FName holding_name;                                                               // 0x0A30 (size: 0x8)
    bool Animation;                                                                   // 0x0A38 (size: 0x1)
    FVector lastWalk;                                                                 // 0x0A3C (size: 0xC)
    FVector lastloc;                                                                  // 0x0A48 (size: 0xC)
    class AActor* droppedItem;                                                        // 0x0A58 (size: 0x8)
    FVector ragVel;                                                                   // 0x0A60 (size: 0xC)
    FVector ragLLoc;                                                                  // 0x0A6C (size: 0xC)
    bool dead;                                                                        // 0x0A78 (size: 0x1)
    class AActor* sittingOn;                                                          // 0x0A80 (size: 0x8)
    class Ucomp_sitting_C* sitOnComponent;                                            // 0x0A88 (size: 0x8)
    class AsitBox_C* sitPlace;                                                        // 0x0A90 (size: 0x8)
    int32 actionIndex;                                                                // 0x0A98 (size: 0x4)
    int32 max_actionIndex;                                                            // 0x0A9C (size: 0x4)
    class AActor* lookAtActor;                                                        // 0x0AA0 (size: 0x8)
    bool held;                                                                        // 0x0AA8 (size: 0x1)
    class AATV_C* ATV;                                                                // 0x0AB0 (size: 0x8)
    FVector noclipFlyVel;                                                             // 0x0AB8 (size: 0xC)
    float burningTime;                                                                // 0x0AC4 (size: 0x4)
    FmainPlayer_CFlashlightStateChanged flashlightStateChanged;                       // 0x0AC8 (size: 0x10)
    void flashlightStateChanged(class USpotLightComponent* Light, bool Visible);
    FmainPlayer_CInput_E input_E;                                                     // 0x0AD8 (size: 0x10)
    void input_E(bool Pressed);
    FmainPlayer_CInput_mouseXY input_mouseXY;                                         // 0x0AE8 (size: 0x10)
    void input_mouseXY(FVector2D mouseXY);
    bool deactivateMouseInput;                                                        // 0x0AF8 (size: 0x1)
    FmainPlayer_CInput_shift input_shift;                                             // 0x0B00 (size: 0x10)
    void input_shift(bool Pressed);
    FmainPlayer_CInput_altUse input_altUse;                                           // 0x0B10 (size: 0x10)
    void input_altUse(bool Pressed);
    bool fallTp;                                                                      // 0x0B20 (size: 0x1)
    float air;                                                                        // 0x0B24 (size: 0x4)
    float playerDepth;                                                                // 0x0B28 (size: 0x4)
    class AActor* actorStandingOn;                                                    // 0x0B30 (size: 0x8)
    FmainPlayer_CMontageNotify montageNotify;                                         // 0x0B38 (size: 0x10)
    void montageNotify(FName Name);
    bool isWakingUp;                                                                  // 0x0B48 (size: 0x1)
    bool skipFatigue;                                                                 // 0x0B49 (size: 0x1)
    bool isInFPBanimation;                                                            // 0x0B4A (size: 0x1)
    float headbobAnim;                                                                // 0x0B4C (size: 0x4)
    float headbobStrength;                                                            // 0x0B50 (size: 0x4)
    float headbobTiltStrength;                                                        // 0x0B54 (size: 0x4)
    TArray<FName> equipment;                                                          // 0x0B58 (size: 0x10)
    bool noWakeup;                                                                    // 0x0B68 (size: 0x1)
    FmainPlayer_CSwingMelee swingMelee;                                               // 0x0B70 (size: 0x10)
    void swingMelee();
    float foodDraining;                                                               // 0x0B80 (size: 0x4)
    float sleepDraining;                                                              // 0x0B84 (size: 0x4)
    float agil;                                                                       // 0x0B88 (size: 0x4)
    float Str;                                                                        // 0x0B8C (size: 0x4)
    bool isMirror;                                                                    // 0x0B90 (size: 0x1)
    bool dropped;                                                                     // 0x0B91 (size: 0x1)
    class AActor* toggledOn;                                                          // 0x0B98 (size: 0x8)
    bool radialMenu;                                                                  // 0x0BA0 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0BA8 (size: 0x10)
    bool drop_dontCollect;                                                            // 0x0BB8 (size: 0x1)
    int32 scuba;                                                                      // 0x0BBC (size: 0x4)
    bool scubaAir;                                                                    // 0x0BC0 (size: 0x1)
    class Ucomp_jetpack_C* jetpackComponent;                                          // 0x0BC8 (size: 0x8)
    FmainPlayer_CSpace Space;                                                         // 0x0BD0 (size: 0x10)
    void space(bool Pressed);
    bool resetScrollOnUseRelease;                                                     // 0x0BE0 (size: 0x1)
    FmainPlayer_CInput_R input_R;                                                     // 0x0BE8 (size: 0x10)
    void input_R(bool Pressed);
    FmainPlayer_CInput_RMB input_RMB;                                                 // 0x0BF8 (size: 0x10)
    void input_RMB(bool Pressed);
    class Acig_C* cig;                                                                // 0x0C08 (size: 0x8)
    FmainPlayer_CDamaged damaged;                                                     // 0x0C10 (size: 0x10)
    void damaged();
    FmainPlayer_CAnyKeyEvent anyKeyEvent;                                             // 0x0C20 (size: 0x10)
    void anyKeyEvent(FKey Key, bool Pressed);
    FmainPlayer_CJumped jumped;                                                       // 0x0C30 (size: 0x10)
    void jumped();
    class AplayerRagdoll_C* ragdollActor;                                             // 0x0C40 (size: 0x8)
    class USkeletalMeshComponent* ragdollComponent;                                   // 0x0C48 (size: 0x8)
    class AActor* lastDroppedItem;                                                    // 0x0C50 (size: 0x8)
    bool lastDroppedItem_deleted;                                                     // 0x0C58 (size: 0x1)
    bool canGetUp;                                                                    // 0x0C59 (size: 0x1)
    float grab_speed;                                                                 // 0x0C5C (size: 0x4)
    class UMaterialInstanceDynamic* NewVar_5;                                         // 0x0C60 (size: 0x8)
    bool input_use;                                                                   // 0x0C68 (size: 0x1)
    uint8 lookAtVerify;                                                               // 0x0C69 (size: 0x1)
    bool NewVar_0;                                                                    // 0x0C6A (size: 0x1)
    bool AutoRagdollGetup;                                                            // 0x0C6B (size: 0x1)
    FVector climbLoc;                                                                 // 0x0C6C (size: 0xC)
    bool calClimb;                                                                    // 0x0C78 (size: 0x1)
    uint8 flashlightMode;                                                             // 0x0C79 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x0C80 (size: 0x8)
    FmainPlayer_CObjectDropped objectDropped;                                         // 0x0C88 (size: 0x10)
    void objectDropped();
    class UAnimBlueprint_kerfurOmega_regular_C* AnimInst;                             // 0x0C98 (size: 0x8)
    bool deactivateHeightRagdoll;                                                     // 0x0CA0 (size: 0x1)
    FText lookatName;                                                                 // 0x0CA8 (size: 0x18)
    bool combat;                                                                      // 0x0CC0 (size: 0x1)
    bool hasGlasses;                                                                  // 0x0CC1 (size: 0x1)
    bool hasFlashlight;                                                               // 0x0CC2 (size: 0x1)
    bool velmaMode;                                                                   // 0x0CC3 (size: 0x1)
    bool crankFlashlight;                                                             // 0x0CC4 (size: 0x1)
    TArray<FName> equipmentTags;                                                      // 0x0CC8 (size: 0x10)
    float emf_time;                                                                   // 0x0CD8 (size: 0x4)
    bool equipped_emf;                                                                // 0x0CDC (size: 0x1)
    float emf_maxtime;                                                                // 0x0CE0 (size: 0x4)
    bool equipped_geiger;                                                             // 0x0CE4 (size: 0x1)
    float irradiation;                                                                // 0x0CE8 (size: 0x4)
    bool geigerAlert;                                                                 // 0x0CEC (size: 0x1)
    bool equipped_metalDetec;                                                         // 0x0CED (size: 0x1)
    bool equipped_krampushat;                                                         // 0x0CEE (size: 0x1)
    bool altUse;                                                                      // 0x0CEF (size: 0x1)
    bool altUseTime;                                                                  // 0x0CF0 (size: 0x1)
    bool justDropped;                                                                 // 0x0CF1 (size: 0x1)
    FTimerHandle timeUseTimerHandle;                                                  // 0x0CF8 (size: 0x8)
    FmainPlayer_CExitInterface exitInterface;                                         // 0x0D00 (size: 0x10)
    void exitInterface();
    bool canRagdoll;                                                                  // 0x0D10 (size: 0x1)
    bool canFallDamage;                                                               // 0x0D11 (size: 0x1)
    class UStaticMesh* holdMesh;                                                      // 0x0D18 (size: 0x8)
    float precAngle;                                                                  // 0x0D20 (size: 0x4)
    bool cantPlacePrec;                                                               // 0x0D24 (size: 0x1)
    FVector precPrev;                                                                 // 0x0D28 (size: 0xC)
    bool isPrecisionPlacement;                                                        // 0x0D34 (size: 0x1)
    class AActor* climbOnActor;                                                       // 0x0D38 (size: 0x8)
    bool isClimbing;                                                                  // 0x0D40 (size: 0x1)
    bool canAlignToFloor;                                                             // 0x0D41 (size: 0x1)
    bool startInvinc;                                                                 // 0x0D42 (size: 0x1)
    bool IsRunning;                                                                   // 0x0D43 (size: 0x1)
    FmainPlayer_CReceivedDamage receivedDamage;                                       // 0x0D48 (size: 0x10)
    void receivedDamage(float Damage, class AActor* Actor);
    float batteryUsage;                                                               // 0x0D58 (size: 0x4)
    FmainPlayer_CInput_LMB input_LMB;                                                 // 0x0D60 (size: 0x10)
    void input_LMB(bool Pressed);
    bool wasActiveInterface;                                                          // 0x0D70 (size: 0x1)
    FmainPlayer_CInput_moveRight input_moveRight;                                     // 0x0D78 (size: 0x10)
    void input_moveRight(bool Pressed);
    FmainPlayer_CInput_moveLeft input_moveLeft;                                       // 0x0D88 (size: 0x10)
    void input_moveLeft(bool Pressed);
    float sleepComfort;                                                               // 0x0D98 (size: 0x4)
    bool blockScrollWhenUse;                                                          // 0x0D9C (size: 0x1)
    FmainPlayer_CHoldObjectChanged_pre holdObjectChanged_pre;                         // 0x0DA0 (size: 0x10)
    void holdObjectChanged_pre();
    FmainPlayer_CHoldObjectChanged_post holdObjectChanged_post;                       // 0x0DB0 (size: 0x10)
    void holdObjectChanged_post();
    bool input_drop;                                                                  // 0x0DC0 (size: 0x1)
    FTimerHandle timeDropTimerHandle;                                                 // 0x0DC8 (size: 0x8)
    bool hasDropped;                                                                  // 0x0DD0 (size: 0x1)
    bool drop_place;                                                                  // 0x0DD1 (size: 0x1)
    TEnumAsByte<enum_hotkeyAction::Type> hotkeyAction_pressE;                         // 0x0DD2 (size: 0x1)
    TEnumAsByte<enum_hotkeyAction::Type> hotkeyAction_holdE;                          // 0x0DD3 (size: 0x1)
    TEnumAsByte<enum_hotkeyAction::Type> hotkeyAction_pressR;                         // 0x0DD4 (size: 0x1)
    TEnumAsByte<enum_hotkeyAction::Type> hotkeyAction_holdR;                          // 0x0DD5 (size: 0x1)
    TEnumAsByte<enum_hotkeyAction::Type> hotkeyAction_RLMB;                           // 0x0DD6 (size: 0x1)
    TEnumAsByte<enum_hotkeyAction::Type> hotkeyAction_RRMB;                           // 0x0DD7 (size: 0x1)
    bool hotkeyAction_swapE;                                                          // 0x0DD8 (size: 0x1)
    bool hotkeyAction_swapR;                                                          // 0x0DD9 (size: 0x1)
    float holdDelayInit;                                                              // 0x0DDC (size: 0x4)
    float holdDelay;                                                                  // 0x0DE0 (size: 0x4)
    FVector grabRelativeLocation;                                                     // 0x0DE4 (size: 0xC)
    FmainPlayer_CHeavyObjectGrabbed heavyObjectGrabbed;                               // 0x0DF0 (size: 0x10)
    void heavyObjectGrabbed();
    FmainPlayer_CHeavyObjectPulled heavyObjectPulled;                                 // 0x0E00 (size: 0x10)
    void heavyObjectPulled();
    FmainPlayer_CHeavyObjectDropped heavyObjectDropped;                               // 0x0E10 (size: 0x10)
    void heavyObjectDropped();
    bool grabHeavy_pull;                                                              // 0x0E20 (size: 0x1)
    float worldDeltaSeconds;                                                          // 0x0E24 (size: 0x4)
    bool rapidHoldR;                                                                  // 0x0E28 (size: 0x1)
    FTimerHandle timeFlashlightTimerHandle;                                           // 0x0E30 (size: 0x8)
    bool flashlightTypeChanged;                                                       // 0x0E38 (size: 0x1)
    bool input_flashlight;                                                            // 0x0E39 (size: 0x1)
    FTimerHandle timeLMBTimerHandle;                                                  // 0x0E40 (size: 0x8)
    bool droppedPlaced;                                                               // 0x0E48 (size: 0x1)
    float defaultEyeHeight;                                                           // 0x0E4C (size: 0x4)
    bool isBurning;                                                                   // 0x0E50 (size: 0x1)
    TArray<class UParticleSystemComponent*> throwTrace;                               // 0x0E58 (size: 0x10)
    bool isDrawThrowPath;                                                             // 0x0E68 (size: 0x1)
    class UParticleSystemComponent* drawTraceHit;                                     // 0x0E70 (size: 0x8)
    class UMaterialInstanceDynamic* ppw;                                              // 0x0E78 (size: 0x8)
    class UAnimBlueprint_kerfurOmega_regular_C* animInst_playerView;                  // 0x0E80 (size: 0x8)
    bool releaseEToUse;                                                               // 0x0E88 (size: 0x1)
    FVector heavyGrabLocation;                                                        // 0x0E8C (size: 0xC)
    FVector heavyGrabArm;                                                             // 0x0E98 (size: 0xC)
    FmainPlayer_CInput_moveForward input_moveForward;                                 // 0x0EA8 (size: 0x10)
    void input_moveForward(bool Pressed);
    FmainPlayer_CInput_moveBackward input_moveBackward;                               // 0x0EB8 (size: 0x10)
    void input_moveBackward(bool Pressed);
    bool Heavy;                                                                       // 0x0EC8 (size: 0x1)
    uint8 lookAtState;                                                                // 0x0EC9 (size: 0x1)
    bool lookAtCenter;                                                                // 0x0ECA (size: 0x1)
    class UPrimitiveComponent* lookAtBoundsReplace;                                   // 0x0ED0 (size: 0x8)
    float beforeCrouch_halfHeight;                                                    // 0x0ED8 (size: 0x4)
    float pooped;                                                                     // 0x0EDC (size: 0x4)
    FmainPlayer_CSitOn sitOn;                                                         // 0x0EE0 (size: 0x10)
    void sitOn(class AsitBox_C* sit);
    FmainPlayer_CSitUp sitUp;                                                         // 0x0EF0 (size: 0x10)
    void sitUp(class AsitBox_C* sit);
    bool tutorialItems;                                                               // 0x0F00 (size: 0x1)
    bool isLookingAt;                                                                 // 0x0F01 (size: 0x1)
    bool eatSounds;                                                                   // 0x0F02 (size: 0x1)
    bool recentlyJumped;                                                              // 0x0F03 (size: 0x1)
    bool isExhausted_bool;                                                            // 0x0F04 (size: 0x1)
    bool isActiveINterface3D;                                                         // 0x0F05 (size: 0x1)
    float viewmodelBob;                                                               // 0x0F08 (size: 0x4)
    bool isFallDamageActive;                                                          // 0x0F0C (size: 0x1)
    float WaterDepth;                                                                 // 0x0F10 (size: 0x4)
    bool underwaterListener;                                                          // 0x0F14 (size: 0x1)
    FmainPlayer_CInput_activateEquipment input_activateEquipment;                     // 0x0F18 (size: 0x10)
    void input_activateEquipment(bool Pressed);
    bool enableWaterFallDamage;                                                       // 0x0F28 (size: 0x1)
    FmainPlayer_CPlayerSteppedOn playerSteppedOn;                                     // 0x0F30 (size: 0x10)
    void playerSteppedOn(FHitResult Hit, class AmainPlayer_C* Player);
    FmainPlayer_CEquipmentUpdated equipmentUpdated;                                   // 0x0F40 (size: 0x10)
    void equipmentUpdated(class AmainPlayer_C* Player);
    float mouseAxis_X;                                                                // 0x0F50 (size: 0x4)
    float mouseAxis_Y;                                                                // 0x0F54 (size: 0x4)
    float mouseSmoothing;                                                             // 0x0F58 (size: 0x4)
    bool enableBloodLoss;                                                             // 0x0F5C (size: 0x1)
    bool debugDamage;                                                                 // 0x0F5D (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
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
    void toolboxFix(class Aprop_toolbox_C* toolbox, bool& return);
    void GetKey(FName& Key);
    void resetInputs();
    void checkArc(TArray<FVector>& InputPin, float tossHeight, bool& High);
    void lookAtLookedAway();
    void LookAtFunction();
    void slideAnim_inventory(float InputPin);
    void drawThrowPath(TArray<FVector>& InputPin, const FHitResult& Hit);
    void traceThrow(bool debug, FVector weaponLocation, FVector cameraLocation, FHitResult& hit_fromWeapon, FHitResult& hit_fromCamera, TArray<FVector>& path_fromWeapon, TArray<FVector>& path_fromCamera, FVector& velocity_fromWeapon, FVector& velocity_fromCamera);
    void Set Heavy Pull Rot();
    void setHeavyGrabArm();
    void getHoverTextHelp(FText& Text);
    void useSelectedAction();
    void buildActionList();
    void getUseAction(bool& use);
    void updateFlashlight();
    void alightViewToFloor();
    void setPrecAngle();
    void updatePrecPlace(bool isPrecisionPlacement);
    void meshPlace();
    void setActionIndex(int32 actionIndex);
    void moveOutProp(class AActor* Actor, float mult, class AActor* addIgnore);
    void Hot Objects();
    void throwHoldingProp();
    void addPropToPlayer(FName prop);
    void doJump();
    void radiationDetected(FVector Location, float dist, float pow);
    void isStrong(bool& return);
    void fixCrouch(bool& fixed);
    void processClimb(bool& setClimb, FVector& OutputPin);
    void windSounds();
    void addEffect();
    void equipJetpack();
    void processArmor(const FHitResult& Hit, bool& Damage);
    void skipGrabRadial(bool& Skip);
    void heal(float Add);
    void kill();
    void throwShovelItem(FVector NewVel);
    void updateWheel();
    void tryGetNail(bool& success, TSubclassOf<class Anail_C>& nailClass);
    void updateEquipment();
    FVector findFootLocation();
    void fixActionIndex();
    void updateSpeed();
    void Hold Object(bool useHold, class AActor* Manual, bool& collected);
    void selectedAction(TEnumAsByte<enum_interactionActions::Type>& Output1, FString& asName, bool& return, bool& isSingle);
    void unsit();
    void sit(class AActor* Actor, class Ucomp_sitting_C* Component, class AsitBox_C* place);
    bool useArm(FHitResult& OutHit);
    void Add Player Damage(float Damage, FVector damageLocation, FVector fullBody, bool blood, class UObject* Source);
    void throwShit(class UPrimitiveComponent* InputPin, FVector NewVel);
    void teleportWObackrooms(const FTransform& NewTransform, bool useRotation, bool trueRotation);
    void movOut(const FHitResult& Hit, FVector InputPin);
    void checkEquip(bool& Empty, Fstruct_equipment& Output);
    TSubclassOf<class AActor> attack(bool& Hit, FHitResult& OutputPin);
    void updateHold(bool& return, FString& rebug);
    void addEquip(Fstruct_save Data, bool& return, FString& rebug);
    void putObjectInventory2(class AActor* InputPin, bool noNotify, bool& return);
    void setUnderwater(bool playerUnderwater, bool listenerUnderwater);
    void processUnderwater();
    void updWater();
    void useLadder(class Aladder_C* ladder, class Aladder_C*& ladder1);
    void punch(FVector fullBody, FVector boneImp, FName bn1, float Damage, FVector damageLocation);
    void StopMovement();
    void ragdollMode(bool ragdoll, bool passOut, bool death);
    bool CanJumpInternal();
    void kick();
    void setMouseSmooth(float mouseSmoothing, float mouseSens);
    void Flashlight Update();
    void setActiveInterface(class UWidget* activeInterface, FString inString, bool Zoom, class UObject* sentBy, bool ignoreZoom, bool isActiveINterface3D, bool showInterface, bool& return);
    void isExhausted(bool Message, bool& exhausted);
    void addFood(float food, float sleep, float health, class Aprop_food_C* asFood, bool bypassNoHunger, TEnumAsByte<enum_foodType::Type> failType, bool& full);
    void useAction(bool sec, bool& succ);
    void widgetInteract_mousePress();
    void makeLookAt(FVector LookAtLocation, FVector cameraLocation);
    void Enter Interface(class UWidget* activeInterface, FVector LookAtLocation, FVector camLocation, FString callFrom);
    void arm(float customLength, FVector& Start, FVector& End, FRotator& Rotation);
    void stepOn(float A1);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void invSlideOut__FinishedFunc();
    void invSlideOut__UpdateFunc();
    void wakingup__FinishedFunc();
    void wakingup__UpdateFunc();
    void tin_far__FinishedFunc();
    void tin_far__UpdateFunc();
    void tin_med__FinishedFunc();
    void tin_med__UpdateFunc();
    void tin_close__FinishedFunc();
    void tin_close__UpdateFunc();
    void zoom__FinishedFunc();
    void zoom__UpdateFunc();
    void grab__FinishedFunc();
    void grab__UpdateFunc();
    void TL_crouchAnim__FinishedFunc();
    void TL_crouchAnim__UpdateFunc();
    void getUpTimeline__FinishedFunc();
    void getUpTimeline__UpdateFunc();
    void InpActEvt_activateEquipment_K2Node_InputActionEvent_62(FKey Key);
    void InpActEvt_activateEquipment_K2Node_InputActionEvent_61(FKey Key);
    void InpActEvt_superscreenshot_K2Node_InputActionEvent_60(FKey Key);
    void OnNotifyEnd_5D8C5DEB45CD068AED6A49A9D34D2E25(FName NotifyName);
    void OnNotifyBegin_5D8C5DEB45CD068AED6A49A9D34D2E25(FName NotifyName);
    void OnInterrupted_5D8C5DEB45CD068AED6A49A9D34D2E25(FName NotifyName);
    void OnBlendOut_5D8C5DEB45CD068AED6A49A9D34D2E25(FName NotifyName);
    void OnCompleted_5D8C5DEB45CD068AED6A49A9D34D2E25(FName NotifyName);
    void OnNotifyEnd_6FC60C6C4AA754F0D22D9FB355E91395(FName NotifyName);
    void OnNotifyBegin_6FC60C6C4AA754F0D22D9FB355E91395(FName NotifyName);
    void OnInterrupted_6FC60C6C4AA754F0D22D9FB355E91395(FName NotifyName);
    void OnBlendOut_6FC60C6C4AA754F0D22D9FB355E91395(FName NotifyName);
    void OnCompleted_6FC60C6C4AA754F0D22D9FB355E91395(FName NotifyName);
    void InpActEvt_fire_K2Node_InputActionEvent_59(FKey Key);
    void InpActEvt_fire_K2Node_InputActionEvent_58(FKey Key);
    void OnNotifyEnd_4DBBC1B940FF6B1540C30484950F25EA(FName NotifyName);
    void OnNotifyBegin_4DBBC1B940FF6B1540C30484950F25EA(FName NotifyName);
    void OnInterrupted_4DBBC1B940FF6B1540C30484950F25EA(FName NotifyName);
    void OnBlendOut_4DBBC1B940FF6B1540C30484950F25EA(FName NotifyName);
    void OnCompleted_4DBBC1B940FF6B1540C30484950F25EA(FName NotifyName);
    void OnNotifyEnd_810D1C624C726801D77BDDB22791052F(FName NotifyName);
    void OnNotifyBegin_810D1C624C726801D77BDDB22791052F(FName NotifyName);
    void OnInterrupted_810D1C624C726801D77BDDB22791052F(FName NotifyName);
    void OnBlendOut_810D1C624C726801D77BDDB22791052F(FName NotifyName);
    void OnCompleted_810D1C624C726801D77BDDB22791052F(FName NotifyName);
    void InpActEvt_backupsave_K2Node_InputActionEvent_57(FKey Key);
    void InpActEvt_lockObject_K2Node_InputActionEvent_56(FKey Key);
    void InpActEvt_debugtp_K2Node_InputActionEvent_55(FKey Key);
    void InpActEvt_scrollDown_K2Node_InputActionEvent_54(FKey Key);
    void InpActEvt_scrollUp_K2Node_InputActionEvent_53(FKey Key);
    void InpActEvt_hotbar_10_K2Node_InputActionEvent_52(FKey Key);
    void InpActEvt_hotbar_9_K2Node_InputActionEvent_51(FKey Key);
    void InpActEvt_hotbar_8_K2Node_InputActionEvent_50(FKey Key);
    void InpActEvt_hotbar_7_K2Node_InputActionEvent_49(FKey Key);
    void InpActEvt_hotbar_6_K2Node_InputActionEvent_48(FKey Key);
    void InpActEvt_hotbar_5_K2Node_InputActionEvent_47(FKey Key);
    void InpActEvt_hotbar_4_K2Node_InputActionEvent_46(FKey Key);
    void InpActEvt_hotbar_3_K2Node_InputActionEvent_45(FKey Key);
    void InpActEvt_hotbar_2_K2Node_InputActionEvent_44(FKey Key);
    void InpActEvt_hotbar_1_K2Node_InputActionEvent_43(FKey Key);
    void InpActEvt_use_K2Node_InputActionEvent_42(FKey Key);
    void InpActEvt_use_K2Node_InputActionEvent_41(FKey Key);
    void InpActEvt_zoom_K2Node_InputActionEvent_40(FKey Key);
    void InpActEvt_zoom_K2Node_InputActionEvent_39(FKey Key);
    void InpActEvt_use_K2Node_InputActionEvent_38(FKey Key);
    void InpActEvt_left_K2Node_InputActionEvent_37(FKey Key);
    void InpActEvt_right_K2Node_InputActionEvent_36(FKey Key);
    void InpActEvt_back_K2Node_InputActionEvent_35(FKey Key);
    void InpActEvt_forward_K2Node_InputActionEvent_34(FKey Key);
    void InpActEvt_left_K2Node_InputActionEvent_33(FKey Key);
    void InpActEvt_left_K2Node_InputActionEvent_32(FKey Key);
    void InpActEvt_right_K2Node_InputActionEvent_31(FKey Key);
    void InpActEvt_right_K2Node_InputActionEvent_30(FKey Key);
    void InpActEvt_back_K2Node_InputActionEvent_29(FKey Key);
    void InpActEvt_back_K2Node_InputActionEvent_28(FKey Key);
    void InpActEvt_forward_K2Node_InputActionEvent_27(FKey Key);
    void InpActEvt_forward_K2Node_InputActionEvent_26(FKey Key);
    void OnNotifyEnd_7B6F74A042FAB16562D2EAA1EFBF689C(FName NotifyName);
    void OnNotifyBegin_7B6F74A042FAB16562D2EAA1EFBF689C(FName NotifyName);
    void OnInterrupted_7B6F74A042FAB16562D2EAA1EFBF689C(FName NotifyName);
    void OnBlendOut_7B6F74A042FAB16562D2EAA1EFBF689C(FName NotifyName);
    void OnCompleted_7B6F74A042FAB16562D2EAA1EFBF689C(FName NotifyName);
    void InpActEvt_ragdoll_K2Node_InputActionEvent_25(FKey Key);
    void InpActEvt_undo_K2Node_InputActionEvent_24(FKey Key);
    void InpActEvt_noclip_K2Node_InputActionEvent_23(FKey Key);
    void InpActEvt_inventory_K2Node_InputActionEvent_22(FKey Key);
    void OnNotifyEnd_C9A4A46A4C8E87AD113F5FBDA6247247(FName NotifyName);
    void OnNotifyBegin_C9A4A46A4C8E87AD113F5FBDA6247247(FName NotifyName);
    void OnInterrupted_C9A4A46A4C8E87AD113F5FBDA6247247(FName NotifyName);
    void OnBlendOut_C9A4A46A4C8E87AD113F5FBDA6247247(FName NotifyName);
    void OnCompleted_C9A4A46A4C8E87AD113F5FBDA6247247(FName NotifyName);
    void InpActEvt_jump_K2Node_InputActionEvent_21(FKey Key);
    void InpActEvt_jump_K2Node_InputActionEvent_20(FKey Key);
    void InpActEvt_crouch_K2Node_InputActionEvent_19(FKey Key);
    void InpActEvt_crouch_K2Node_InputActionEvent_18(FKey Key);
    void InpActEvt_rotate_K2Node_InputActionEvent_17(FKey Key);
    void InpActEvt_rotate_K2Node_InputActionEvent_16(FKey Key);
    void InpActEvt_quicksave_K2Node_InputActionEvent_15(FKey Key);
    void InpActEvt_AnyKey_K2Node_InputKeyEvent_4(FKey Key);
    void InpActEvt_AnyKey_K2Node_InputKeyEvent_3(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_2(FKey Key);
    void InpActEvt_LeftMouseButton_K2Node_InputKeyEvent_1(FKey Key);
    void InpActEvt_flashlight_K2Node_InputActionEvent_14(FKey Key);
    void InpActEvt_flashlight_K2Node_InputActionEvent_13(FKey Key);
    void InpActEvt_cheatmenu_K2Node_InputActionEvent_12(FKey Key);
    void InpActEvt_dismount_K2Node_InputActionEvent_11(FKey Key);
    void InpActEvt_dismount_K2Node_InputActionEvent_10(FKey Key);
    void InpActEvt_Escape_K2Node_InputKeyEvent_0(FKey Key);
    void InpActEvt_run_K2Node_InputActionEvent_9(FKey Key);
    void InpActEvt_run_K2Node_InputActionEvent_8(FKey Key);
    void InpActEvt_throwPath_K2Node_InputActionEvent_7(FKey Key);
    void InpActEvt_throwPath_K2Node_InputActionEvent_6(FKey Key);
    void InpActEvt_alt_K2Node_InputActionEvent_5(FKey Key);
    void InpActEvt_alt_K2Node_InputActionEvent_4(FKey Key);
    void InpActEvt_spawnmenu_K2Node_InputActionEvent_3(FKey Key);
    void InpActEvt_spawnmenu_K2Node_InputActionEvent_2(FKey Key);
    void InpActEvt_drop_K2Node_InputActionEvent_1(FKey Key);
    void InpActEvt_drop_K2Node_InputActionEvent_0(FKey Key);
    void interactedWithWidget();
    void playerStepped(FHitResult Hit);
    void simulateLMB(bool Pressed);
    void delayLMB();
    void delayLMBtimer();
    void initiateLMBDelay();
    void playFPAnimScripted(class UAnimMontage* MontageToPlay, FName StartingSection, class AActor* call);
    void weaponReload();
    void playFPAnim(FName Name, class UAnimMontage* MontageToPlay, float reload);
    void useShovel();
    void actionListAnimation(bool Open);
    void resetInventoryAnimation();
    void containerInventoryAnimation();
    void forceWakeup();
    void wakeup(bool passOut);
    void stopDrawingPath();
    void beginPath();
    void tooHotObject();
    void returnSignal(float signalStrength);
    void hungerSound();
    void cough();
    void scubaTimer();
    void breathTimer();
    void hitt(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveBeginPlay();
    void forceGetUp();
    void fallen(bool death);
    void tinnitus(uint8 Type);
    void InpAxisKeyEvt_MouseWheelAxis_K2Node_InputAxisKeyEvent_0(float AxisValue);
    void InpAxisEvt_mouseY_K2Node_InputAxisEvent_1(float AxisValue);
    void InpAxisEvt_mouseX_K2Node_InputAxisEvent_0(float AxisValue);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void updateStrAgl();
    void poisonedMessage();
    void collectObject();
    void ReceiveTick(float DeltaSeconds);
    void unbindLookAtDestroyed();
    void lookAtDestroyed(class AActor* DestroyedActor);
    void bindLookAtDestroyed();
    void timerHoldFlashlight();
    void ateShit(float Damage);
    void forceDrop();
    void timeUseTimer();
    void timeUse();
    void simulate_useReleased();
    void simulate_usePressed();
    void stopZooming();
    void unzoom();
    void destGrabbed(class AActor* DestroyedActor);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void pickupObjectDirect(class AActor* Actor, class UPrimitiveComponent* Component);
    void equipDestroyed(class AActor* DestroyedActor);
    void timeFlashlight();
    void smoothGrab();
    void dropGrabObject();
    void pickupObject(FHitResult HitResult);
    void CuntWaterCollision();
    void makeEquipDestroyed();
    void event_landed(const FHitResult& Hit);
    void OnLanded(const FHitResult& Hit);
    void extinguishFire();
    void startBurning();
    void ignite(float fuel);
    void beginArmAnim(class UAnimMontage* MontageToPlay);
    void firstPersonBodyAnimation(FName StartingSection);
    void OnJumped();
    void ladderOn();
    void simClick();
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void recallSit();
    void unbindSitDestroyed();
    void sitDestroyed(class AActor* DestroyedActor);
    void bindSitDestroyed();
    void simulateRMB(bool Pressed);
    void fallImpulse();
    void reachedByLightning(class AlightningStrike_C* lightning);
    void crowbarOpen(class ApryingCrowbar_C* pryingCrowbar);
    void driveBrokenNearby(class Aprop_drive_C* drive);
    void craftDepleted(class Aprop_workbench_C* workbench);
    void lookedAt(class AmainPlayer_C* Player, FHitResult HitResult, class UPrimitiveComponent* lookAtComponent);
    void sendTag(FName Tag);
    void padlock_unlock(class Aprop_padlock_C* padlock);
    void padlock_lock(class Aprop_padlock_C* padlock);
    void upgradeTake(FName Item);
    void playerUsedOn_delay(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void playerUnsit(class AmainPlayer_C* Player);
    void playerSit(class AmainPlayer_C* Player);
    void insertBattery(class AmainPlayer_C* Player, class Aprop_batts_C* battery);
    void hookTension(class Ahook_C* hook);
    void cleanSponge(float clean, class AmainPlayer_C* Player, class Aprop_sponge_C* sponge, FHitResult Hit);
    void crafted();
    void hooked(class Ahook_C* hook);
    void attemptIgnite();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
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
    void exploded(float Damage, FVector Location, class Aexplosion_C* explosion);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void receivedPhyiscsDamage(float Damage, FHitResult hot);
    void microwave(class Aprop_microwave_C* microwave);
    void fireDamage(float Damage);
    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void unhook();
    void digUp();
    void physPreDestroyed();
    void physDestroyed();
    void setKey(FName Key);
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void virus(bool Activate);
    void eaten(class AmainPlayer_C* Player);
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void beginHoldingObject(class AmainPlayer_C* Player, FHitResult Hit);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerHoldPre(class AmainPlayer_C* Player);
    void unequpped(class AmainPlayer_C* Player);
    void playerHitWith(FHitResult Hit, class AmainPlayer_C* Player);
    void playerHoldPost(class AmainPlayer_C* Player);
    void playerUnequip(class AmainPlayer_C* Player);
    void damageByPlayer(class AmainPlayer_C* Player, FHitResult Hit, float Damage);
    void thrown(class AmainPlayer_C* Player);
    void broken_fire();
    void broken();
    void sendName(FName Name);
    void kicked(bool kick);
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void driveDetached();
    void impactSquishCPP(class UPrimitiveComponent* Component);
    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void intComs_triggerSnow(bool isSnow);
    void intComs_gamemodePostKeys();
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_applyColor(FLinearColor Color);
    void intComs_propRenderer_finishProps();
    void intComs_gamemodeMakeKeys();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodePreLoad();
    void intComs_unfocused();
    void intComs_unfoc();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_gamemodeBeginPlay();
    void intComs_signalSaved();
    void intComs_signalDeleted();
    void interruptHoldItem();
    void simulateEsc();
    void unrun();
    void exitTheWater();
    void enteredTheWater();
    void leaveWater(class AwaterVolume_C* Water);
    void enterWater(class AwaterVolume_C* Water);
    void leaveWaterOrigin(class AwaterVolume_C* Water);
    void enterWaterOrigin(class AwaterVolume_C* Water);
    void hotkeyAction(TEnumAsByte<enum_hotkeyAction::Type> Selection, class AActor* Actor);
    void precisionPlacemet_drop();
    void timeDropTimer();
    void timeDrop();
    void simulateDrop(bool dontWakeup, bool place, bool dontCollect);
    void ExecuteUbergraph_mainPlayer(int32 EntryPoint);
    void equipmentUpdated__DelegateSignature(class AmainPlayer_C* Player);
    void playerSteppedOn__DelegateSignature(FHitResult Hit, class AmainPlayer_C* Player);
    void input_activateEquipment__DelegateSignature(bool Pressed);
    void sitUp__DelegateSignature(class AsitBox_C* sit);
    void sitOn__DelegateSignature(class AsitBox_C* sit);
    void input_moveBackward__DelegateSignature(bool Pressed);
    void input_moveForward__DelegateSignature(bool Pressed);
    void heavyObjectDropped__DelegateSignature();
    void heavyObjectPulled__DelegateSignature();
    void heavyObjectGrabbed__DelegateSignature();
    void holdObjectChanged_post__DelegateSignature();
    void holdObjectChanged_pre__DelegateSignature();
    void input_moveLeft__DelegateSignature(bool Pressed);
    void input_moveRight__DelegateSignature(bool Pressed);
    void input_LMB__DelegateSignature(bool Pressed);
    void receivedDamage__DelegateSignature(float Damage, class AActor* Actor);
    void exitInterface__DelegateSignature();
    void objectDropped__DelegateSignature();
    void jumped__DelegateSignature();
    void anyKeyEvent__DelegateSignature(FKey Key, bool Pressed);
    void damaged__DelegateSignature();
    void input_RMB__DelegateSignature(bool Pressed);
    void input_R__DelegateSignature(bool Pressed);
    void space__DelegateSignature(bool Pressed);
    void swingMelee__DelegateSignature();
    void montageNotify__DelegateSignature(FName Name);
    void input_altUse__DelegateSignature(bool Pressed);
    void input_shift__DelegateSignature(bool Pressed);
    void input_mouseXY__DelegateSignature(FVector2D mouseXY);
    void input_E__DelegateSignature(bool Pressed);
    void flashlightStateChanged__DelegateSignature(class USpotLightComponent* Light, bool Visible);
    void faint__DelegateSignature();
    void input_scrollDown__DelegateSignature();
    void input_scrollUp__DelegateSignature();
}; // Size: 0xF5E

#endif
