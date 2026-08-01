#ifndef UE4SS_SDK_NewBlueprint17_HPP
#define UE4SS_SDK_NewBlueprint17_HPP

class ANewBlueprint17_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    bool Condition;                                                                   // 0x0230 (size: 0x1)
    FString NewVar_0;                                                                 // 0x0238 (size: 0x10)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_NewBlueprint17(int32 EntryPoint);
}; // Size: 0x248

#endif
