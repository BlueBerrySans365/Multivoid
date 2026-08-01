#ifndef UE4SS_SDK_arirBusterSpawner_HPP
#define UE4SS_SDK_arirBusterSpawner_HPP

class AarirBusterSpawner_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UChildActorComponent* ChildActor6;                                          // 0x0228 (size: 0x8)
    class UChildActorComponent* ChildActor5;                                          // 0x0230 (size: 0x8)
    class UChildActorComponent* ChildActor4;                                          // 0x0238 (size: 0x8)
    class UChildActorComponent* ChildActor3;                                          // 0x0240 (size: 0x8)
    class UChildActorComponent* ChildActor2;                                          // 0x0248 (size: 0x8)
    class UChildActorComponent* ChildActor1;                                          // 0x0250 (size: 0x8)
    class UChildActorComponent* ChildActor;                                           // 0x0258 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0260 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_arirBusterSpawner(int32 EntryPoint);
}; // Size: 0x268

#endif
