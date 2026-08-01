#ifndef UE4SS_SDK_prop_crystal_explode_HPP
#define UE4SS_SDK_prop_crystal_explode_HPP

class Aprop_crystal_explode_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)

    void broken();
    void ExecuteUbergraph_prop_crystal_explode(int32 EntryPoint);
}; // Size: 0x380

#endif
