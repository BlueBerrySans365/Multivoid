#ifndef UE4SS_SDK_prop_floppyDisc_HPP
#define UE4SS_SDK_prop_floppyDisc_HPP

class Aprop_floppyDisc_C : public Aprop_C
{
    TArray<FString> Data;                                                             // 0x0368 (size: 0x10)
    bool zip;                                                                         // 0x0378 (size: 0x1)
    int32 readWrites;                                                                 // 0x037C (size: 0x4)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
}; // Size: 0x380

#endif
