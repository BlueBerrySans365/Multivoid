#ifndef UE4SS_SDK_prop_wireComponent_jet_HPP
#define UE4SS_SDK_prop_wireComponent_jet_HPP

class Aprop_wireComponent_jet_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UAudioComponent* rozbeam_loop;                                              // 0x0378 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0380 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0388 (size: 0x8)
    float Force;                                                                      // 0x0390 (size: 0x4)

    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_jet(int32 EntryPoint);
}; // Size: 0x394

#endif
