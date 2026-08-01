#ifndef UE4SS_SDK_prop_deskLamp_HPP
#define UE4SS_SDK_prop_deskLamp_HPP

class Aprop_deskLamp_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x03B0 (size: 0x8)
    class USpotLightComponent* SpotLight;                                             // 0x03B8 (size: 0x8)
    class UBillboardComponent* lookAtPoint;                                           // 0x03C0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x03C8 (size: 0x8)
    bool powered;                                                                     // 0x03D0 (size: 0x1)
    bool Active;                                                                      // 0x03D1 (size: 0x1)
    class UdeskLamp_rigged_Skeleton_AnimBlueprint_C* Anim;                            // 0x03D8 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x03E0 (size: 0x8)

    void canBeCollected(bool& ignore);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKeyT(bool& gather);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd();
    void UserConstructionScript();
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void used(bool Pressed);
    void ExecuteUbergraph_prop_deskLamp(int32 EntryPoint);
}; // Size: 0x3E8

#endif
