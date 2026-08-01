#ifndef UE4SS_SDK_prop_garbageBin_HPP
#define UE4SS_SDK_prop_garbageBin_HPP

class Aprop_garbageBin_C : public Aprop_container_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UPhysicsConstraintComponent* nocoll1;                                       // 0x0438 (size: 0x8)
    class UStaticMeshComponent* bounceBackSound1;                                     // 0x0440 (size: 0x8)
    class UPhysicsConstraintComponent* nocoll;                                        // 0x0448 (size: 0x8)
    class UStaticMeshComponent* bounceBackSound;                                      // 0x0450 (size: 0x8)
    class UChildActorComponent* Cap;                                                  // 0x0458 (size: 0x8)
    class UArrowComponent* spwn;                                                      // 0x0460 (size: 0x8)
    class UBillboardComponent* Axis;                                                  // 0x0468 (size: 0x8)
    bool grabbed;                                                                     // 0x0470 (size: 0x1)
    int32 Slot;                                                                       // 0x0474 (size: 0x4)
    class UsaveSlot_C* sav;                                                           // 0x0478 (size: 0x8)
    int32 Type;                                                                       // 0x0480 (size: 0x4)

    void Init();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void getData(Fstruct_save& Data);
    void findSlot();
    void loadData(Fstruct_save Data, bool& return);
    void BndEvt__Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveDestroyed();
    void BndEvt__Box_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ReceiveBeginPlay();
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_prop_garbageBin(int32 EntryPoint);
}; // Size: 0x484

#endif
