#ifndef UE4SS_SDK_grime_arirGraffiti_HPP
#define UE4SS_SDK_grime_arirGraffiti_HPP

class Agrime_arirGraffiti_C : public Agrime_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0280 (size: 0x8)

    void SetMaterial();
    void applyMaterial();
    void ReceiveDestroyed();
    void ExecuteUbergraph_grime_arirGraffiti(int32 EntryPoint);
}; // Size: 0x288

#endif
