#ifndef UE4SS_SDK_dreamBase_HPP
#define UE4SS_SDK_dreamBase_HPP

class AdreamBase_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0228 (size: 0x8)
    class UCapsuleComponent* playercapsule;                                           // 0x0230 (size: 0x8)
    class UBillboardComponent* playerSpawn;                                           // 0x0238 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0240 (size: 0x8)
    class USkyLightComponent* SkyLight;                                               // 0x0248 (size: 0x8)
    class UAudioComponent* dream;                                                     // 0x0250 (size: 0x8)
    class UStaticMeshComponent* sky;                                                  // 0x0258 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0260 (size: 0x8)
    float Duration;                                                                   // 0x0268 (size: 0x4)
    TArray<Fstruct_save> inventory;                                                   // 0x0270 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x0280 (size: 0x8)

    void naturalWakeup();
    void awoken();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_dreamBase(int32 EntryPoint);
}; // Size: 0x288

#endif
