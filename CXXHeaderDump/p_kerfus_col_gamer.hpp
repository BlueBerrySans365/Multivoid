#ifndef UE4SS_SDK_p_kerfus_col_gamer_HPP
#define UE4SS_SDK_p_kerfus_col_gamer_HPP

class Ap_kerfus_col_gamer_C : public Ap_kerfus_col_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0510 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_p_kerfus_col_gamer(int32 EntryPoint);
}; // Size: 0x518

#endif
