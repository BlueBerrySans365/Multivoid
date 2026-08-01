#ifndef UE4SS_SDK_prop_food_shrimp_HPP
#define UE4SS_SDK_prop_food_shrimp_HPP

class Aprop_food_shrimp_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x03E0 (size: 0x8)
    int32 shrimps;                                                                    // 0x03E8 (size: 0x4)
    TSubclassOf<class Aprop_cookingFood_shrimp_C> shrimpDrop;                         // 0x03F0 (size: 0x8)

    void getPriceMultiplier(float& priceMult);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd();
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_food_shrimp(int32 EntryPoint);
}; // Size: 0x3F8

#endif
