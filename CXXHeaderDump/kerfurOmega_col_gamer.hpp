#ifndef UE4SS_SDK_kerfurOmega_col_gamer_HPP
#define UE4SS_SDK_kerfurOmega_col_gamer_HPP

class AkerfurOmega_col_gamer_C : public AkerfurOmega_col_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0A08 (size: 0x8)

    void dropKerfurProp();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_kerfurOmega_col_gamer(int32 EntryPoint);
}; // Size: 0xA10

#endif
