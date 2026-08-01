#ifndef UE4SS_SDK_rockThrower_HPP
#define UE4SS_SDK_rockThrower_HPP

class ArockThrower_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0230 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    int32 Count;                                                                      // 0x0248 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_rockThrower(int32 EntryPoint);
}; // Size: 0x24C

#endif
