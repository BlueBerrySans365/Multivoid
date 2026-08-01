#ifndef UE4SS_SDK_arirShip_HPP
#define UE4SS_SDK_arirShip_HPP

class AarirShip_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0228 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x0230 (size: 0x8)
    class UPointLightComponent* ligh;                                                 // 0x0238 (size: 0x8)
    class UAudioComponent* warpOut;                                                   // 0x0240 (size: 0x8)
    class UStaticMeshComponent* scancone;                                             // 0x0248 (size: 0x8)
    class UMaterialBillboardComponent* flash;                                         // 0x0250 (size: 0x8)
    class UAudioComponent* wa_warpStart;                                              // 0x0258 (size: 0x8)
    class UArrowComponent* rottt;                                                     // 0x0260 (size: 0x8)
    class USkeletalMeshComponent* warparrowFly;                                       // 0x0268 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0270 (size: 0x8)
    class UPostProcessComponent* scann;                                               // 0x0278 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0280 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0288 (size: 0x8)
    float Timeline_0_a_D30A923F44036B164CD0DF89DC5D462C;                              // 0x0290 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_D30A923F44036B164CD0DF89DC5D462C; // 0x0294 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0298 (size: 0x8)
    float canart_a_C721FF6B4DADD2F1A263149C6A3377A6;                                  // 0x02A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> canart__Direction_C721FF6B4DADD2F1A263149C6A3377A6; // 0x02A4 (size: 0x1)
    class UTimelineComponent* canart;                                                 // 0x02A8 (size: 0x8)
    float scanline_a_FF8DCF824C26588B7E8FD8937C061AEE;                                // 0x02B0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> scanline__Direction_FF8DCF824C26588B7E8FD8937C061AEE; // 0x02B4 (size: 0x1)
    class UTimelineComponent* Scanline;                                               // 0x02B8 (size: 0x8)
    float A;                                                                          // 0x02C0 (size: 0x4)
    float Size;                                                                       // 0x02C4 (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_flash;                                     // 0x02C8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_cone;                                      // 0x02D0 (size: 0x8)

    void UserConstructionScript();
    void scanline__FinishedFunc();
    void scanline__UpdateFunc();
    void canart__FinishedFunc();
    void canart__UpdateFunc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnNotifyEnd_8767AF87472C634C9BA6188339A7338A(FName NotifyName);
    void OnNotifyBegin_8767AF87472C634C9BA6188339A7338A(FName NotifyName);
    void OnInterrupted_8767AF87472C634C9BA6188339A7338A(FName NotifyName);
    void OnBlendOut_8767AF87472C634C9BA6188339A7338A(FName NotifyName);
    void OnCompleted_8767AF87472C634C9BA6188339A7338A(FName NotifyName);
    void ReceiveBeginPlay();
    void lightInt();
    void BndEvt__warpOut_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void ReceiveTick(float DeltaSeconds);
    void getLoc();
    void ExecuteUbergraph_arirShip(int32 EntryPoint);
}; // Size: 0x2D8

#endif
