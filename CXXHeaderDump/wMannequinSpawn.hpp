#ifndef UE4SS_SDK_wMannequinSpawn_HPP
#define UE4SS_SDK_wMannequinSpawn_HPP

class AwMannequinSpawn_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0250 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0258 (size: 0x8)

    void Spawn(bool& return);
    void prepareSpawn();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_wMannequinSpawn(int32 EntryPoint);
}; // Size: 0x260

#endif
