#ifndef UE4SS_SDK_prop_jacko_HPP
#define UE4SS_SDK_prop_jacko_HPP

class Aprop_jacko_C : public Aprop_C
{
    class UStaticMeshComponent* flame;                                                // 0x0368 (size: 0x8)
    class UStaticMeshComponent* canDL;                                                // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)

    void Init();
}; // Size: 0x380

#endif
