#ifndef UE4SS_SDK_prop_physgun_s_HPP
#define UE4SS_SDK_prop_physgun_s_HPP

class Aprop_physgun_s_C : public Aprop_physgun_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class UParticleSystemComponent* charges;                                          // 0x0598 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_physgun_s(int32 EntryPoint);
}; // Size: 0x5A0

#endif
