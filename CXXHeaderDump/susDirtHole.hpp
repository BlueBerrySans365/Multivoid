#ifndef UE4SS_SDK_susDirtHole_HPP
#define UE4SS_SDK_susDirtHole_HPP

class AsusDirtHole_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UChildActorComponent* hole;                                                 // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_susDirtHole(int32 EntryPoint);
}; // Size: 0x238

#endif
