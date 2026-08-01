#ifndef UE4SS_SDK_prop_varg_HPP
#define UE4SS_SDK_prop_varg_HPP

class Aprop_varg_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* domerr;                                                    // 0x0370 (size: 0x8)
    class UAudioComponent* joleMonkeMode;                                             // 0x0378 (size: 0x8)
    class UAudioComponent* mushrooms;                                                 // 0x0380 (size: 0x8)
    bool canIgnite;                                                                   // 0x0388 (size: 0x1)
    bool spwn;                                                                        // 0x0389 (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void ignite(float fuel);
    void BndEvt__prop_varg_joleMonkeMode_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void microwave(class Aprop_microwave_C* microwave);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void enteredTheWater();
    void BndEvt__prop_varg_domerr_K2Node_ComponentBoundEvent_1_OnAudioFinished__DelegateSignature();
    void ExecuteUbergraph_prop_varg(int32 EntryPoint);
}; // Size: 0x38A

#endif
