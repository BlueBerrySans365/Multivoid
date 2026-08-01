#ifndef UE4SS_SDK_droneSpline_HPP
#define UE4SS_SDK_droneSpline_HPP

class AdroneSpline_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    bool upd;                                                                         // 0x0238 (size: 0x1)
    int32 Points;                                                                     // 0x023C (size: 0x4)
    TArray<FVector> pointsSPawn;                                                      // 0x0240 (size: 0x10)
    class Adrone_C* drone;                                                            // 0x0250 (size: 0x8)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_droneSpline(int32 EntryPoint);
}; // Size: 0x258

#endif
