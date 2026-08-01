#ifndef UE4SS_SDK_prop_wireComponent_delayInv_HPP
#define UE4SS_SDK_prop_wireComponent_delayInv_HPP

class Aprop_wireComponent_delayInv_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0378 (size: 0x8)
    bool Active;                                                                      // 0x0380 (size: 0x1)
    float Delay;                                                                      // 0x0384 (size: 0x4)
    class Awire_C* passTo;                                                            // 0x0388 (size: 0x8)

    void wirePass(class Awire_C* wire);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_wireComponent_delayInv(int32 EntryPoint);
}; // Size: 0x390

#endif
