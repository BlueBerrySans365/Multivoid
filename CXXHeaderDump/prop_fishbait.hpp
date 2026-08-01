#ifndef UE4SS_SDK_prop_fishbait_HPP
#define UE4SS_SDK_prop_fishbait_HPP

class Aprop_fishbait_C : public Aprop_C
{
    float Exponent;                                                                   // 0x0364 (size: 0x4)
    float eat;                                                                        // 0x0368 (size: 0x4)
    float lure;                                                                       // 0x036C (size: 0x4)
    TMap<FName, float> addLoot;                                                       // 0x0370 (size: 0x50)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
}; // Size: 0x3C0

#endif
