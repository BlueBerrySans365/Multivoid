#ifndef UE4SS_SDK_prop_bombBottle_HPP
#define UE4SS_SDK_prop_bombBottle_HPP

class Aprop_bombBottle_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x0370 (size: 0x8)

    void broken();
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_bombBottle(int32 EntryPoint);
}; // Size: 0x378

#endif
