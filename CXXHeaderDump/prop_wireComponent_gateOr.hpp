#ifndef UE4SS_SDK_prop_wireComponent_gateOr_HPP
#define UE4SS_SDK_prop_wireComponent_gateOr_HPP

class Aprop_wireComponent_gateOr_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0378 (size: 0x8)
    TArray<class Awire_C*> wires;                                                     // 0x0380 (size: 0x10)
    TArray<class Awire_C*> passed;                                                    // 0x0390 (size: 0x10)
    class Awire_C* passTo;                                                            // 0x03A0 (size: 0x8)
    bool T;                                                                           // 0x03A8 (size: 0x1)

    void wireConnected(class Awire_C* wire, bool side);
    void wireDisconnected(class Awire_C* wire, bool side);
    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_gateOr(int32 EntryPoint);
}; // Size: 0x3A9

#endif
