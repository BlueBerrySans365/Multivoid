#ifndef UE4SS_SDK_comp_wallAttachable_HPP
#define UE4SS_SDK_comp_wallAttachable_HPP

class Ucomp_wallAttachable_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class UArrowComponent* stick;                                                     // 0x00B8 (size: 0x8)
    float Start;                                                                      // 0x00C0 (size: 0x4)
    float End;                                                                        // 0x00C4 (size: 0x4)
    FTransform tr_A;                                                                  // 0x00D0 (size: 0x30)
    FTransform tr_B;                                                                  // 0x0100 (size: 0x30)
    float dir;                                                                        // 0x0130 (size: 0x4)
    class Aprop_C* prop;                                                              // 0x0138 (size: 0x8)
    TEnumAsByte<ESplineMeshAxis::Type> Axis;                                          // 0x0140 (size: 0x1)
    bool doStick;                                                                     // 0x0141 (size: 0x1)
    bool holding;                                                                     // 0x0142 (size: 0x1)
    float Alpha;                                                                      // 0x0144 (size: 0x4)
    FVector Scale;                                                                    // 0x0148 (size: 0xC)
    bool initForceStick;                                                              // 0x0154 (size: 0x1)
    class UStaticMeshComponent* comp;                                                 // 0x0158 (size: 0x8)
    bool playerHold;                                                                  // 0x0160 (size: 0x1)
    bool dontAutoAdjustRotation;                                                      // 0x0161 (size: 0x1)
    bool detachOnAngle;                                                               // 0x0162 (size: 0x1)
    float detachAngle;                                                                // 0x0164 (size: 0x4)
    bool pryingRequired;                                                              // 0x0168 (size: 0x1)

    bool canStick(bool skipHolding);
    void setTr();
    void Try Stick Mark(FHitResult& OutHit_mark);
    void forceStick(bool skipHolding);
    void Dest(class AActor* DestroyedActor);
    void sticking();
    void ReceiveTick(float DeltaSeconds);
    void unstick(bool withTool);
    void Init(class Aprop_C* prop, class UArrowComponent* Arrow);
    void ExecuteUbergraph_comp_wallAttachable(int32 EntryPoint);
}; // Size: 0x169

#endif
