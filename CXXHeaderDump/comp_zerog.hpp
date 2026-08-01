#ifndef UE4SS_SDK_comp_zerog_HPP
#define UE4SS_SDK_comp_zerog_HPP

class Ucomp_zerog_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    class AActor* Owner;                                                              // 0x00B8 (size: 0x8)
    class UPrimitiveComponent* Component;                                             // 0x00C0 (size: 0x8)
    class UParticleSystemComponent* eff;                                              // 0x00C8 (size: 0x8)
    float A;                                                                          // 0x00D0 (size: 0x4)
    bool dir;                                                                         // 0x00D4 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_comp_zerog(int32 EntryPoint);
}; // Size: 0xD5

#endif
