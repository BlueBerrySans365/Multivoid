#ifndef UE4SS_SDK_prop_bbq_HPP
#define UE4SS_SDK_prop_bbq_HPP

class Aprop_bbq_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* burning_lq;                                                // 0x0370 (size: 0x8)
    class UStaticMeshComponent* lid;                                                  // 0x0378 (size: 0x8)
    class UAudioComponent* burning;                                                   // 0x0380 (size: 0x8)
    class UParticleSystemComponent* eff_fire;                                         // 0x0388 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0390 (size: 0x8)
    class UAudioComponent* cookingLoop;                                               // 0x0398 (size: 0x8)
    float Timeline_0_a_38F8E1FC4A76C0ED5DDC3984D1AC6018;                              // 0x03A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_38F8E1FC4A76C0ED5DDC3984D1AC6018; // 0x03A4 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03A8 (size: 0x8)
    float V;                                                                          // 0x03B0 (size: 0x4)
    bool Active;                                                                      // 0x03B4 (size: 0x1)
    TArray<class Aprop_cookingFood_C*> cooks;                                         // 0x03B8 (size: 0x10)
    int32 coals;                                                                      // 0x03C8 (size: 0x4)
    float A;                                                                          // 0x03CC (size: 0x4)
    float DeltaSeconds;                                                               // 0x03D0 (size: 0x4)
    bool hasLid;                                                                      // 0x03D4 (size: 0x1)
    bool lookAtLid;                                                                   // 0x03D5 (size: 0x1)

    void setLid(bool lid);
    void updLid();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void addCoal(bool& added);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd();
    void setVol();
    void UserConstructionScript();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__prop_cookingPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_cookingPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void PlaySound(bool Condition);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void attemptIgnite();
    void playerUsedOn(class AmainPlayer_C* Player, FHitResult Hit, class UPrimitiveComponent* lookAtComponent, class AActor* holdObject, FName holdPropName);
    void ExecuteUbergraph_prop_bbq(int32 EntryPoint);
}; // Size: 0x3D6

#endif
