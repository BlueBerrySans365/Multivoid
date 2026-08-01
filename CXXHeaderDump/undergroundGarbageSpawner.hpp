#ifndef UE4SS_SDK_undergroundGarbageSpawner_HPP
#define UE4SS_SDK_undergroundGarbageSpawner_HPP

class AundergroundGarbageSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    TMap<FName, float> loot;                                                          // 0x0230 (size: 0x50)
    TArray<FName> Items;                                                              // 0x0280 (size: 0x10)
    TArray<float> Weights;                                                            // 0x0290 (size: 0x10)
    class ALandscape* Landscape;                                                      // 0x02A0 (size: 0x8)
    FVector2D spawnRadius;                                                            // 0x02A8 (size: 0x8)
    float Duration;                                                                   // 0x02B0 (size: 0x4)
    bool skipLandscape;                                                               // 0x02B4 (size: 0x1)
    bool aroundPlayer;                                                                // 0x02B5 (size: 0x1)
    bool Run;                                                                         // 0x02B6 (size: 0x1)
    TMap<FName, float> debugPercents;                                                 // 0x02B8 (size: 0x50)
    TMap<FName, int32> debugChance;                                                   // 0x0308 (size: 0x50)
    class AmainGamemode_C* GameMode;                                                  // 0x0358 (size: 0x8)

    void prepareItems(FVector Loc);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void Timer();
    void ExecuteUbergraph_undergroundGarbageSpawner(int32 EntryPoint);
}; // Size: 0x360

#endif
