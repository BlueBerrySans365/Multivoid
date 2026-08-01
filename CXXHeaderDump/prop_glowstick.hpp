#ifndef UE4SS_SDK_prop_glowstick_HPP
#define UE4SS_SDK_prop_glowstick_HPP

class Aprop_glowstick_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* hookLoc;                                               // 0x0370 (size: 0x8)
    class UArrowComponent* sticking;                                                  // 0x0378 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0380 (size: 0x8)
    class UStaticMeshComponent* hook;                                                 // 0x0388 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0390 (size: 0x8)
    bool stick;                                                                       // 0x0398 (size: 0x1)
    bool sticked;                                                                     // 0x0399 (size: 0x1)
    FVector Loc;                                                                      // 0x039C (size: 0xC)
    FVector relLoc1;                                                                  // 0x03A8 (size: 0xC)
    FVector relLoc2;                                                                  // 0x03B4 (size: 0xC)
    FTransform Transform;                                                             // 0x03C0 (size: 0x30)
    int32 Type;                                                                       // 0x03F0 (size: 0x4)
    class UPrimitiveComponent* stickComp;                                             // 0x03F8 (size: 0x8)
    float Length;                                                                     // 0x0400 (size: 0x4)
    bool stickStatic;                                                                 // 0x0404 (size: 0x1)
    FName attachToKey;                                                                // 0x0408 (size: 0x8)
    class AActor* attachToActor;                                                      // 0x0410 (size: 0x8)
    bool grabbed;                                                                     // 0x0418 (size: 0x1)

    void playerTryToGrab(class AmainPlayer_C* Player, bool& collected);
    void playerTryToCollect(class AmainPlayer_C* Player, bool& collected);
    void playerTryToHold(class AmainPlayer_C* Player, bool& collected);
    void releaseGlowstick();
    void processKeys(bool& return);
    void setRelativeFrames();
    void setFrame(bool Static);
    void obj(const TArray<TEnumAsByte<EObjectTypeQuery>>& OutputPin);
    void Init();
    void getType();
    void stickTo(const FHitResult& Hit, bool setFrame);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    bool ray(FHitResult& OutHit);
    void ReceiveTick(float DeltaSeconds);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void dropped();
    void fuckyou();
    void hookDelay();
    void playerHoldPre(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_glowstick(int32 EntryPoint);
}; // Size: 0x419

#endif
