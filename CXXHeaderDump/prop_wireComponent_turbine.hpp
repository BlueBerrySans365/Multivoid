#ifndef UE4SS_SDK_prop_wireComponent_turbine_HPP
#define UE4SS_SDK_prop_wireComponent_turbine_HPP

class Aprop_wireComponent_turbine_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UAudioComponent* underwaterLoop;                                            // 0x0378 (size: 0x8)
    class UAudioComponent* regular;                                                   // 0x0380 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0388 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0390 (size: 0x8)
    float Force;                                                                      // 0x0398 (size: 0x4)
    bool underwater;                                                                  // 0x039C (size: 0x1)

    void wirePass(class Awire_C* wire);
    void enteredTheWater();
    void exitTheWater();
    void ExecuteUbergraph_prop_wireComponent_turbine(int32 EntryPoint);
}; // Size: 0x39D

#endif
