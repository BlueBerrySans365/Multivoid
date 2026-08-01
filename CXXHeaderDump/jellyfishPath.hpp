#ifndef UE4SS_SDK_jellyfishPath_HPP
#define UE4SS_SDK_jellyfishPath_HPP

class AjellyfishPath_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* Target;                                                // 0x0228 (size: 0x8)
    class UBillboardComponent* Root;                                                  // 0x0230 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    FVector Loc;                                                                      // 0x0248 (size: 0xC)
    FVector lastloc;                                                                  // 0x0254 (size: 0xC)
    TArray<FVector> locs;                                                             // 0x0260 (size: 0x10)
    TArray<class Ajellyfish_C*> fishes;                                               // 0x0270 (size: 0x10)
    bool IsActive;                                                                    // 0x0280 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void Spawn();
    void ExecuteUbergraph_jellyfishPath(int32 EntryPoint);
}; // Size: 0x281

#endif
