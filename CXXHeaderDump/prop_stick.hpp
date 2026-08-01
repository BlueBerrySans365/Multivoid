#ifndef UE4SS_SDK_prop_stick_HPP
#define UE4SS_SDK_prop_stick_HPP

class Aprop_stick_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_stick(int32 EntryPoint);
}; // Size: 0x370

#endif
