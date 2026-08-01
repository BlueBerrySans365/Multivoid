#ifndef UE4SS_SDK_prop_lightIntWall1_HPP
#define UE4SS_SDK_prop_lightIntWall1_HPP

class Aprop_lightIntWall1_C : public Aprop_wallAttachable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x03E0 (size: 0x8)
    bool Active;                                                                      // 0x03E8 (size: 0x1)
    bool power;                                                                       // 0x03E9 (size: 0x1)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKeyT(bool& gather);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd();
    void UserConstructionScript();
    void wireConnected(class Awire_C* wire, bool side);
    void wireDisconnected(class Awire_C* wire, bool side);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void wirePass(class Awire_C* wire);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ExecuteUbergraph_prop_lightIntWall1(int32 EntryPoint);
}; // Size: 0x3EA

#endif
