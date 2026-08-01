#ifndef UE4SS_SDK_prop_rug_HPP
#define UE4SS_SDK_prop_rug_HPP

class Aprop_rug_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x0370 (size: 0x8)
    class UArrowComponent* spawnLoc;                                                  // 0x0378 (size: 0x8)
    int32 Type;                                                                       // 0x0380 (size: 0x4)
    int32 skin;                                                                       // 0x0384 (size: 0x4)
    class AmainPlayer_C* holdingPlayer;                                               // 0x0388 (size: 0x8)
    FName Filename;                                                                   // 0x0390 (size: 0x8)
    TSubclassOf<class Arug_c> rugClass;                                               // 0x0398 (size: 0x8)
    bool Custom;                                                                      // 0x03A0 (size: 0x1)

    void placeFromHand();
    void placeOnGround();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void UserConstructionScript();
    void sendName(FName Name);
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveTick(float DeltaSeconds);
    void playerHoldPost(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_prop_rug(int32 EntryPoint);
}; // Size: 0x3A1

#endif
