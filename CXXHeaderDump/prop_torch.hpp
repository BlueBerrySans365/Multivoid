#ifndef UE4SS_SDK_prop_torch_HPP
#define UE4SS_SDK_prop_torch_HPP

class Aprop_torch_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UvelocityStuck_C* velocityStuck;                                            // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)
    class UParticleSystemComponent* eff_fire;                                         // 0x0380 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0388 (size: 0x8)
    bool burning;                                                                     // 0x0390 (size: 0x1)
    float fuel;                                                                       // 0x0394 (size: 0x4)

    void setcol();
    void Init();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd();
    void UserConstructionScript();
    void playerHitWith(FHitResult Hit, class AmainPlayer_C* Player);
    void attemptIgnite();
    void extinguishFire();
    void ignite(float fuel);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void CustomEvent(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_torch(int32 EntryPoint);
}; // Size: 0x398

#endif
