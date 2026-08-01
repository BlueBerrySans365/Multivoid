#ifndef UE4SS_SDK_prop_kerfurOmega_col_HPP
#define UE4SS_SDK_prop_kerfurOmega_col_HPP

class Aprop_kerfurOmega_col_C : public Aprop_kerfurOmega_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    FVector HSV;                                                                      // 0x0398 (size: 0xC)

    void Init();
    void getData(Fstruct_save& Data);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void setColor();
    void loadData(Fstruct_save Data, bool& return);
    void UserConstructionScript();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void intComs_applyColor(FLinearColor Color);
    void ExecuteUbergraph_prop_kerfurOmega_col(int32 EntryPoint);
}; // Size: 0x3A4

#endif
