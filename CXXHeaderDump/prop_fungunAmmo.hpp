#ifndef UE4SS_SDK_prop_fungunAmmo_HPP
#define UE4SS_SDK_prop_fungunAmmo_HPP

class Aprop_fungunAmmo_C : public Aprop_C
{
    int32 Amount;                                                                     // 0x0364 (size: 0x4)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
}; // Size: 0x368

#endif
