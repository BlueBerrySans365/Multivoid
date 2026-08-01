#ifndef UE4SS_SDK_prop_snack_beer_HPP
#define UE4SS_SDK_prop_snack_beer_HPP

class Aprop_snack_beer_C : public Aprop_snack_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)
    class UBillboardComponent* nozzle;                                                // 0x0398 (size: 0x8)
    class UBillboardComponent* Center;                                                // 0x03A0 (size: 0x8)
    bool Open;                                                                        // 0x03A8 (size: 0x1)
    FName opened;                                                                     // 0x03AC (size: 0x8)
    TSubclassOf<class Agrime_C> grunge;                                               // 0x03B8 (size: 0x8)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void openBottle();
    void eat(class AmainPlayer_C* P, bool bypassNoHunger);
    void UserConstructionScript();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveTick(float DeltaSeconds);
    void broken();
    void broken_fire();
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_prop_snack_beer(int32 EntryPoint);
}; // Size: 0x3C0

#endif
