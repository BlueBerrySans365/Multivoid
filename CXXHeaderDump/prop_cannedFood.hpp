#ifndef UE4SS_SDK_prop_cannedFood_HPP
#define UE4SS_SDK_prop_cannedFood_HPP

class Aprop_cannedFood_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    bool opened;                                                                      // 0x0370 (size: 0x1)
    int32 Type;                                                                       // 0x0374 (size: 0x4)
    int32 foods;                                                                      // 0x0378 (size: 0x4)
    float health;                                                                     // 0x037C (size: 0x4)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void dmg(float A);
    void eat(class AmainPlayer_C* self2);
    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void Open();
    void Init();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void addDamage(class AActor* Actor, float Damage, FHitResult Hit, FVector impact, bool skipSetting);
    void ImpactDamage(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void impactDamageCPP(float Damage, FHitResult Hit, class AActor* Actor, FVector impact);
    void ExecuteUbergraph_prop_cannedFood(int32 EntryPoint);
}; // Size: 0x380

#endif
