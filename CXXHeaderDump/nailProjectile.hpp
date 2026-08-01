#ifndef UE4SS_SDK_nailProjectile_HPP
#define UE4SS_SDK_nailProjectile_HPP

class AnailProjectile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* coll;                                                     // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    FVector lastloc;                                                                  // 0x0238 (size: 0xC)
    FVector Force;                                                                    // 0x0244 (size: 0xC)
    TSubclassOf<class Anail_C> nailType;                                              // 0x0250 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_nailProjectile(int32 EntryPoint);
}; // Size: 0x258

#endif
