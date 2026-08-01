#ifndef UE4SS_SDK_prop_safeDoor_HPP
#define UE4SS_SDK_prop_safeDoor_HPP

class Aprop_safeDoor_C : public Aprop_swinger_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    float openAnimationTL_a_D523A48D4A80C00A9F4C18B9D1D76826;                         // 0x0430 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> openAnimationTL__Direction_D523A48D4A80C00A9F4C18B9D1D76826; // 0x0434 (size: 0x1)
    class UTimelineComponent* openAnimationTL;                                        // 0x0438 (size: 0x8)
    class Aprop_safe_C* safe;                                                         // 0x0440 (size: 0x8)
    int32 Number;                                                                     // 0x0448 (size: 0x4)
    bool dir;                                                                         // 0x044C (size: 0x1)
    FString pass;                                                                     // 0x0450 (size: 0x10)

    void tick_correct();
    void tick_next();
    void checkNum();
    void addNum(int32 Add);
    void checkPass();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void openAnimationTL__FinishedFunc();
    void openAnimationTL__UpdateFunc();
    void openAnimationTL__soundOpen__EventFunc();
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void scrollDown();
    void scrollUp();
    void broken();
    void uiQuit();
    void openanim();
    void ExecuteUbergraph_prop_safeDoor(int32 EntryPoint);
}; // Size: 0x460

#endif
