#ifndef UE4SS_SDK_boarInvasion_HPP
#define UE4SS_SDK_boarInvasion_HPP

class AboarInvasion_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    int32 boarCount;                                                                  // 0x0230 (size: 0x4)
    TArray<class AActor*> boars;                                                      // 0x0238 (size: 0x10)
    FTimerHandle Timer;                                                               // 0x0248 (size: 0x8)
    class Atreehouse_C* treehouse;                                                    // 0x0250 (size: 0x8)
    bool Stop;                                                                        // 0x0258 (size: 0x1)
    class Aufoshieldshader_C* ufodrop;                                                // 0x0260 (size: 0x8)

    void throwOut(class AActor* Actor);
    void ReceiveBeginPlay();
    void Spawn();
    void boarKill(class AActor* DestroyedActor);
    void ExecuteUbergraph_boarInvasion(int32 EntryPoint);
}; // Size: 0x268

#endif
