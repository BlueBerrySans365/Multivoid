#ifndef UE4SS_SDK_prop_kerfurOmega_asmodena_HPP
#define UE4SS_SDK_prop_kerfurOmega_asmodena_HPP

class Aprop_kerfurOmega_asmodena_C : public Aprop_kerfurOmega_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0398 (size: 0x8)
    class UParticleSystemComponent* eff_fireball;                                     // 0x03A0 (size: 0x8)

    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_kerfurOmega_asmodena(int32 EntryPoint);
}; // Size: 0x3A8

#endif
