#ifndef UE4SS_SDK_prop_mailbox_HPP
#define UE4SS_SDK_prop_mailbox_HPP

class Aprop_mailbox_C : public Aprop_container_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UNavModifierComponent* NavModifier;                                         // 0x0438 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void intComs_propRenderer_finishProps();
    void ExecuteUbergraph_prop_mailbox(int32 EntryPoint);
}; // Size: 0x440

#endif
