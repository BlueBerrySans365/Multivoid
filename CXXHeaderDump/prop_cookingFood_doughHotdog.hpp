#ifndef UE4SS_SDK_prop_cookingFood_doughHotdog_HPP
#define UE4SS_SDK_prop_cookingFood_doughHotdog_HPP

class Aprop_cookingFood_doughHotdog_C : public Aprop_cookingFood_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0408 (size: 0x8)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_cookingFood_doughHotdog(int32 EntryPoint);
}; // Size: 0x410

#endif
