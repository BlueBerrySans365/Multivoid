#ifndef UE4SS_SDK_ladder_curved_HPP
#define UE4SS_SDK_ladder_curved_HPP

class Aladder_curved_C : public Aladder_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0308 (size: 0x8)
    class UCapsuleComponent* getOn;                                                   // 0x0310 (size: 0x8)
    class USplineComponent* ladderSpline;                                             // 0x0318 (size: 0x8)

    bool seLoc();
    FVector getClosestLoc(FVector Point);
    void upd();
    void setSpline();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ladder_curved(int32 EntryPoint);
}; // Size: 0x320

#endif
