#ifndef UE4SS_SDK_event_fossilBoarWar_HPP
#define UE4SS_SDK_event_fossilBoarWar_HPP

class Aevent_fossilBoarWar_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBoxComponent* Min;                                                         // 0x0228 (size: 0x8)
    class UBoxComponent* Max;                                                         // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)

    FVector spawnLoc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_event_fossilBoarWar(int32 EntryPoint);
}; // Size: 0x240

#endif
