#ifndef UE4SS_SDK_prop_physgun_HPP
#define UE4SS_SDK_prop_physgun_HPP

class Aprop_physgun_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* eff_gphysgunBeam_end;                             // 0x0370 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0378 (size: 0x8)
    class UPhysicsConstraintComponent* SoftConstraint;                                // 0x0380 (size: 0x8)
    class UStaticMeshComponent* softPivot;                                            // 0x0388 (size: 0x8)
    class UParticleSystemComponent* beam;                                             // 0x0390 (size: 0x8)
    class UParticleSystemComponent* eff_gphysgunBeam_start;                           // 0x0398 (size: 0x8)
    class UBillboardComponent* Pivot;                                                 // 0x03A0 (size: 0x8)
    class UBillboardComponent* vis;                                                   // 0x03A8 (size: 0x8)
    class AActor* objectPickup;                                                       // 0x03B0 (size: 0x8)
    bool hold;                                                                        // 0x03B8 (size: 0x1)
    class UPrimitiveComponent* Component;                                             // 0x03C0 (size: 0x8)
    FBodyInstance compBodyInst;                                                       // 0x03C8 (size: 0x158)
    FVector Offset;                                                                   // 0x0520 (size: 0xC)
    FTransform rel;                                                                   // 0x0530 (size: 0x30)
    float Distance;                                                                   // 0x0560 (size: 0x4)
    bool rotate;                                                                      // 0x0564 (size: 0x1)
    bool shiftHold;                                                                   // 0x0565 (size: 0x1)
    bool altHold;                                                                     // 0x0566 (size: 0x1)
    bool superGun;                                                                    // 0x0567 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0568 (size: 0x10)
    bool soft;                                                                        // 0x0578 (size: 0x1)
    class AActor* attachActor;                                                        // 0x0580 (size: 0x8)
    FName Bone;                                                                       // 0x0588 (size: 0x8)

    void Release();
    void grab();
    void ReceiveTick(float DeltaSeconds);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void scr_down();
    void scr_up();
    void use_E(bool Pressed);
    void mouseXY(FVector2D mouseXY);
    void Shift(bool Pressed);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void Alt(bool Pressed);
    void ReceiveBeginPlay();
    void Dest(class AActor* DestroyedActor);
    void ReceiveDestroyed();
    void ExecuteUbergraph_prop_physgun(int32 EntryPoint);
}; // Size: 0x590

#endif
