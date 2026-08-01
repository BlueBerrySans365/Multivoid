#ifndef UE4SS_SDK_fallingBody_HPP
#define UE4SS_SDK_fallingBody_HPP

class AfallingBody_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* hollow1;                                              // 0x0228 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0230 (size: 0x8)
    FVector prev;                                                                     // 0x0238 (size: 0xC)
    TArray<FName> Drop;                                                               // 0x0248 (size: 0x10)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_fallingBody(int32 EntryPoint);
}; // Size: 0x258

#endif
