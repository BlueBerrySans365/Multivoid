#ifndef UE4SS_SDK_prop_swinger_HPP
#define UE4SS_SDK_prop_swinger_HPP

class Aprop_swinger_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UArrowComponent* Forward;                                                   // 0x0370 (size: 0x8)
    class UArrowComponent* Offset;                                                    // 0x0378 (size: 0x8)
    class UAudioComponent* audio_locked;                                              // 0x0380 (size: 0x8)
    class UAudioComponent* audio_close;                                               // 0x0388 (size: 0x8)
    class UAudioComponent* audio_open;                                                // 0x0390 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0398 (size: 0x8)
    class UArrowComponent* MirrorAxis;                                                // 0x03A0 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x03A8 (size: 0x8)
    ERigControlAxis Axis;                                                             // 0x03B0 (size: 0x1)
    bool isVertical;                                                                  // 0x03B1 (size: 0x1)
    float Force;                                                                      // 0x03B4 (size: 0x4)
    FVector axisLocation;                                                             // 0x03B8 (size: 0xC)
    bool isLockable;                                                                  // 0x03C4 (size: 0x1)
    bool opened;                                                                      // 0x03C5 (size: 0x1)
    bool swinged;                                                                     // 0x03C6 (size: 0x1)
    bool isBackwards;                                                                 // 0x03C7 (size: 0x1)
    bool hasSound;                                                                    // 0x03C8 (size: 0x1)
    Fprop_swinger_CDoorOpened doorOpened;                                             // 0x03D0 (size: 0x10)
    void doorOpened();
    Fprop_swinger_CDoorClosed doorClosed;                                             // 0x03E0 (size: 0x10)
    void doorClosed();
    bool Locked;                                                                      // 0x03F0 (size: 0x1)
    bool isHeavy;                                                                     // 0x03F1 (size: 0x1)
    bool isFree;                                                                      // 0x03F2 (size: 0x1)
    float swingLimitAngle;                                                            // 0x03F4 (size: 0x4)
    float swingOffset;                                                                // 0x03F8 (size: 0x4)
    float rotateAxis;                                                                 // 0x03FC (size: 0x4)
    float jointStiffness;                                                             // 0x0400 (size: 0x4)
    float spring;                                                                     // 0x0404 (size: 0x4)
    bool useRightVectorForDirection;                                                  // 0x0408 (size: 0x1)
    bool openOnDamage;                                                                // 0x0409 (size: 0x1)
    float swingOutOnDamageForce;                                                      // 0x040C (size: 0x4)
    bool bypassLockOnDamage;                                                          // 0x0410 (size: 0x1)
    Fprop_swinger_CDoorOpenDamage doorOpenDamage;                                     // 0x0418 (size: 0x10)
    void doorOpenDamage();

    FVector getAxis();
    void switchToHeavyDrag(bool& isHeavy);
    void Init();
    void Close();
    void Open(bool Damage);
    void set();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void UserConstructionScript();
    void mouseAssign(FVector2D mouseXY);
    void dropped();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void padlock_lock(class Aprop_padlock_C* padlock);
    void padlock_unlock(class Aprop_padlock_C* padlock);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void ExecuteUbergraph_prop_swinger(int32 EntryPoint);
    void doorOpenDamage__DelegateSignature();
    void doorClosed__DelegateSignature();
    void doorOpened__DelegateSignature();
}; // Size: 0x428

#endif
