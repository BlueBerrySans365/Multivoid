#ifndef UE4SS_SDK_crossbowBolt_zeus_HPP
#define UE4SS_SDK_crossbowBolt_zeus_HPP

class AcrossbowBolt_zeus_C : public AcrossbowBolt_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x02A8 (size: 0x8)

    void boltHit(FHitResult Hit);
    void ExecuteUbergraph_crossbowBolt_zeus(int32 EntryPoint);
}; // Size: 0x2B0

#endif
