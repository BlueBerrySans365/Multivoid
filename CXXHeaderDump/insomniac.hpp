#ifndef UE4SS_SDK_insomniac_HPP
#define UE4SS_SDK_insomniac_HPP

class Ainsomniac_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UBillboardComponent* eyes;                                                  // 0x04C8 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x04D0 (size: 0x8)
    float a_a_F8DCDEF449034E5490B096AE42811C1E;                                       // 0x04D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_F8DCDEF449034E5490B096AE42811C1E; // 0x04DC (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x04E0 (size: 0x8)
    class Uinsomniac_Skeleton_AnimBlueprint_C* Anim;                                  // 0x04E8 (size: 0x8)
    float Alpha;                                                                      // 0x04F0 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_body;                                      // 0x04F8 (size: 0x8)
    bool walking;                                                                     // 0x0500 (size: 0x1)
    class UMaterialInstanceDynamic* dynmat_eyes;                                      // 0x0508 (size: 0x8)
    FVector lastPoint;                                                                // 0x0510 (size: 0xC)
    bool spooker;                                                                     // 0x051C (size: 0x1)
    float engage;                                                                     // 0x0520 (size: 0x4)
    bool NewVar_0;                                                                    // 0x0524 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x0528 (size: 0x8)

    void makeMats();
    void a__FinishedFunc();
    void a__UpdateFunc();
    void OnFail_B694B567498643F56EBCC5B4D7CD8C9D(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_B694B567498643F56EBCC5B4D7CD8C9D(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnNotifyEnd_1A9050824C2776F602A04D9627382DA6(FName NotifyName);
    void OnNotifyBegin_1A9050824C2776F602A04D9627382DA6(FName NotifyName);
    void OnInterrupted_1A9050824C2776F602A04D9627382DA6(FName NotifyName);
    void OnBlendOut_1A9050824C2776F602A04D9627382DA6(FName NotifyName);
    void OnCompleted_1A9050824C2776F602A04D9627382DA6(FName NotifyName);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void startWalk();
    void ExecuteUbergraph_insomniac(int32 EntryPoint);
}; // Size: 0x530

#endif
