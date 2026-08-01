#ifndef UE4SS_SDK_prop_wireComponent_wireless_HPP
#define UE4SS_SDK_prop_wireComponent_wireless_HPP

class Aprop_wireComponent_wireless_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0378 (size: 0x8)
    class Aprop_wireComponent_wireless_C* to;                                         // 0x0380 (size: 0x8)
    class Awire_C* connectOut;                                                        // 0x0388 (size: 0x8)

    void wireConnected(class Awire_C* wire, bool side);
    void wireDisconnected(class Awire_C* wire, bool side);
    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_wireless(int32 EntryPoint);
}; // Size: 0x390

#endif
