#ifndef UE4SS_SDK_prop_greenfireStone_HPP
#define UE4SS_SDK_prop_greenfireStone_HPP

class Aprop_greenfireStone_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)
    class UParticleSystemComponent* eff_burningC1;                                    // 0x0380 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_greenfireStone(int32 EntryPoint);
}; // Size: 0x388

#endif
