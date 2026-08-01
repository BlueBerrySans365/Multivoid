#ifndef UE4SS_SDK_plungerProjectile_HPP
#define UE4SS_SDK_plungerProjectile_HPP

class AplungerProjectile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0228 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0230 (size: 0x8)
    FVector Loc;                                                                      // 0x0238 (size: 0xC)
    FVector vel;                                                                      // 0x0244 (size: 0xC)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_plungerProjectile(int32 EntryPoint);
}; // Size: 0x250

#endif
