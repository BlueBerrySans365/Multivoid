#ifndef UE4SS_SDK_prop_pumpkinpie_HPP
#define UE4SS_SDK_prop_pumpkinpie_HPP

class Aprop_pumpkinpie_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UStaticMeshComponent* 5;                                                    // 0x0370 (size: 0x8)
    class UStaticMeshComponent* 4;                                                    // 0x0378 (size: 0x8)
    class UStaticMeshComponent* 3;                                                    // 0x0380 (size: 0x8)
    class UStaticMeshComponent* 2;                                                    // 0x0388 (size: 0x8)
    class UStaticMeshComponent* 1;                                                    // 0x0390 (size: 0x8)
    int32 piecesLeft;                                                                 // 0x0398 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd();
    void UserConstructionScript();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_pumpkinpie(int32 EntryPoint);
}; // Size: 0x39C

#endif
