#ifndef UE4SS_SDK_prop_aimodule_HPP
#define UE4SS_SDK_prop_aimodule_HPP

class Aprop_aimodule_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* eff_blinker;                                      // 0x0370 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_aimodule(int32 EntryPoint);
}; // Size: 0x378

#endif
