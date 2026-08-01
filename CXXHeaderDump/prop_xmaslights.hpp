#ifndef UE4SS_SDK_prop_xmaslights_HPP
#define UE4SS_SDK_prop_xmaslights_HPP

class Aprop_xmaslights_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Axmaslight_C* xmaslights;                                                   // 0x0370 (size: 0x8)
    bool NoLight;                                                                     // 0x0378 (size: 0x1)
    float MaxLength;                                                                  // 0x037C (size: 0x4)
    class AmainPlayer_C* playerHolding;                                               // 0x0380 (size: 0x8)
    class UParticleSystemComponent* eff_visualise;                                    // 0x0388 (size: 0x8)
    bool clicked;                                                                     // 0x0390 (size: 0x1)
    FVector lastClickLocation;                                                        // 0x0394 (size: 0xC)
    bool canPlace;                                                                    // 0x03A0 (size: 0x1)

    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveDestroyed();
    void ReceiveTick(float DeltaSeconds);
    void playerHoldPost(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_xmaslights(int32 EntryPoint);
}; // Size: 0x3A1

#endif
