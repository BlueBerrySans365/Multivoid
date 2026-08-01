#ifndef UE4SS_SDK_prop_spotlightHead_HPP
#define UE4SS_SDK_prop_spotlightHead_HPP

class Aprop_spotlightHead_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UParticleSystemComponent* eff_flare;                                        // 0x0370 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0378 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x0380 (size: 0x8)
    bool Active;                                                                      // 0x0388 (size: 0x1)
    bool power;                                                                       // 0x0389 (size: 0x1)
    class Aprop_spotlight_C* tripod;                                                  // 0x0390 (size: 0x8)
    class AmainPlayer_C* pl;                                                          // 0x0398 (size: 0x8)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKeyT(bool& gather);
    void toggleLight();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void upd();
    void UserConstructionScript();
    void runTrigger(class AActor* Owner, int32 Index);
    void set_ignoreSave_trigger(bool NewParam);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void setPropProps(bool Static, bool frozen, bool Active, bool sleeping);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void used(bool Pressed);
    void scrollUp();
    void scrollDown();
    void ActionName(class AmainPlayer_C* Player, FHitResult Hit, FString Name);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_prop_spotlightHead(int32 EntryPoint);
}; // Size: 0x3A0

#endif
