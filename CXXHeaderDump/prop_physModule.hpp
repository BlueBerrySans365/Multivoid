#ifndef UE4SS_SDK_prop_physModule_HPP
#define UE4SS_SDK_prop_physModule_HPP

class Aprop_physModule_C : public Aprop_C
{
    TEnumAsByte<enum_physicalModules::Type> Module;                                   // 0x0363 (size: 0x1)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
}; // Size: 0x364

#endif
