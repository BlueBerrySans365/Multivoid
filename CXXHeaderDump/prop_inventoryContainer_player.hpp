#ifndef UE4SS_SDK_prop_inventoryContainer_player_HPP
#define UE4SS_SDK_prop_inventoryContainer_player_HPP

class Aprop_inventoryContainer_player_C : public Aprop_container_C
{

    void getData(Fstruct_save& Data);
    void skipPreDelete(bool& Skip);
    void loadData(Fstruct_save Data, bool& return);
    void ignoreSave(bool& ignoreSave);
    void extract(int32 Index);
}; // Size: 0x42A

#endif
