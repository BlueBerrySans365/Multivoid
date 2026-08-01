#ifndef UE4SS_SDK_prop_fridgeDoor_HPP
#define UE4SS_SDK_prop_fridgeDoor_HPP

class Aprop_fridgeDoor_C : public Aprop_swinger_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0428 (size: 0x8)
    class Aprop_fridge_C* fridge;                                                     // 0x0430 (size: 0x8)
    bool isBottom;                                                                    // 0x0438 (size: 0x1)
    bool openedEvent;                                                                 // 0x0439 (size: 0x1)
    bool isOpened;                                                                    // 0x043A (size: 0x1)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void ReceiveBeginPlay();
    void dOpened();
    void dClosed();
    void ExecuteUbergraph_prop_fridgeDoor(int32 EntryPoint);
}; // Size: 0x43B

#endif
