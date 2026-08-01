#ifndef UE4SS_SDK_sleepingbagWrap_HPP
#define UE4SS_SDK_sleepingbagWrap_HPP

class AsleepingbagWrap_C : public Abed_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    class UInstancedStaticMeshComponent* InstancedStaticMesh;                         // 0x0388 (size: 0x8)
    class USkeletalMeshComponent* bag;                                                // 0x0390 (size: 0x8)
    class UsleepbagFlat_Skeleton_AnimBlueprint_C* Anim;                               // 0x0398 (size: 0x8)
    TSubclassOf<class Aprop_sleepingbag_C> folded;                                    // 0x03A0 (size: 0x8)

    void fold();
    FRotator vecToRot(FVector A);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void gen(bool foldOnFail);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_sleepingbagWrap(int32 EntryPoint);
}; // Size: 0x3A8

#endif
