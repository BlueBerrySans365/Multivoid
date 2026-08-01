#ifndef UE4SS_SDK_comp_cognitive_HPP
#define UE4SS_SDK_comp_cognitive_HPP

class Ucomp_cognitive_C : public USceneComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0200 (size: 0x8)
    class UcensScreen_C* scr;                                                         // 0x0208 (size: 0x8)
    TArray<FVector> Array;                                                            // 0x0210 (size: 0x10)
    bool isHidden;                                                                    // 0x0220 (size: 0x1)
    class UcensScreen_C* che;                                                         // 0x0228 (size: 0x8)
    bool checkHidden;                                                                 // 0x0230 (size: 0x1)
    FVector2D scrVec;                                                                 // 0x0234 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void Dest(class AActor* DestroyedActor);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_comp_cognitive(int32 EntryPoint);
}; // Size: 0x23C

#endif
