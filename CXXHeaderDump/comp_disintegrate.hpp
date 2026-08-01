#ifndef UE4SS_SDK_comp_disintegrate_HPP
#define UE4SS_SDK_comp_disintegrate_HPP

class Ucomp_disintegrate_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    FVector Force;                                                                    // 0x00B8 (size: 0xC)
    float A;                                                                          // 0x00C4 (size: 0x4)
    TArray<class UPrimitiveComponent*> comps;                                         // 0x00C8 (size: 0x10)
    TArray<class UMaterialInstanceDynamic*> mats;                                     // 0x00D8 (size: 0x10)
    class UParticleSystemComponent* particle;                                         // 0x00E8 (size: 0x8)
    bool silent;                                                                      // 0x00F0 (size: 0x1)

    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_comp_disintegrate(int32 EntryPoint);
}; // Size: 0xF1

#endif
