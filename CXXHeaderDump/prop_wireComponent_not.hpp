#ifndef UE4SS_SDK_prop_wireComponent_not_HPP
#define UE4SS_SDK_prop_wireComponent_not_HPP

class Aprop_wireComponent_not_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0378 (size: 0x8)
    bool activated;                                                                   // 0x0380 (size: 0x1)
    class Awire_C* wire;                                                              // 0x0388 (size: 0x8)

    void wirePass(class Awire_C* wire);
    void wireConnected(class Awire_C* wire, bool side);
    void wireDisconnected(class Awire_C* wire, bool side);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_wireComponent_not(int32 EntryPoint);
}; // Size: 0x390

#endif
