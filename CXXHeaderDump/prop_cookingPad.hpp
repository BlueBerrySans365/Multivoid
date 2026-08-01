#ifndef UE4SS_SDK_prop_cookingPad_HPP
#define UE4SS_SDK_prop_cookingPad_HPP

class Aprop_cookingPad_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UBoxComponent* rot;                                                         // 0x03B0 (size: 0x8)
    class UParticleSystemComponent* Light;                                            // 0x03B8 (size: 0x8)
    class UBoxComponent* toggle;                                                      // 0x03C0 (size: 0x8)
    class UAudioComponent* cookingLoop;                                               // 0x03C8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x03D0 (size: 0x8)
    float a_a_578E621D468C77CACBD4B1A9C5C0497F;                                       // 0x03D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_578E621D468C77CACBD4B1A9C5C0497F; // 0x03DC (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x03E0 (size: 0x8)
    TArray<class Aprop_cookingFood_C*> cooks;                                         // 0x03E8 (size: 0x10)
    bool powered;                                                                     // 0x03F8 (size: 0x1)
    class Acord_C* objCord1;                                                          // 0x0400 (size: 0x8)
    int32 power;                                                                      // 0x0408 (size: 0x4)
    bool Active;                                                                      // 0x040C (size: 0x1)
    float V;                                                                          // 0x0410 (size: 0x4)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void setVol();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    float powr();
    void upd();
    void a__FinishedFunc();
    void a__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__prop_cookingPad_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_cookingPad_Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void PlaySound(bool Condition);
    void ReceiveBeginPlay();
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ExecuteUbergraph_prop_cookingPad(int32 EntryPoint);
}; // Size: 0x414

#endif
