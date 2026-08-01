#ifndef UE4SS_SDK_cig_cigar_HPP
#define UE4SS_SDK_cig_cigar_HPP

class Acig_cigar_C : public Acig_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)

    void dropped();
    void ExecuteUbergraph_cig_cigar(int32 EntryPoint);
}; // Size: 0x298

#endif
