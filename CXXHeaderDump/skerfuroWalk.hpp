#ifndef UE4SS_SDK_skerfuroWalk_HPP
#define UE4SS_SDK_skerfuroWalk_HPP

class AskerfuroWalk_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* focusPoint;                                            // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0230 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0238 (size: 0x8)
    class UBillboardComponent* Billboard1;                                            // 0x0240 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    float Alpha;                                                                      // 0x0258 (size: 0x4)
    bool side;                                                                        // 0x025C (size: 0x1)
    bool Walk;                                                                        // 0x025D (size: 0x1)
    class AkerfurOmega_C* returnKerfuro;                                              // 0x0260 (size: 0x8)
    FVector Z;                                                                        // 0x0268 (size: 0xC)
    FVector X;                                                                        // 0x0274 (size: 0xC)
    class AbaseWindow_C* window;                                                      // 0x0280 (size: 0x8)

    void upd();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_skerfuroWalk(int32 EntryPoint);
}; // Size: 0x288

#endif
