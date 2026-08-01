#ifndef UE4SS_SDK_prop_floppyDisc_Bl_HPP
#define UE4SS_SDK_prop_floppyDisc_Bl_HPP

class Aprop_floppyDisc_Bl_C : public Aprop_floppyDisc_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)

    void ExecuteUbergraph_prop_floppyDisc_Bl(int32 EntryPoint);
}; // Size: 0x388

#endif
