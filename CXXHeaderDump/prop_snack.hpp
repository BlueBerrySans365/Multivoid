#ifndef UE4SS_SDK_prop_snack_HPP
#define UE4SS_SDK_prop_snack_HPP

class Aprop_snack_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 uses;                                                                       // 0x0370 (size: 0x4)
    float food;                                                                       // 0x0374 (size: 0x4)
    FName trash;                                                                      // 0x0378 (size: 0x8)
    float sleep_;                                                                     // 0x0380 (size: 0x4)
    float health;                                                                     // 0x0384 (size: 0x4)
    bool spawnAsObject;                                                               // 0x0388 (size: 0x1)
    TEnumAsByte<enum_foodType::Type> Type;                                            // 0x0389 (size: 0x1)
    bool dontEat;                                                                     // 0x038A (size: 0x1)

    void snackEaten();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void eat(class AmainPlayer_C* P, bool bypassNoHunger);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_snack(int32 EntryPoint);
}; // Size: 0x38B

#endif
