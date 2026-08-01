#ifndef UE4SS_SDK_prop_wireComponent_binary_HPP
#define UE4SS_SDK_prop_wireComponent_binary_HPP

class Aprop_wireComponent_binary_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UParticleSystemComponent* Light;                                            // 0x0378 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0380 (size: 0x8)
    bool State;                                                                       // 0x0388 (size: 0x1)
    class Awire_C* wire;                                                              // 0x0390 (size: 0x8)

    void upd();
    void UserConstructionScript();
    void wireConnected(class Awire_C* wire, bool side);
    void wireDisconnected(class Awire_C* wire, bool side);
    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_binary(int32 EntryPoint);
}; // Size: 0x398

#endif
