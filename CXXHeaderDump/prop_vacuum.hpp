#ifndef UE4SS_SDK_prop_vacuum_HPP
#define UE4SS_SDK_prop_vacuum_HPP

class Aprop_vacuum_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0378 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x0380 (size: 0x8)
    FVector Loc;                                                                      // 0x0388 (size: 0xC)
    FVector vec;                                                                      // 0x0394 (size: 0xC)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x03A0 (size: 0x10)

    void ReceiveTick(float DeltaSeconds);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_vacuum(int32 EntryPoint);
}; // Size: 0x3B0

#endif
