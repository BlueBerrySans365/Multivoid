#ifndef UE4SS_SDK_ABplushSpawner_HPP
#define UE4SS_SDK_ABplushSpawner_HPP

class AABplushSpawner_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0250 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0258 (size: 0x8)
    float rad;                                                                        // 0x0260 (size: 0x4)

    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ABplushSpawner(int32 EntryPoint);
}; // Size: 0x264

#endif
