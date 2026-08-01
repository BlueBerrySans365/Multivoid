#ifndef UE4SS_SDK_pcWASDtest_HPP
#define UE4SS_SDK_pcWASDtest_HPP

class ApcWASDtest_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class USpringArmComponent* Root;                                                  // 0x04C8 (size: 0x8)
    class USphereComponent* useZone;                                                  // 0x04D0 (size: 0x8)
    class USpringArmComponent* meshAttach;                                            // 0x04D8 (size: 0x8)
    class UArrowComponent* Forward;                                                   // 0x04E0 (size: 0x8)
    class USpringArmComponent* armFoot;                                               // 0x04E8 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x04F0 (size: 0x8)
    class UStaticMeshComponent* Shadow;                                               // 0x04F8 (size: 0x8)
    class UArrowComponent* fireArrow;                                                 // 0x0500 (size: 0x8)
    class USpringArmComponent* SpringArm;                                             // 0x0508 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0510 (size: 0x8)
    float stompAnim_a_8E072370429C36BB893753886FFBE40F;                               // 0x0518 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> stompAnim__Direction_8E072370429C36BB893753886FFBE40F; // 0x051C (size: 0x1)
    class UTimelineComponent* stompAnim;                                              // 0x0520 (size: 0x8)
    class UTextureRenderTarget2D* tex;                                                // 0x0528 (size: 0x8)
    bool input_W;                                                                     // 0x0530 (size: 0x1)
    bool input_A;                                                                     // 0x0531 (size: 0x1)
    bool input_S;                                                                     // 0x0532 (size: 0x1)
    bool input_D;                                                                     // 0x0533 (size: 0x1)
    FVector2D Turn;                                                                   // 0x0534 (size: 0x8)
    class Alaptop_C* PC;                                                              // 0x0540 (size: 0x8)
    float Len;                                                                        // 0x0548 (size: 0x4)
    float StepSize;                                                                   // 0x054C (size: 0x4)
    bool sprint;                                                                      // 0x0550 (size: 0x1)
    bool doubleJumped;                                                                // 0x0551 (size: 0x1)
    bool isStompjump;                                                                 // 0x0552 (size: 0x1)
    bool crouchJump;                                                                  // 0x0553 (size: 0x1)
    bool moved;                                                                       // 0x0554 (size: 0x1)
    float airtime;                                                                    // 0x0558 (size: 0x4)
    float DeltaSeconds;                                                               // 0x055C (size: 0x4)
    bool firstPerson;                                                                 // 0x0560 (size: 0x1)

    void scroll(float scrollVal);
    void use();
    void jumpChar();
    void SetSpeed();
    void playSoundAtPc(FVector WorldLocation, class USoundBase* Sound, float Distance, float Volume, float Pitch);
    void fire();
    void stopRT();
    void startRT(class UTextureRenderTarget2D*& tex);
    void lookAround(float InputPin);
    void move();
    void stompAnim__FinishedFunc();
    void stompAnim__UpdateFunc();
    void OnLanded(const FHitResult& Hit);
    void stompJump();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void K2_OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void K2_OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust);
    void prepareCrouchJump();
    void ExecuteUbergraph_pcWASDtest(int32 EntryPoint);
}; // Size: 0x561

#endif
