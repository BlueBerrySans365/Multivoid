#ifndef UE4SS_SDK_cig_boof_HPP
#define UE4SS_SDK_cig_boof_HPP

class Acig_boof_C : public Acig_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)

    void dropped();
    void ExecuteUbergraph_cig_boof(int32 EntryPoint);
}; // Size: 0x298

#endif
