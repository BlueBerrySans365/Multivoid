#ifndef UE4SS_SDK_prop_mannequin_HPP
#define UE4SS_SDK_prop_mannequin_HPP

class Aprop_mannequin_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_mannequin(int32 EntryPoint);
}; // Size: 0x370

#endif
