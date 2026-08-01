#ifndef UE4SS_SDK_prop_workbench_HPP
#define UE4SS_SDK_prop_workbench_HPP

class Aprop_workbench_C : public Aprop_container_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UChildActorComponent* obstacle;                                             // 0x0438 (size: 0x8)
    class UBoxComponent* craftLookat;                                                 // 0x0440 (size: 0x8)
    class UStaticMeshComponent* Top;                                                  // 0x0448 (size: 0x8)
    class UBoxComponent* overlapBox;                                                  // 0x0450 (size: 0x8)
    class UBoxComponent* BoundingBox;                                                 // 0x0458 (size: 0x8)
    TArray<class AActor*> Objects;                                                    // 0x0460 (size: 0x10)
    Fstruct_crafting possibleCraft;                                                   // 0x0470 (size: 0x48)
    bool isCrafting;                                                                  // 0x04B8 (size: 0x1)
    bool canCraft;                                                                    // 0x04B9 (size: 0x1)
    FString currentBlueprint;                                                         // 0x04C0 (size: 0x10)
    TArray<FString> objsDebug;                                                        // 0x04D0 (size: 0x10)
    TArray<FString> craftTagsDebug;                                                   // 0x04E0 (size: 0x10)
    bool scrapCraft;                                                                  // 0x04F0 (size: 0x1)
    TArray<class AActor*> scrapRemove;                                                // 0x04F8 (size: 0x10)
    TArray<FString> objectsNames;                                                     // 0x0508 (size: 0x10)
    TArray<FString> objectCrafts;                                                     // 0x0518 (size: 0x10)
    TArray<FString> objectsCraftGroups;                                               // 0x0528 (size: 0x10)
    TArray<Fstruct_prop> propsDatas;                                                  // 0x0538 (size: 0x10)
    TArray<FText> objectCraftNames;                                                   // 0x0548 (size: 0x10)
    FName bpName;                                                                     // 0x0558 (size: 0x8)
    bool isReverse;                                                                   // 0x0560 (size: 0x1)
    TArray<FString> acs;                                                              // 0x0568 (size: 0x10)
    TArray<bool> acs_bs;                                                              // 0x0578 (size: 0x10)
    TArray<FName> objectCrafts_firstItem;                                             // 0x0588 (size: 0x10)
    TArray<FText> objectNames;                                                        // 0x0598 (size: 0x10)
    class Aprop_blueprint_C* Blueprint;                                               // 0x05A8 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void boundingBoxCalc();
    void Update(bool& hasCraft);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__prop_workbench_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_workbench_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void craftItem(FString Result);
    void ActionName(class AmainPlayer_C* Player, FHitResult Hit, FString Name);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_workbench(int32 EntryPoint);
}; // Size: 0x5B0

#endif
