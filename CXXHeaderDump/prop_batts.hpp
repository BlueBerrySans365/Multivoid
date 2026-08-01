#ifndef UE4SS_SDK_prop_batts_HPP
#define UE4SS_SDK_prop_batts_HPP

class Aprop_batts_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float energy;                                                                     // 0x0370 (size: 0x4)

    void getPriceMultiplier(float& priceMult);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void isButtonUsed(bool& failed);
    void microwave(class Aprop_microwave_C* microwave);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_batts(int32 EntryPoint);
}; // Size: 0x374

#endif
