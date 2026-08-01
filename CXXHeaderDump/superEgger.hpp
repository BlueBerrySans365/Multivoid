#ifndef UE4SS_SDK_superEgger_HPP
#define UE4SS_SDK_superEgger_HPP

class AsuperEgger_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    TArray<FVector> Grid;                                                             // 0x0230 (size: 0x10)
    int32 Size;                                                                       // 0x0240 (size: 0x4)
    float Scale;                                                                      // 0x0244 (size: 0x4)

    void ReceiveBeginPlay();
    void spwn();
    void ExecuteUbergraph_superEgger(int32 EntryPoint);
}; // Size: 0x248

#endif
