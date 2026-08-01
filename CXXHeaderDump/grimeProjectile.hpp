#ifndef UE4SS_SDK_grimeProjectile_HPP
#define UE4SS_SDK_grimeProjectile_HPP

class AgrimeProjectile_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0228 (size: 0x8)
    FVector lastloc;                                                                  // 0x0230 (size: 0xC)
    TSubclassOf<class Agrime_C> grunge;                                               // 0x0240 (size: 0x8)
    FVector Velocity;                                                                 // 0x0248 (size: 0xC)
    float Size;                                                                       // 0x0254 (size: 0x4)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_grimeProjectile(int32 EntryPoint);
}; // Size: 0x258

#endif
