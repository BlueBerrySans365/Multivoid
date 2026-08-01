#ifndef UE4SS_SDK_prop_wallAttachable_HPP
#define UE4SS_SDK_prop_wallAttachable_HPP

class Aprop_wallAttachable_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class Ucomp_wallAttachable_C* comp_wallAttachable;                                // 0x03B0 (size: 0x8)
    class UArrowComponent* stick;                                                     // 0x03B8 (size: 0x8)
    bool doStick;                                                                     // 0x03C0 (size: 0x1)
    bool ignoreParentUnstick;                                                         // 0x03C1 (size: 0x1)
    FVector Scale;                                                                    // 0x03C4 (size: 0xC)
    bool useCord;                                                                     // 0x03D0 (size: 0x1)
    bool powered;                                                                     // 0x03D1 (size: 0x1)
    bool holding;                                                                     // 0x03D2 (size: 0x1)

    void canBePickedUp(bool& ignore);
    void canBeCollected(bool& ignore);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void loadData(Fstruct_save Data, bool& return);
    void gamemodeValid();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void UserConstructionScript();
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void ReceiveDestroyed();
    void dropped();
    void ReceiveBeginPlay();
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerHoldPre(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_wallAttachable(int32 EntryPoint);
}; // Size: 0x3D3

#endif
