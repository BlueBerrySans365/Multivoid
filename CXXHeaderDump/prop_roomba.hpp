#ifndef UE4SS_SDK_prop_roomba_HPP
#define UE4SS_SDK_prop_roomba_HPP

class Aprop_roomba_C : public Aprop_container_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)
    class UStaticMeshComponent* S_4;                                                  // 0x0438 (size: 0x8)
    class UAudioComponent* roomba_on;                                                 // 0x0440 (size: 0x8)
    class UAudioComponent* roomba_off;                                                // 0x0448 (size: 0x8)
    class UAudioComponent* roomba_loop;                                               // 0x0450 (size: 0x8)
    class UPhysicsConstraintComponent* 2;                                             // 0x0458 (size: 0x8)
    class UPhysicsConstraintComponent* 1;                                             // 0x0460 (size: 0x8)
    class UPhysicsConstraintComponent* 3;                                             // 0x0468 (size: 0x8)
    class UStaticMeshComponent* S_3;                                                  // 0x0470 (size: 0x8)
    class UStaticMeshComponent* S_2;                                                  // 0x0478 (size: 0x8)
    class UStaticMeshComponent* S_1;                                                  // 0x0480 (size: 0x8)
    class UStaticMeshComponent* dir;                                                  // 0x0488 (size: 0x8)
    float a_a_FAEF67734F2C96D682CE99AD2092AF66;                                       // 0x0490 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_FAEF67734F2C96D682CE99AD2092AF66; // 0x0494 (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0498 (size: 0x8)
    bool rotat;                                                                       // 0x04A0 (size: 0x1)
    float rot;                                                                        // 0x04A4 (size: 0x4)
    TArray<class UPrimitiveComponent*> Wheels;                                        // 0x04A8 (size: 0x10)
    bool Active;                                                                      // 0x04B8 (size: 0x1)
    bool move;                                                                        // 0x04B9 (size: 0x1)
    class UroombaBrush_Skeleton_AnimBlueprint_C* brushAnim;                           // 0x04C0 (size: 0x8)
    float Alpha;                                                                      // 0x04C8 (size: 0x4)
    bool rotDir;                                                                      // 0x04CC (size: 0x1)
    float V;                                                                          // 0x04D0 (size: 0x4)
    bool mov;                                                                         // 0x04D4 (size: 0x1)
    FVector Loc;                                                                      // 0x04D8 (size: 0xC)
    bool proc;                                                                        // 0x04E4 (size: 0x1)
    bool sw;                                                                          // 0x04E5 (size: 0x1)
    class AtrashBitsPile_C* overlappedPile;                                           // 0x04E8 (size: 0x8)

    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void upd();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void a__FinishedFunc();
    void a__UpdateFunc();
    void BndEvt__dir_K2Node_ComponentBoundEvent_1_ComponentHitSignature__DelegateSignature(class UPrimitiveComponent* HitComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void Activate();
    void Sound(bool Play);
    void use();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void BndEvt__prop_roomba_overlap_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_prop_roomba(int32 EntryPoint);
}; // Size: 0x4F0

#endif
