#ifndef UE4SS_SDK_int_save_HPP
#define UE4SS_SDK_int_save_HPP

class Iint_save_C : public IInterface
{

    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void skipPreDelete(bool& Skip);
    void setIgnoreSave(bool ignore);
    void ignoreSave(bool& ignoreSave);
    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
}; // Size: 0x28

#endif
