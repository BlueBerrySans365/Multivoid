#ifndef UE4SS_SDK_prop_burgerHallucinate_HPP
#define UE4SS_SDK_prop_burgerHallucinate_HPP

class Aprop_burgerHallucinate_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float Timeline_0_a_3FB1543B488AAEE05BA5C4BCC50134A4;                              // 0x0370 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_3FB1543B488AAEE05BA5C4BCC50134A4; // 0x0374 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0378 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0380 (size: 0x8)
    bool A;                                                                           // 0x0388 (size: 0x1)

    void getPriceMultiplier(float& priceMult);
    void ignoreSave(bool& ignoreSave);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getData(Fstruct_save& Data);
    void Init();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void ExecuteUbergraph_prop_burgerHallucinate(int32 EntryPoint);
}; // Size: 0x389

#endif
