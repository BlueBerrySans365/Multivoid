#ifndef UE4SS_SDK_prop_wendSkull_HPP
#define UE4SS_SDK_prop_wendSkull_HPP

class Aprop_wendSkull_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)

    void ignite(float fuel);
    void microwave(class Aprop_microwave_C* microwave);
    void ExecuteUbergraph_prop_wendSkull(int32 EntryPoint);
}; // Size: 0x380

#endif
