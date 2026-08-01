#ifndef UE4SS_SDK_fuelingArir_HPP
#define UE4SS_SDK_fuelingArir_HPP

class AfuelingArir_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* Spawn;                                                 // 0x0228 (size: 0x8)
    class UBillboardComponent* Eye;                                                   // 0x0230 (size: 0x8)
    class UStaticMeshComponent* gas;                                                  // 0x0238 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    TSubclassOf<class AActor> Drop;                                                   // 0x0250 (size: 0x8)

    void checkVisible();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_fuelingArir(int32 EntryPoint);
}; // Size: 0x258

#endif
