#ifndef UE4SS_SDK_ufo_joel_HPP
#define UE4SS_SDK_ufo_joel_HPP

class Aufo_joel_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0228 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0230 (size: 0x8)
    class USpringArmComponent* anchorUfo_1;                                           // 0x0238 (size: 0x8)
    class UBillboardComponent* point_A1;                                              // 0x0240 (size: 0x8)
    class UBillboardComponent* point_A2;                                              // 0x0248 (size: 0x8)
    class UBillboardComponent* Center_1;                                              // 0x0250 (size: 0x8)
    class USpringArmComponent* anchorRotUfo_1;                                        // 0x0258 (size: 0x8)
    class UBillboardComponent* point_B;                                               // 0x0260 (size: 0x8)
    class UBillboardComponent* point_A;                                               // 0x0268 (size: 0x8)
    class UStaticMeshComponent* uforot1;                                              // 0x0270 (size: 0x8)
    class UStaticMeshComponent* ufo1;                                                 // 0x0278 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0280 (size: 0x8)
    float moveUfo_a_1ADDEF40457D10F0DB2035899F19E9E2;                                 // 0x0288 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> moveUfo__Direction_1ADDEF40457D10F0DB2035899F19E9E2; // 0x028C (size: 0x1)
    class UTimelineComponent* moveUfo;                                                // 0x0290 (size: 0x8)
    bool dir;                                                                         // 0x0298 (size: 0x1)
    bool debug;                                                                       // 0x0299 (size: 0x1)
    class UMaterialInstanceDynamic* dynmat_dizzy;                                     // 0x02A0 (size: 0x8)

    void gen();
    void moveUfo__FinishedFunc();
    void moveUfo__UpdateFunc();
    void moveUfo__switch__EventFunc();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void move();
    void ExecuteUbergraph_ufo_joel(int32 EntryPoint);
}; // Size: 0x2A8

#endif
