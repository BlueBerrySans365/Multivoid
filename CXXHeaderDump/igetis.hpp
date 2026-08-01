#ifndef UE4SS_SDK_igetis_HPP
#define UE4SS_SDK_igetis_HPP

class Aigetis_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0228 (size: 0x8)
    class UAudioComponent* inject;                                                    // 0x0230 (size: 0x8)
    class UAudioComponent* handSlaps;                                                 // 0x0238 (size: 0x8)
    class UAudioComponent* elecStart;                                                 // 0x0240 (size: 0x8)
    class UAudioComponent* elec;                                                      // 0x0248 (size: 0x8)
    class UAudioComponent* loop;                                                      // 0x0250 (size: 0x8)
    class UParticleSystemComponent* beam_p;                                           // 0x0258 (size: 0x8)
    class UParticleSystemComponent* beam_L;                                           // 0x0260 (size: 0x8)
    class UParticleSystemComponent* beam_R;                                           // 0x0268 (size: 0x8)
    class UBillboardComponent* pivotPut;                                              // 0x0270 (size: 0x8)
    class UArrowComponent* velThrow;                                                  // 0x0278 (size: 0x8)
    class UStaticMeshComponent* capsule_L1;                                           // 0x0280 (size: 0x8)
    class UBillboardComponent* pivotA_L;                                              // 0x0288 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0290 (size: 0x8)
    class UStaticMeshComponent* capsule_R1;                                           // 0x0298 (size: 0x8)
    class UBillboardComponent* pivotA_R;                                              // 0x02A0 (size: 0x8)
    class UStaticMeshComponent* capsule_L;                                            // 0x02A8 (size: 0x8)
    class UBillboardComponent* pivotB_L;                                              // 0x02B0 (size: 0x8)
    class UStaticMeshComponent* capsule_R;                                            // 0x02B8 (size: 0x8)
    class UBillboardComponent* pivotB_R;                                              // 0x02C0 (size: 0x8)
    class USphereComponent* Sphere1;                                                  // 0x02C8 (size: 0x8)
    class USkeletalMeshComponent* igetis1_animhole7;                                  // 0x02D0 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x02D8 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x02E0 (size: 0x8)
    float Timeline_4_a_B5E6EF364C2C276B642D108E4C6ADD94;                              // 0x02E8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_4__Direction_B5E6EF364C2C276B642D108E4C6ADD94; // 0x02EC (size: 0x1)
    class UTimelineComponent* Timeline_4;                                             // 0x02F0 (size: 0x8)
    float Timeline_3_a_3BBB91EA44240CCA9F70FE95BA6DC308;                              // 0x02F8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_3__Direction_3BBB91EA44240CCA9F70FE95BA6DC308; // 0x02FC (size: 0x1)
    class UTimelineComponent* Timeline_3;                                             // 0x0300 (size: 0x8)
    float Timeline_2_a_BEF40F434A12918CC59283939FF3AF13;                              // 0x0308 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_2__Direction_BEF40F434A12918CC59283939FF3AF13; // 0x030C (size: 0x1)
    class UTimelineComponent* Timeline_2;                                             // 0x0310 (size: 0x8)
    float Timeline_1_a_FEB543E043510A59A829709BB8164816;                              // 0x0318 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_1__Direction_FEB543E043510A59A829709BB8164816; // 0x031C (size: 0x1)
    class UTimelineComponent* Timeline_1;                                             // 0x0320 (size: 0x8)
    float Timeline_0_a_6090EA324DA84618232F00B44B3A2CBA;                              // 0x0328 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_6090EA324DA84618232F00B44B3A2CBA; // 0x032C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0330 (size: 0x8)
    float magna_a_214D0F5F485AD43009B7178DD0988803;                                   // 0x0338 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> magna__Direction_214D0F5F485AD43009B7178DD0988803; // 0x033C (size: 0x1)
    class UTimelineComponent* magna;                                                  // 0x0340 (size: 0x8)
    bool visited;                                                                     // 0x0348 (size: 0x1)
    class AkavotiaPatrolController_C* patreolController;                              // 0x0350 (size: 0x8)
    bool Anim;                                                                        // 0x0358 (size: 0x1)
    float magnet_R;                                                                   // 0x035C (size: 0x4)
    FTransform init_R;                                                                // 0x0360 (size: 0x30)
    float magnet_L;                                                                   // 0x0390 (size: 0x4)
    FTransform init_L;                                                                // 0x03A0 (size: 0x30)
    float putAlpha;                                                                   // 0x03D0 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_beam1;                                     // 0x03D8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_beam2;                                     // 0x03E0 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_beamPut;                                   // 0x03E8 (size: 0x8)

    void tryDelete();
    void magna__FinishedFunc();
    void magna__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void Timeline_1__FinishedFunc();
    void Timeline_1__UpdateFunc();
    void Timeline_2__FinishedFunc();
    void Timeline_2__UpdateFunc();
    void Timeline_3__FinishedFunc();
    void Timeline_3__UpdateFunc();
    void Timeline_4__FinishedFunc();
    void Timeline_4__UpdateFunc();
    void OnNotifyEnd_1F02E3C54A95B9529AC8DE8ED5E6A6C9(FName NotifyName);
    void OnNotifyBegin_1F02E3C54A95B9529AC8DE8ED5E6A6C9(FName NotifyName);
    void OnInterrupted_1F02E3C54A95B9529AC8DE8ED5E6A6C9(FName NotifyName);
    void OnBlendOut_1F02E3C54A95B9529AC8DE8ED5E6A6C9(FName NotifyName);
    void OnCompleted_1F02E3C54A95B9529AC8DE8ED5E6A6C9(FName NotifyName);
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__igetis_Sphere_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void timerDestroy();
    void tryDestroyTimer();
    void BndEvt__igetis_Sphere1_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void magnetA();
    void checkVisible();
    void magnetB();
    void throw();
    void put();
    void beamOn1(bool Condition);
    void beamOn2(bool Condition);
    void beamPut(bool Condition);
    void ExecuteUbergraph_igetis(int32 EntryPoint);
}; // Size: 0x3F0

#endif
