#ifndef UE4SS_SDK_prop_serverUpg_HPP
#define UE4SS_SDK_prop_serverUpg_HPP

class Aprop_serverUpg_C : public Aprop_C
{
    uint8 upg;                                                                        // 0x0363 (size: 0x1)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
}; // Size: 0x364

#endif
