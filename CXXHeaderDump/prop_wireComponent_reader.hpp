#ifndef UE4SS_SDK_prop_wireComponent_reader_HPP
#define UE4SS_SDK_prop_wireComponent_reader_HPP

class Aprop_wireComponent_reader_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0378 (size: 0x8)
    class Awire_C* wire_looking;                                                      // 0x0380 (size: 0x8)
    class Awire_C* wire_pass;                                                         // 0x0388 (size: 0x8)
    bool iinverted;                                                                   // 0x0390 (size: 0x1)

    void wirePass(class Awire_C* wire);
    void wireConnected(class Awire_C* wire, bool side);
    void wireDisconnected(class Awire_C* wire, bool side);
    void ExecuteUbergraph_prop_wireComponent_reader(int32 EntryPoint);
}; // Size: 0x391

#endif
