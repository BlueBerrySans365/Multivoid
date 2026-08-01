#ifndef UE4SS_SDK_bed_HPP
#define UE4SS_SDK_bed_HPP

class Abed_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    bool dropItem;                                                                    // 0x0370 (size: 0x1)
    float dreamProb;                                                                  // 0x0374 (size: 0x4)
    float comfort;                                                                    // 0x0378 (size: 0x4)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void canBePutInContainer(bool& return);
    void asProp(class Aprop_C*& return);
    void canPickup(bool& return);
    void noRespawn(bool noRespawn, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void isButtonUsed(bool& failed);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void goSleep();
    void ExecuteUbergraph_bed(int32 EntryPoint);
}; // Size: 0x37C

#endif
