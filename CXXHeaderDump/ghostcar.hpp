#ifndef UE4SS_SDK_ghostcar_HPP
#define UE4SS_SDK_ghostcar_HPP

class Aghostcar_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Ucomp_cognitive_C* comp_cognitive2;                                         // 0x0370 (size: 0x8)
    class UBoxComponent* censorBox2;                                                  // 0x0378 (size: 0x8)
    class Ucomp_cognitive_C* comp_cognitive1;                                         // 0x0380 (size: 0x8)
    class UBoxComponent* censorBox1;                                                  // 0x0388 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0390 (size: 0x8)
    class UPhysicsConstraintComponent* ax_FL;                                         // 0x0398 (size: 0x8)
    class UPhysicsConstraintComponent* ax_FR;                                         // 0x03A0 (size: 0x8)
    class UPhysicsConstraintComponent* ax_BL;                                         // 0x03A8 (size: 0x8)
    class UPhysicsConstraintComponent* ax_BR;                                         // 0x03B0 (size: 0x8)
    class UStaticMeshComponent* wheel_FR;                                             // 0x03B8 (size: 0x8)
    class UPhysicsConstraintComponent* sus_FR;                                        // 0x03C0 (size: 0x8)
    class UStaticMeshComponent* wheel_BL;                                             // 0x03C8 (size: 0x8)
    class UPhysicsConstraintComponent* sus_BL;                                        // 0x03D0 (size: 0x8)
    class UStaticMeshComponent* wheel_BR;                                             // 0x03D8 (size: 0x8)
    class UPhysicsConstraintComponent* sus_BR;                                        // 0x03E0 (size: 0x8)
    class UStaticMeshComponent* wheel_FL;                                             // 0x03E8 (size: 0x8)
    class UPhysicsConstraintComponent* sus_FL;                                        // 0x03F0 (size: 0x8)
    FVector Velocity;                                                                 // 0x03F8 (size: 0xC)

    void isNotSawable(bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void ignoreSave(bool& ignoreSave);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__ghostcar_StaticMesh1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ExecuteUbergraph_ghostcar(int32 EntryPoint);
}; // Size: 0x404

#endif
