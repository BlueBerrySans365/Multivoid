#ifndef UE4SS_SDK_radiotowerPoof_HPP
#define UE4SS_SDK_radiotowerPoof_HPP

class AradiotowerPoof_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0230 (size: 0x8)
    float D;                                                                          // 0x0238 (size: 0x4)
    float d2;                                                                         // 0x023C (size: 0x4)

    void check();
    void reappear();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_radiotowerPoof(int32 EntryPoint);
}; // Size: 0x240

#endif
