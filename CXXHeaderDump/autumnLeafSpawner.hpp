#ifndef UE4SS_SDK_autumnLeafSpawner_HPP
#define UE4SS_SDK_autumnLeafSpawner_HPP

class AautumnLeafSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Area;                                                 // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float Spread;                                                                     // 0x0238 (size: 0x4)
    float Frequency;                                                                  // 0x023C (size: 0x4)
    float testSize;                                                                   // 0x0240 (size: 0x4)
    float minSlope;                                                                   // 0x0244 (size: 0x4)
    float minDistance;                                                                // 0x0248 (size: 0x4)

    void spawnLeaves();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_autumnLeafSpawner(int32 EntryPoint);
}; // Size: 0x24C

#endif
