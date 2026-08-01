#ifndef UE4SS_SDK_oilStainSpawn_HPP
#define UE4SS_SDK_oilStainSpawn_HPP

class AoilStainSpawn_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void Spawn();
    void ExecuteUbergraph_oilStainSpawn(int32 EntryPoint);
}; // Size: 0x238

#endif
