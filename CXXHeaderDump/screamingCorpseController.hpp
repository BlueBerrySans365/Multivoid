#ifndef UE4SS_SDK_screamingCorpseController_HPP
#define UE4SS_SDK_screamingCorpseController_HPP

class AscreamingCorpseController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    FString NewVar_0;                                                                 // 0x0230 (size: 0x10)
    FVector NewVar_1;                                                                 // 0x0240 (size: 0xC)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_screamingCorpseController(int32 EntryPoint);
}; // Size: 0x24C

#endif
