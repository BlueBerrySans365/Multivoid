#ifndef UE4SS_SDK_baseCleaner_HPP
#define UE4SS_SDK_baseCleaner_HPP

class AbaseCleaner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    TArray<class TSubclassOf<AActor>> cleanObjects;                                   // 0x0238 (size: 0x10)
    int32 Add;                                                                        // 0x0248 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_baseCleaner(int32 EntryPoint);
}; // Size: 0x24C

#endif
