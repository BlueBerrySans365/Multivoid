#ifndef UE4SS_SDK_prop_faucet_HPP
#define UE4SS_SDK_prop_faucet_HPP

class Aprop_faucet_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    bool Filter(const class UPhysicalMaterial*& ItemToFind);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_faucet(int32 EntryPoint);
}; // Size: 0x370

#endif
