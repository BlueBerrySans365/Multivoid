#ifndef UE4SS_SDK_prop_portablePc_HPP
#define UE4SS_SDK_prop_portablePc_HPP

class Aprop_portablePc_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UChildActorComponent* Top;                                                  // 0x0370 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0378 (size: 0x8)
    class UAudioComponent* startup;                                                   // 0x0380 (size: 0x8)
    float openTL_a_88CB1FE24CDADF20AF8CFE8F662DD474;                                  // 0x0388 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> openTL__Direction_88CB1FE24CDADF20AF8CFE8F662DD474; // 0x038C (size: 0x1)
    class UTimelineComponent* openTL;                                                 // 0x0390 (size: 0x8)
    bool opened;                                                                      // 0x0398 (size: 0x1)
    class AportablePcTop_C* topObject;                                                // 0x03A0 (size: 0x8)
    class Alaptop_C* laptop;                                                          // 0x03A8 (size: 0x8)
    bool pcOpened;                                                                    // 0x03B0 (size: 0x1)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void upd();
    void usePC(class AmainPlayer_C* self2);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void openTL__FinishedFunc();
    void openTL__UpdateFunc();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void Open(bool opened);
    void ReceiveBeginPlay();
    void bindPC(class Alaptop_C* PC);
    void launchedUpdate(bool opened);
    void ExecuteUbergraph_prop_portablePc(int32 EntryPoint);
}; // Size: 0x3B1

#endif
