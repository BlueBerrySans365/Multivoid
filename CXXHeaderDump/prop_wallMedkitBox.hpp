#ifndef UE4SS_SDK_prop_wallMedkitBox_HPP
#define UE4SS_SDK_prop_wallMedkitBox_HPP

class Aprop_wallMedkitBox_C : public Aprop_wallAttachable_C
{
    class UChildActorComponent* door;                                                 // 0x03D8 (size: 0x8)

    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void skipPreDelete(bool& Skip);
}; // Size: 0x3E0

#endif
