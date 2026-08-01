#ifndef UE4SS_SDK_prop_heater_HPP
#define UE4SS_SDK_prop_heater_HPP

class Aprop_heater_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0370 (size: 0x8)
    class UslapperSummoner_C* slapperSummoner;                                        // 0x0378 (size: 0x8)

    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_heater(int32 EntryPoint);
}; // Size: 0x380

#endif
