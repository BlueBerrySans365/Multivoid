#ifndef UE4SS_SDK_kerfurOmega_mynet_HPP
#define UE4SS_SDK_kerfurOmega_mynet_HPP

class AkerfurOmega_mynet_C : public AkerfurOmega_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    class UAudioComponent* eff_zapp2;                                                 // 0x09F8 (size: 0x8)
    class UAudioComponent* eff_zapp1;                                                 // 0x0A00 (size: 0x8)
    class UAudioComponent* eff_zapp;                                                  // 0x0A08 (size: 0x8)
    class UParticleSystemComponent* eff_pofinStatic7;                                 // 0x0A10 (size: 0x8)
    class UParticleSystemComponent* eff_pofinStatic6;                                 // 0x0A18 (size: 0x8)
    class UParticleSystemComponent* eff_pofinStatic5;                                 // 0x0A20 (size: 0x8)
    class UParticleSystemComponent* eff_pofinStatic4;                                 // 0x0A28 (size: 0x8)
    class UParticleSystemComponent* eff_pofinStatic3;                                 // 0x0A30 (size: 0x8)
    class UParticleSystemComponent* eff_pofinStatic2;                                 // 0x0A38 (size: 0x8)
    class UParticleSystemComponent* eff_pofinStatic1;                                 // 0x0A40 (size: 0x8)
    class UParticleSystemComponent* eff_pofinStatic;                                  // 0x0A48 (size: 0x8)
    class UDecalComponent* Decal10;                                                   // 0x0A50 (size: 0x8)
    class UDecalComponent* Decal9;                                                    // 0x0A58 (size: 0x8)
    class UDecalComponent* Decal8;                                                    // 0x0A60 (size: 0x8)
    class UDecalComponent* Decal7;                                                    // 0x0A68 (size: 0x8)
    class UDecalComponent* Decal6;                                                    // 0x0A70 (size: 0x8)
    class UDecalComponent* Decal5;                                                    // 0x0A78 (size: 0x8)
    class UDecalComponent* Decal4;                                                    // 0x0A80 (size: 0x8)
    class UDecalComponent* Decal3;                                                    // 0x0A88 (size: 0x8)
    class UDecalComponent* Decal2;                                                    // 0x0A90 (size: 0x8)
    class UDecalComponent* Decal1;                                                    // 0x0A98 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0AA0 (size: 0x8)
    class UBillboardComponent* foot_L;                                                // 0x0AA8 (size: 0x8)
    class UBillboardComponent* foot_R;                                                // 0x0AB0 (size: 0x8)
    class UParticleSystemComponent* eff_bin_pelvis;                                   // 0x0AB8 (size: 0x8)
    class UParticleSystemComponent* eff_bin_lowlegL;                                  // 0x0AC0 (size: 0x8)
    class UParticleSystemComponent* eff_bin_lowlegR;                                  // 0x0AC8 (size: 0x8)
    class UParticleSystemComponent* eff_bin_thighL;                                   // 0x0AD0 (size: 0x8)
    class UParticleSystemComponent* eff_bin_thighR;                                   // 0x0AD8 (size: 0x8)
    class UParticleSystemComponent* eff_bin_fArmL;                                    // 0x0AE0 (size: 0x8)
    class UParticleSystemComponent* eff_bin_fArmR;                                    // 0x0AE8 (size: 0x8)
    class UParticleSystemComponent* eff_bin_armL;                                     // 0x0AF0 (size: 0x8)
    class UParticleSystemComponent* eff_bin_armR;                                     // 0x0AF8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_legR;                                      // 0x0B00 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_legL;                                      // 0x0B08 (size: 0x8)

    void createFeet();
    void step(FVector Location);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_kerfurOmega_mynet(int32 EntryPoint);
}; // Size: 0xB10

#endif
