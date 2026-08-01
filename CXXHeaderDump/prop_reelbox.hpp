#ifndef UE4SS_SDK_prop_reelbox_HPP
#define UE4SS_SDK_prop_reelbox_HPP

class Aprop_reelbox_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBoxComponent* Trigger;                                                     // 0x0370 (size: 0x8)
    class UStaticMeshComponent* reelmesh_lid;                                         // 0x0378 (size: 0x8)
    class UStaticMeshComponent* reelmesh_top;                                         // 0x0380 (size: 0x8)
    class UStaticMeshComponent* reelmesh_bottom;                                      // 0x0388 (size: 0x8)
    float reeltop;                                                                    // 0x0390 (size: 0x4)
    float reelBottom;                                                                 // 0x0394 (size: 0x4)
    bool lid;                                                                         // 0x0398 (size: 0x1)

    void putLidOn(class AActor* Object, bool& return);
    void setBigReel(class UObject* Object, bool& return);
    void setSmallReel(class UObject* Object, bool& return);
    void getPriceMultiplier(float& priceMult);
    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    bool canUse();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd();
    void UserConstructionScript();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void BndEvt__prop_reelbox_trigger_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void delayedNotif(FText InText, TEnumAsByte<enum_notifyType::Type> Type);
    void ExecuteUbergraph_prop_reelbox(int32 EntryPoint);
}; // Size: 0x399

#endif
