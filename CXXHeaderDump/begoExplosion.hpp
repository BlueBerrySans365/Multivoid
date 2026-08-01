#ifndef UE4SS_SDK_begoExplosion_HPP
#define UE4SS_SDK_begoExplosion_HPP

class AbegoExplosion_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* rend;                                                 // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_begoExplosion(int32 EntryPoint);
}; // Size: 0x238

#endif
