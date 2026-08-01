#ifndef UE4SS_SDK_prop_tv_plasma_HPP
#define UE4SS_SDK_prop_tv_plasma_HPP

class Aprop_tv_plasma_C : public Aprop_tv2_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B0 (size: 0x8)
    class Ucomp_wallAttachable_C* comp_wallAttachable;                                // 0x04B8 (size: 0x8)
    class UArrowComponent* stick;                                                     // 0x04C0 (size: 0x8)
    FTransform tr_A;                                                                  // 0x04D0 (size: 0x30)
    FTransform tr_B;                                                                  // 0x0500 (size: 0x30)
    float dir;                                                                        // 0x0530 (size: 0x4)
    bool doStick;                                                                     // 0x0534 (size: 0x1)

    void upd();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void tryStick(FHitResult& OutHit);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void ReceiveDestroyed();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void dropped();
    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void ExecuteUbergraph_prop_tv_plasma(int32 EntryPoint);
}; // Size: 0x535

#endif
