#ifndef UE4SS_SDK_prop_torchHolder_HPP
#define UE4SS_SDK_prop_torchHolder_HPP

class Aprop_torchHolder_C : public Aprop_wallAttachable_pryable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    class UChildActorComponent* pryingCrowbar3;                                       // 0x03F0 (size: 0x8)
    class UChildActorComponent* pryingCrowbar2;                                       // 0x03F8 (size: 0x8)
    class UChildActorComponent* pryingCrowbar1;                                       // 0x0400 (size: 0x8)
    class UStaticMeshComponent* hold;                                                 // 0x0408 (size: 0x8)
    class Aprop_torch_C* torch;                                                       // 0x0410 (size: 0x8)
    FName torch_key;                                                                  // 0x0418 (size: 0x8)
    bool spawnTorch;                                                                  // 0x0420 (size: 0x1)
    float spawn_fuel;                                                                 // 0x0424 (size: 0x4)
    bool spawn_burning;                                                               // 0x0428 (size: 0x1)

    void putTorch(class Aprop_torch_C* InputPin);
    void processKeys(bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_torchHolder(int32 EntryPoint);
}; // Size: 0x429

#endif
