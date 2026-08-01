#ifndef UE4SS_SDK_batchSpawner_HPP
#define UE4SS_SDK_batchSpawner_HPP

class AbatchSpawner_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    TArray<class AActor*> spawned;                                                    // 0x0250 (size: 0x10)
    bool isSpawned;                                                                   // 0x0260 (size: 0x1)

    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void Spawn();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_batchSpawner(int32 EntryPoint);
}; // Size: 0x261

#endif
