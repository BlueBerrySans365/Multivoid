#ifndef UE4SS_SDK_prop_coffeeBag_HPP
#define UE4SS_SDK_prop_coffeeBag_HPP

class Aprop_coffeeBag_C : public Aprop_C
{
    int32 amounts;                                                                    // 0x0364 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
}; // Size: 0x368

#endif
