#ifndef UE4SS_SDK_beehiveBranch_HPP
#define UE4SS_SDK_beehiveBranch_HPP

class AbeehiveBranch_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* beehiveSpawn;                                         // 0x0250 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0258 (size: 0x8)
    bool Spawn;                                                                       // 0x0260 (size: 0x1)
    class Aprop_waspnest_bee_C* hive;                                                 // 0x0268 (size: 0x8)
    FName hiveKey;                                                                    // 0x0270 (size: 0x8)

    void processKeys(bool& return);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void getBee();
    void touched();
    void ExecuteUbergraph_beehiveBranch(int32 EntryPoint);
}; // Size: 0x278

#endif
