#ifndef UE4SS_SDK_superFog_HPP
#define UE4SS_SDK_superFog_HPP

class AsuperFog_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    class AdaynightCycle_C* cyc;                                                      // 0x0230 (size: 0x8)
    float Alpha;                                                                      // 0x0238 (size: 0x4)
    float Duration;                                                                   // 0x023C (size: 0x4)
    float Thickness;                                                                  // 0x0240 (size: 0x4)
    class AHoelUfo_C* UFO;                                                            // 0x0248 (size: 0x8)

    void Point(const FVector& OutputPin);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void spawnUfo();
    void ExecuteUbergraph_superFog(int32 EntryPoint);
}; // Size: 0x250

#endif
