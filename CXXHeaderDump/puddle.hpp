#ifndef UE4SS_SDK_puddle_HPP
#define UE4SS_SDK_puddle_HPP

class Apuddle_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x04C8 (size: 0x8)
    class UStaticMeshComponent* Cylinder;                                             // 0x04D0 (size: 0x8)
    class USphereComponent* detect;                                                   // 0x04D8 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x04E0 (size: 0x8)
    class UDecalComponent* Decal;                                                     // 0x04E8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x04F0 (size: 0x8)
    bool assigned;                                                                    // 0x04F8 (size: 0x1)
    float sink;                                                                       // 0x04FC (size: 0x4)
    FVector lastloc;                                                                  // 0x0500 (size: 0xC)
    class APawn* Target;                                                              // 0x0510 (size: 0x8)
    FVector Loc;                                                                      // 0x0518 (size: 0xC)
    bool Event;                                                                       // 0x0524 (size: 0x1)

    class APawn* getTarget();
    void upd();
    void NewFunction_0();
    void UserConstructionScript();
    void OnFail_DB80B4B54D91A2F3EB02A8911A22715E(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_DB80B4B54D91A2F3EB02A8911A22715E(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void jumped(bool Pressed);
    void move();
    void Reset();
    void despawn();
    void BndEvt__puddle_detect_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__puddle_detect_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_puddle(int32 EntryPoint);
}; // Size: 0x525

#endif
