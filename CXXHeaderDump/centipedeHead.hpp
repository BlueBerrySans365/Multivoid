#ifndef UE4SS_SDK_centipedeHead_HPP
#define UE4SS_SDK_centipedeHead_HPP

class AcentipedeHead_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x04C8 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x04D0 (size: 0x8)
    class UBillboardComponent* pull;                                                  // 0x04D8 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x04E0 (size: 0x8)
    class UChildActorComponent* Sub;                                                  // 0x04E8 (size: 0x8)
    class USphereComponent* eat;                                                      // 0x04F0 (size: 0x8)
    class UStaticMeshComponent* ass;                                                  // 0x04F8 (size: 0x8)
    class UArrowComponent* move;                                                      // 0x0500 (size: 0x8)
    class UBillboardComponent* R;                                                     // 0x0508 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0510 (size: 0x8)
    int32 Length;                                                                     // 0x0518 (size: 0x4)
    TArray<FVector> locs;                                                             // 0x0520 (size: 0x10)
    TArray<class AcentipedeSegmet_C*> Segment;                                        // 0x0530 (size: 0x10)
    FRotator rot;                                                                     // 0x0540 (size: 0xC)
    FVector lastloc;                                                                  // 0x054C (size: 0xC)
    float R_0;                                                                        // 0x0558 (size: 0x4)
    TArray<FVector> tilts;                                                            // 0x0560 (size: 0x10)
    class AActor* Target;                                                             // 0x0570 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> P;                                          // 0x0578 (size: 0x10)
    class AsubPawn_C* subPawn;                                                        // 0x0588 (size: 0x8)
    bool rendered;                                                                    // 0x0590 (size: 0x1)
    TArray<class AcentipedeSegmet_C*> Segment_0;                                      // 0x0598 (size: 0x10)
    int32 eats;                                                                       // 0x05A8 (size: 0x4)
    TSubclassOf<class AcentipedeSegmet_C> segm;                                       // 0x05B0 (size: 0x8)
    bool isBaby;                                                                      // 0x05B8 (size: 0x1)
    class AcentipedeHead_C* babyFollow;                                               // 0x05C0 (size: 0x8)
    TArray<class AwolfgangJr_C*> babys;                                               // 0x05C8 (size: 0x10)
    bool isEgged;                                                                     // 0x05D8 (size: 0x1)
    FVector babyLocOffset;                                                            // 0x05DC (size: 0xC)
    TArray<class AActor*> memoryNonAccess;                                            // 0x05E8 (size: 0x10)
    TArray<class AActor*> debugAv;                                                    // 0x05F8 (size: 0x10)

    void processAvailable(TArray<class AActor*>& Array, TArray<class AActor*>& A1);
    FRotator weqweqwewqe();
    void OnFail_1E07721640E109D579AB289B1B2DA79F(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_1E07721640E109D579AB289B1B2DA79F(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_1B9B4E384B33019C412BB5ADF65F2588(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_1B9B4E384B33019C412BB5ADF65F2588(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__eat_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveDestroyed();
    void kick();
    void calc();
    void checkDoors();
    void bbyoffste();
    void CustomEvent();
    void ExecuteUbergraph_centipedeHead(int32 EntryPoint);
}; // Size: 0x608

#endif
