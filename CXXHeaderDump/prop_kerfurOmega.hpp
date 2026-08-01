#ifndef UE4SS_SDK_prop_kerfurOmega_HPP
#define UE4SS_SDK_prop_kerfurOmega_HPP

class Aprop_kerfurOmega_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x0370 (size: 0x8)
    class UBillboardComponent* spwn;                                                  // 0x0378 (size: 0x8)
    int32 Type;                                                                       // 0x0380 (size: 0x4)
    bool sentient;                                                                    // 0x0384 (size: 0x1)
    TSubclassOf<class AkerfurOmega_C> spawnKerfur;                                    // 0x0388 (size: 0x8)

    void spawnKerfuro();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_prop_kerfurOmega(int32 EntryPoint);
}; // Size: 0x390

#endif
