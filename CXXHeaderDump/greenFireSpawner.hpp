#ifndef UE4SS_SDK_greenFireSpawner_HPP
#define UE4SS_SDK_greenFireSpawner_HPP

class AgreenFireSpawner_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0258 (size: 0x8)
    class Agreenfire_C* greenfire;                                                    // 0x0260 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_greenFireSpawner(int32 EntryPoint);
}; // Size: 0x268

#endif
