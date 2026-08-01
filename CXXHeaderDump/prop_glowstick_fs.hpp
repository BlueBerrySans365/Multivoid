#ifndef UE4SS_SDK_prop_glowstick_fs_HPP
#define UE4SS_SDK_prop_glowstick_fs_HPP

class Aprop_glowstick_fs_C : public Aprop_glowstick_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0420 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0428 (size: 0x8)
    class UPointLightComponent* PointLight1;                                          // 0x0430 (size: 0x8)
    float Timeline_0_a_289DC9E040000A03997399A8D180CED8;                              // 0x0438 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_289DC9E040000A03997399A8D180CED8; // 0x043C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0440 (size: 0x8)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void begone(class AActor* Target);
    void ExecuteUbergraph_prop_glowstick_fs(int32 EntryPoint);
}; // Size: 0x448

#endif
