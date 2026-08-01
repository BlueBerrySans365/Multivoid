#ifndef UE4SS_SDK_prop_lambert_HPP
#define UE4SS_SDK_prop_lambert_HPP

class Aprop_lambert_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* beam;                                             // 0x0370 (size: 0x8)
    class Uui_lambUI_C* Widget;                                                       // 0x0378 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void healing();
    void ReceiveDestroyed();
    void ExecuteUbergraph_prop_lambert(int32 EntryPoint);
}; // Size: 0x380

#endif
