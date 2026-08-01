#ifndef UE4SS_SDK_prop_arirLamp_HPP
#define UE4SS_SDK_prop_arirLamp_HPP

class Aprop_arirLamp_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UslapperSummoner_C* slapperSummoner;                                        // 0x0370 (size: 0x8)
    class UPhysicsConstraintComponent* 2;                                             // 0x0378 (size: 0x8)
    class UPhysicsConstraintComponent* 1;                                             // 0x0380 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0388 (size: 0x8)
    class UChildActorComponent* T;                                                    // 0x0390 (size: 0x8)
    class UChildActorComponent* B;                                                    // 0x0398 (size: 0x8)
    float a_a_F21A7A9443089D5F8AEC7894EABF45F9;                                       // 0x03A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_F21A7A9443089D5F8AEC7894EABF45F9; // 0x03A4 (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x03A8 (size: 0x8)
    bool opened;                                                                      // 0x03B0 (size: 0x1)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void a__FinishedFunc();
    void a__UpdateFunc();
    void Open();
    void ReceiveBeginPlay();
    void inst();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_prop_arirLamp(int32 EntryPoint);
}; // Size: 0x3B1

#endif
