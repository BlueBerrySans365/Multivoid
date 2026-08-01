#ifndef UE4SS_SDK_prop_wireComponent_HPP
#define UE4SS_SDK_prop_wireComponent_HPP

class Aprop_wireComponent_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void wirePass(class Awire_C* wire);
    void wireConnected(class Awire_C* wire, bool side);
    void wireDisconnected(class Awire_C* wire, bool side);
    void ExecuteUbergraph_prop_wireComponent(int32 EntryPoint);
}; // Size: 0x370

#endif
