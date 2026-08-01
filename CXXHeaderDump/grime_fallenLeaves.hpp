#ifndef UE4SS_SDK_grime_fallenLeaves_HPP
#define UE4SS_SDK_grime_fallenLeaves_HPP

class Agrime_fallenLeaves_C : public Agrime_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)

    void SetMaterial();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_grime_fallenLeaves(int32 EntryPoint);
}; // Size: 0x288

#endif
