#ifndef UE4SS_SDK_windturbine_HPP
#define UE4SS_SDK_windturbine_HPP

class Awindturbine_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class UChildActorComponent* ladder4;                                              // 0x0250 (size: 0x8)
    class UArrowComponent* windArrow;                                                 // 0x0258 (size: 0x8)
    class UCapsuleComponent* boundCaps;                                               // 0x0260 (size: 0x8)
    class UAudioComponent* motor;                                                     // 0x0268 (size: 0x8)
    class UStaticMeshComponent* motorH;                                               // 0x0270 (size: 0x8)
    class USceneComponent* spawnAudioWoosh;                                           // 0x0278 (size: 0x8)
    class UChildActorComponent* ladder3;                                              // 0x0280 (size: 0x8)
    class UChildActorComponent* indoors3;                                             // 0x0288 (size: 0x8)
    class UChildActorComponent* indoors2;                                             // 0x0290 (size: 0x8)
    class UChildActorComponent* indoors1;                                             // 0x0298 (size: 0x8)
    class UChildActorComponent* door;                                                 // 0x02A0 (size: 0x8)
    class UChildActorComponent* ladder2;                                              // 0x02A8 (size: 0x8)
    class USceneComponent* axis_motor1;                                               // 0x02B0 (size: 0x8)
    class USceneComponent* axis_blades;                                               // 0x02B8 (size: 0x8)
    class USceneComponent* axis_motor;                                                // 0x02C0 (size: 0x8)
    class UStaticMeshComponent* motorDoor;                                            // 0x02C8 (size: 0x8)
    class UStaticMeshComponent* motorIn;                                              // 0x02D0 (size: 0x8)
    class UStaticMeshComponent* blades;                                               // 0x02D8 (size: 0x8)
    class UStaticMeshComponent* head;                                                 // 0x02E0 (size: 0x8)
    class USceneComponent* axis_room;                                                 // 0x02E8 (size: 0x8)
    class UStaticMeshComponent* Base;                                                 // 0x02F0 (size: 0x8)
    float alpha_blades;                                                               // 0x02F8 (size: 0x4)
    float Speed;                                                                      // 0x02FC (size: 0x4)
    float headRotation;                                                               // 0x0300 (size: 0x4)
    FFloatSpringState headSpring;                                                     // 0x0304 (size: 0x8)
    float targetRot;                                                                  // 0x030C (size: 0x4)
    int32 woosh;                                                                      // 0x0310 (size: 0x4)
    TArray<class Awindturbine_C*> subs;                                               // 0x0318 (size: 0x10)
    float mult;                                                                       // 0x0328 (size: 0x4)
    bool doRot;                                                                       // 0x032C (size: 0x1)
    bool doSpin;                                                                      // 0x032D (size: 0x1)
    float tot;                                                                        // 0x0330 (size: 0x4)
    float bladesMomentum;                                                             // 0x0334 (size: 0x4)
    FFloatSpringState bladesSpring;                                                   // 0x0338 (size: 0x8)
    float rot;                                                                        // 0x0340 (size: 0x4)
    FVector prevRot;                                                                  // 0x0344 (size: 0xC)

    void setCollide();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void gatherDataFromKey(bool& gather, bool& loadTransform);
    void setTargetRots(float targetRot);
    void Set Rots();
    void ReceiveBeginPlay();
    void setRandRot();
    void ReceiveTick(float DeltaSeconds);
    void rotats();
    void BndEvt__windturbine_boundCaps_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__windturbine_boundCaps_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_windturbine(int32 EntryPoint);
}; // Size: 0x350

#endif
