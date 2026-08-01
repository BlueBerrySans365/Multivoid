#ifndef UE4SS_SDK_telescopeObject_HPP
#define UE4SS_SDK_telescopeObject_HPP

class AtelescopeObject_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* top1;                                                      // 0x0228 (size: 0x8)
    class UArrowComponent* Top;                                                       // 0x0230 (size: 0x8)
    class UBillboardComponent* Base;                                                  // 0x0238 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0240 (size: 0x8)
    float Distance;                                                                   // 0x0248 (size: 0x4)
    float orbit;                                                                      // 0x024C (size: 0x4)
    float rot;                                                                        // 0x0250 (size: 0x4)
    float arrowRot;                                                                   // 0x0254 (size: 0x4)
    bool Tick;                                                                        // 0x0258 (size: 0x1)

    void setTick(bool Tick);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_telescopeObject(int32 EntryPoint);
}; // Size: 0x259

#endif
