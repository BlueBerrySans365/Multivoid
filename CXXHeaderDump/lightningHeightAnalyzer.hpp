#ifndef UE4SS_SDK_lightningHeightAnalyzer_HPP
#define UE4SS_SDK_lightningHeightAnalyzer_HPP

class AlightningHeightAnalyzer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    int32 checkAmount;                                                                // 0x0230 (size: 0x4)
    float heightZ;                                                                    // 0x0234 (size: 0x4)
    TArray<float> hZ;                                                                 // 0x0238 (size: 0x10)
    TArray<FVector> Hloc;                                                             // 0x0248 (size: 0x10)
    TArray<class AActor*> ignores;                                                    // 0x0258 (size: 0x10)
    class AInstancedFoliageActor* Foliage;                                            // 0x0268 (size: 0x8)
    FVector Offset;                                                                   // 0x0270 (size: 0xC)
    float Search;                                                                     // 0x027C (size: 0x4)
    float chance;                                                                     // 0x0280 (size: 0x4)
    bool lightningRod;                                                                // 0x0284 (size: 0x1)
    FVector lightningRodLocation;                                                     // 0x0288 (size: 0xC)
    class AbaseLightningRod_C* rod;                                                   // 0x0298 (size: 0x8)

    void multHeight(class UPhysicalMaterial* InputPin, TSubclassOf<class AActor> Class, float& mult);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_lightningHeightAnalyzer(int32 EntryPoint);
}; // Size: 0x2A0

#endif
