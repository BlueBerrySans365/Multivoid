#ifndef UE4SS_SDK_prop_wireComponent_sequence_HPP
#define UE4SS_SDK_prop_wireComponent_sequence_HPP

class Aprop_wireComponent_sequence_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0378 (size: 0x8)
    TArray<class Awire_C*> wires;                                                     // 0x0380 (size: 0x10)
    bool T;                                                                           // 0x0390 (size: 0x1)
    int32 I;                                                                          // 0x0394 (size: 0x4)
    bool Random;                                                                      // 0x0398 (size: 0x1)
    bool power;                                                                       // 0x0399 (size: 0x1)

    void wireConnected(class Awire_C* wire, bool side);
    void wireDisconnected(class Awire_C* wire, bool side);
    void wirePass(class Awire_C* wire);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_wireComponent_sequence(int32 EntryPoint);
}; // Size: 0x39A

#endif
