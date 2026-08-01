#ifndef UE4SS_SDK_zombieHordeController_HPP
#define UE4SS_SDK_zombieHordeController_HPP

class AzombieHordeController_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UAudioComponent* l4dz;                                                      // 0x0250 (size: 0x8)
    bool Active;                                                                      // 0x0258 (size: 0x1)
    int32 maxWaves;                                                                   // 0x025C (size: 0x4)
    int32 Wave;                                                                       // 0x0260 (size: 0x4)
    int32 difficulty;                                                                 // 0x0264 (size: 0x4)
    TMap<TSubclassOf<Anpc_zombie_C>, int32> zombieStack;                              // 0x0268 (size: 0x50)
    TMap<TSubclassOf<Anpc_zombie_C>, int32> wave1;                                    // 0x02B8 (size: 0x50)
    TMap<TSubclassOf<Anpc_zombie_C>, int32> wave2;                                    // 0x0308 (size: 0x50)
    TMap<TSubclassOf<Anpc_zombie_C>, int32> wave3;                                    // 0x0358 (size: 0x50)
    TMap<TSubclassOf<Anpc_zombie_C>, int32> wave4;                                    // 0x03A8 (size: 0x50)
    TMap<TSubclassOf<Anpc_zombie_C>, int32> wave5;                                    // 0x03F8 (size: 0x50)
    FTimerHandle TimerHandle;                                                         // 0x0448 (size: 0x8)
    TArray<class Anpc_zombie_C*> zombies;                                             // 0x0450 (size: 0x10)
    bool emptyStack;                                                                  // 0x0460 (size: 0x1)
    int32 maxZombies;                                                                 // 0x0464 (size: 0x4)
    TMap<TSubclassOf<Anpc_zombie_C>, int32> wave6;                                    // 0x0468 (size: 0x50)
    TArray<FName> weapons;                                                            // 0x04B8 (size: 0x10)
    bool skipInitial;                                                                 // 0x04C8 (size: 0x1)
    bool canFInish;                                                                   // 0x04C9 (size: 0x1)

    void spawnZombieFromStack(bool& Empty);
    void ReceiveBeginPlay();
    void initiateWave();
    void startTimer();
    void spawnZombieTimer();
    void AddZombie(const class Anpc_zombie_C*& NewItem);
    void destZombie(class AActor* DestroyedActor);
    void ExecuteUbergraph_zombieHordeController(int32 EntryPoint);
}; // Size: 0x4CA

#endif
