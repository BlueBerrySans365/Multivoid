#ifndef UE4SS_SDK_easterEggSpawn_HPP
#define UE4SS_SDK_easterEggSpawn_HPP

class AeasterEggSpawn_C : public AActor
{
    class UStaticMeshComponent* cube;                                                 // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    FName egg;                                                                        // 0x0238 (size: 0x8)

    void spawnEgg();
    void UserConstructionScript();
}; // Size: 0x240

#endif
