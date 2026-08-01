#ifndef UE4SS_SDK_woodchipper_HPP
#define UE4SS_SDK_woodchipper_HPP

class Awoodchipper_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBoxComponent* fueltank;                                                    // 0x0370 (size: 0x8)
    class UBoxComponent* Button_del;                                                  // 0x0378 (size: 0x8)
    class UChildActorComponent* wheel;                                                // 0x0380 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0388 (size: 0x8)
    class UArrowComponent* clip1;                                                     // 0x0390 (size: 0x8)
    class UBillboardComponent* Exp;                                                   // 0x0398 (size: 0x8)
    class UBillboardComponent* Axis;                                                  // 0x03A0 (size: 0x8)
    class UBillboardComponent* Origin;                                                // 0x03A8 (size: 0x8)
    class UArrowComponent* clip;                                                      // 0x03B0 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x03B8 (size: 0x8)
    class UParticleSystemComponent* ParticleSystem;                                   // 0x03C0 (size: 0x8)
    class UAudioComponent* woodchipper_loop;                                          // 0x03C8 (size: 0x8)
    class UAudioComponent* woodchipper_chipLoop;                                      // 0x03D0 (size: 0x8)
    class UBoxComponent* eat;                                                         // 0x03D8 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x03E0 (size: 0x8)
    float Timeline_0_a_8E16B732496440B4A40966B518AA4408;                              // 0x03E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_8E16B732496440B4A40966B518AA4408; // 0x03EC (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x03F0 (size: 0x8)
    float snds_a_A92CC18C4D34810C90E1CF9C3ABF7027;                                    // 0x03F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> snds__Direction_A92CC18C4D34810C90E1CF9C3ABF7027; // 0x03FC (size: 0x1)
    class UTimelineComponent* snds;                                                   // 0x0400 (size: 0x8)
    float A_0;                                                                        // 0x0408 (size: 0x4)
    bool process;                                                                     // 0x040C (size: 0x1)
    FTransform l_A;                                                                   // 0x0410 (size: 0x30)
    FTransform l_B;                                                                   // 0x0440 (size: 0x30)
    float zloc;                                                                       // 0x0470 (size: 0x4)
    float B;                                                                          // 0x0474 (size: 0x4)
    class UMaterialInstanceDynamic* dynma;                                            // 0x0478 (size: 0x8)
    class UTexture* das;                                                              // 0x0480 (size: 0x8)
    float vol;                                                                        // 0x0488 (size: 0x4)
    class UPrimitiveComponent* comp;                                                  // 0x0490 (size: 0x8)
    bool Active;                                                                      // 0x0498 (size: 0x1)
    bool chipping;                                                                    // 0x0499 (size: 0x1)
    float power;                                                                      // 0x049C (size: 0x4)
    float power2;                                                                     // 0x04A0 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_obj;                                       // 0x04A8 (size: 0x8)
    class UPhysicalMaterial* objectPhys;                                              // 0x04B0 (size: 0x8)
    float garbAccumulate;                                                             // 0x04B8 (size: 0x4)
    class AActor* ac;                                                                 // 0x04C0 (size: 0x8)
    float fuel;                                                                       // 0x04C8 (size: 0x4)
    bool lookAtFueltank;                                                              // 0x04CC (size: 0x1)
    bool erret;                                                                       // 0x04CD (size: 0x1)
    bool cursedmann;                                                                  // 0x04CE (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void gascanFuel(class Aprop_gascan_C* gascan, class AmainPlayer_C* Player, bool back, bool& fueled);
    void checkActive();
    void dropTrash();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    bool canChip(class UStaticMeshComponent* self2);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void snds__FinishedFunc();
    void snds__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void chip();
    void ReceiveBeginPlay();
    void startup(bool Active);
    void chippingSnd(bool Active);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void rot();
    void BndEvt__eat_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_woodchipper(int32 EntryPoint);
}; // Size: 0x4CF

#endif
