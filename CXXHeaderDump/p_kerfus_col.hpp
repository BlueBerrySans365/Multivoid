#ifndef UE4SS_SDK_p_kerfus_col_HPP
#define UE4SS_SDK_p_kerfus_col_HPP

class Ap_kerfus_col_C : public Ap_kerfus_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F8 (size: 0x8)
    FVector HSV;                                                                      // 0x0500 (size: 0xC)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd(bool skipFace);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void intComs_applyColor(FLinearColor Color);
    void ExecuteUbergraph_p_kerfus_col(int32 EntryPoint);
}; // Size: 0x50C

#endif
