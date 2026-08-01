#ifndef UE4SS_SDK_prop_vending_HPP
#define UE4SS_SDK_prop_vending_HPP

class Aprop_vending_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UChildActorComponent* obstacle;                                             // 0x03B0 (size: 0x8)
    class UAudioComponent* audio_figura;                                              // 0x03B8 (size: 0x8)
    class USkeletalMeshComponent* figura;                                             // 0x03C0 (size: 0x8)
    class UInstancedStaticMeshComponent* instanced_snack6;                            // 0x03C8 (size: 0x8)
    class UInstancedStaticMeshComponent* instanced_snack5;                            // 0x03D0 (size: 0x8)
    class UInstancedStaticMeshComponent* instanced_snack4;                            // 0x03D8 (size: 0x8)
    class UInstancedStaticMeshComponent* instanced_snack3;                            // 0x03E0 (size: 0x8)
    class UInstancedStaticMeshComponent* instanced_snack2;                            // 0x03E8 (size: 0x8)
    class UInstancedStaticMeshComponent* instanced_snack1;                            // 0x03F0 (size: 0x8)
    class UInstancedStaticMeshComponent* instanced_snack0;                            // 0x03F8 (size: 0x8)
    class UAudioComponent* audio_coinslot;                                            // 0x0400 (size: 0x8)
    class UAudioComponent* audio_change_2;                                            // 0x0408 (size: 0x8)
    class UAudioComponent* audio_change_1;                                            // 0x0410 (size: 0x8)
    class UAudioComponent* audio_change_0;                                            // 0x0418 (size: 0x8)
    class UStaticMeshComponent* coin;                                                 // 0x0420 (size: 0x8)
    class UArrowComponent* spawn2;                                                    // 0x0428 (size: 0x8)
    class UBillboardComponent* boxRoot;                                               // 0x0430 (size: 0x8)
    class URectLightComponent* RectLight;                                             // 0x0438 (size: 0x8)
    class UAudioComponent* audio_sell;                                                // 0x0440 (size: 0x8)
    class UStaticMeshComponent* snacks_candy1;                                        // 0x0448 (size: 0x8)
    class UArrowComponent* Spawn;                                                     // 0x0450 (size: 0x8)
    class UBoxComponent* menubox;                                                     // 0x0458 (size: 0x8)
    float dissolveTL_a_542C47C04EEF587E4D97159CEBE172BE;                              // 0x0460 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> dissolveTL__Direction_542C47C04EEF587E4D97159CEBE172BE; // 0x0464 (size: 0x1)
    class UTimelineComponent* dissolveTL;                                             // 0x0468 (size: 0x8)
    bool isWorking;                                                                   // 0x0470 (size: 0x1)
    int32 balance;                                                                    // 0x0474 (size: 0x4)
    TMap<class FName, class FIntPoint> items_amounts;                                 // 0x0478 (size: 0x50)
    TArray<class UPrimitiveComponent*> boxColls;                                      // 0x04C8 (size: 0x10)
    float S;                                                                          // 0x04D8 (size: 0x4)
    FString DisplayText;                                                              // 0x04E0 (size: 0x10)
    bool lookAtButtons;                                                               // 0x04F0 (size: 0x1)
    FName lookAtItem;                                                                 // 0x04F4 (size: 0x8)
    TArray<FText> displayNames;                                                       // 0x0500 (size: 0x10)
    FVector scl;                                                                      // 0x0510 (size: 0xC)
    FVector Offset;                                                                   // 0x051C (size: 0xC)
    bool restocking;                                                                  // 0x0528 (size: 0x1)
    TMap<class FName, class FIntPoint> items_amounts_default;                         // 0x0530 (size: 0x50)
    class UblackScreen_C* blackScreen;                                                // 0x0580 (size: 0x8)
    float opac;                                                                       // 0x0588 (size: 0x4)
    float vol;                                                                        // 0x058C (size: 0x4)
    bool IsEmpty;                                                                     // 0x0590 (size: 0x1)
    FName sellItem;                                                                   // 0x0594 (size: 0x8)
    TArray<class AActor*> Exp;                                                        // 0x05A0 (size: 0x10)
    FVector hitboxExtent;                                                             // 0x05B0 (size: 0xC)
    bool hideItems;                                                                   // 0x05BC (size: 0x1)
    bool powered;                                                                     // 0x05BD (size: 0x1)
    class UMaterialInterface* mat_on;                                                 // 0x05C0 (size: 0x8)
    class UMaterialInterface* mat_off;                                                // 0x05C8 (size: 0x8)
    TArray<FName> retarget_items;                                                     // 0x05D0 (size: 0x10)
    TArray<int32> retarget_prices;                                                    // 0x05E0 (size: 0x10)
    TArray<int32> retarget_amounts;                                                   // 0x05F0 (size: 0x10)
    TArray<FName> retarget_items_default;                                             // 0x0600 (size: 0x10)
    TArray<int32> retarget_prices_default;                                            // 0x0610 (size: 0x10)
    TArray<int32> retarget_amounts_default;                                           // 0x0620 (size: 0x10)

    void getMaxMoneyFromInteger(int32 money, bool& return, int32& Subtract, FName& prop);
    void getMoneyFromName(const FName Name, bool& return, int32& moneyValue);
    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void checkStock();
    void spawnCoin(class Aprop_C*& prop);
    void genNameBoxes();
    void updVisible();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void UserConstructionScript();
    void dissolveTL__FinishedFunc();
    void dissolveTL__UpdateFunc();
    void broken();
    void ReceiveBeginPlay();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ReceiveTick(float DeltaSeconds);
    void dissolve();
    void beginRestock();
    void timerCheckStock();
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_prop_vending(int32 EntryPoint);
}; // Size: 0x630

#endif
