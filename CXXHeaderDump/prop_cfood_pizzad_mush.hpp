#ifndef UE4SS_SDK_prop_cfood_pizzad_mush_HPP
#define UE4SS_SDK_prop_cfood_pizzad_mush_HPP

class Aprop_cfood_pizzad_mush_C : public Aprop_cookingFood_C
{

    void cookItem();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
}; // Size: 0x408

#endif
