#ifndef UE4SS_SDK_prop_reel_HPP
#define UE4SS_SDK_prop_reel_HPP

class Aprop_reel_C : public Aprop_C
{
    float Progress;                                                                   // 0x0364 (size: 0x4)

    void getPriceMultiplier(float& priceMult);
    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
}; // Size: 0x368

#endif
