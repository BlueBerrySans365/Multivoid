#ifndef UE4SS_SDK_blooder_HPP
#define UE4SS_SDK_blooder_HPP

class Ablooder_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    int32 Amount;                                                                     // 0x0230 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_blooder(int32 EntryPoint);
}; // Size: 0x234

#endif
