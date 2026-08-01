#ifndef UE4SS_SDK_prop_treasureChest_HPP
#define UE4SS_SDK_prop_treasureChest_HPP

class Aprop_treasureChest_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UChildActorComponent* Cap;                                                  // 0x0370 (size: 0x8)
    class UAudioComponent* audio1;                                                    // 0x0378 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0380 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x0388 (size: 0x8)
    class UStaticMeshComponent* keyM;                                                 // 0x0390 (size: 0x8)
    class UBillboardComponent* keyAxis;                                               // 0x0398 (size: 0x8)
    class UPhysicsConstraintComponent* closed;                                        // 0x03A0 (size: 0x8)
    class UStaticMeshComponent* gold;                                                 // 0x03A8 (size: 0x8)
    class UPhysicsConstraintComponent* nocoll2;                                       // 0x03B0 (size: 0x8)
    class UPhysicsConstraintComponent* Joint;                                         // 0x03B8 (size: 0x8)
    float op_a_AEE871A64FE54E5FC2FA3E9D5B571BC2;                                      // 0x03C0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> op__Direction_AEE871A64FE54E5FC2FA3E9D5B571BC2; // 0x03C4 (size: 0x1)
    class UTimelineComponent* Op;                                                     // 0x03C8 (size: 0x8)
    bool hasGold;                                                                     // 0x03D0 (size: 0x1)
    bool hasKey;                                                                      // 0x03D1 (size: 0x1)
    bool opened;                                                                      // 0x03D2 (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void upd();
    void op__FinishedFunc();
    void op__UpdateFunc();
    void BndEvt__prop_treasureChest_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void Open();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_treasureChest(int32 EntryPoint);
}; // Size: 0x3D3

#endif
