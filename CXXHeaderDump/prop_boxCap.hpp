#ifndef UE4SS_SDK_prop_boxCap_HPP
#define UE4SS_SDK_prop_boxCap_HPP

class Aprop_boxCap_C : public Aprop_C
{
    int32 Level;                                                                      // 0x0364 (size: 0x4)

    void Init();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
}; // Size: 0x368

#endif
