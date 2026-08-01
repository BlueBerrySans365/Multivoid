#ifndef UE4SS_SDK_npc_orborb_HPP
#define UE4SS_SDK_npc_orborb_HPP

class Anpc_orborb_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class Ucomp_radarPoint_C* comp_radarPoint;                                        // 0x04C8 (size: 0x8)
    class Ucomp_paranormal_C* comp_paranormal;                                        // 0x04D0 (size: 0x8)
    class UAudioComponent* Audio10;                                                   // 0x04D8 (size: 0x8)
    class UAudioComponent* Audio9;                                                    // 0x04E0 (size: 0x8)
    class UAudioComponent* Audio8;                                                    // 0x04E8 (size: 0x8)
    class UAudioComponent* Audio7;                                                    // 0x04F0 (size: 0x8)
    class UAudioComponent* Audio6;                                                    // 0x04F8 (size: 0x8)
    class UAudioComponent* Audio5;                                                    // 0x0500 (size: 0x8)
    class UAudioComponent* Audio4;                                                    // 0x0508 (size: 0x8)
    class UAudioComponent* audio3;                                                    // 0x0510 (size: 0x8)
    class UAudioComponent* audio2;                                                    // 0x0518 (size: 0x8)
    class UAudioComponent* audio1;                                                    // 0x0520 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0528 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x0530 (size: 0x8)
    class UStaticMeshComponent* A;                                                    // 0x0538 (size: 0x8)
    class UPhysicsConstraintComponent* PhysicsConstraint;                             // 0x0540 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0548 (size: 0x8)
    float b_a_1381414A40D37AB96969A2946430BA6B;                                       // 0x0550 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> b__Direction_1381414A40D37AB96969A2946430BA6B; // 0x0554 (size: 0x1)
    class UTimelineComponent* B;                                                      // 0x0558 (size: 0x8)
    bool beginEvent;                                                                  // 0x0560 (size: 0x1)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0568 (size: 0x8)
    TArray<class UAudioComponent*> snds;                                              // 0x0570 (size: 0x10)
    bool dassad;                                                                      // 0x0580 (size: 0x1)
    FString NewVar_0;                                                                 // 0x0588 (size: 0x10)

    void b__FinishedFunc();
    void b__UpdateFunc();
    void OnMoveFinished_0BADAADE412BD9DF9447528327400E4B(TEnumAsByte<EPathFollowingResult::Type> Result, class AAIController* AIController);
    void OnRequestFailed_0BADAADE412BD9DF9447528327400E4B();
    void ReceiveBeginPlay();
    void BndEvt__blackBall_Sphere1_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void begin();
    void ReceiveDestroyed();
    void ExecuteUbergraph_npc_orborb(int32 EntryPoint);
}; // Size: 0x598

#endif
