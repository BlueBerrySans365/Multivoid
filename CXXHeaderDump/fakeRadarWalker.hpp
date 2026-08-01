#ifndef UE4SS_SDK_fakeRadarWalker_HPP
#define UE4SS_SDK_fakeRadarWalker_HPP

class AfakeRadarWalker_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0230 (size: 0x8)
    FVector StartLoc;                                                                 // 0x0238 (size: 0xC)

    void ReceiveBeginPlay();
    void setLoc();
    void ExecuteUbergraph_fakeRadarWalker(int32 EntryPoint);
}; // Size: 0x244

#endif
