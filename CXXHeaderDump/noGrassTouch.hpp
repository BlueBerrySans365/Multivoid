#ifndef UE4SS_SDK_noGrassTouch_HPP
#define UE4SS_SDK_noGrassTouch_HPP

class AnoGrassTouch_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void step(FHitResult Hit, class AmainPlayer_C* Player);
    void ExecuteUbergraph_noGrassTouch(int32 EntryPoint);
}; // Size: 0x230

#endif
