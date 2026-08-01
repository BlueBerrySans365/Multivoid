#ifndef UE4SS_SDK_prop_rake_HPP
#define UE4SS_SDK_prop_rake_HPP

class Aprop_rake_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UStaticMeshComponent* Arrow1;                                               // 0x0370 (size: 0x8)
    class UBillboardComponent* digSpot;                                               // 0x0378 (size: 0x8)
    class UBillboardComponent* B;                                                     // 0x0380 (size: 0x8)
    class UStaticMeshComponent* StaticMesh1;                                          // 0x0388 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0390 (size: 0x8)
    class UCapsuleComponent* Capsule;                                                 // 0x0398 (size: 0x8)
    float whackTimeline_a_5E7C23F541054185D1F9E28582CBFA66;                           // 0x03A0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> whackTimeline__Direction_5E7C23F541054185D1F9E28582CBFA66; // 0x03A4 (size: 0x1)
    class UTimelineComponent* whackTimeline;                                          // 0x03A8 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x03B0 (size: 0x8)
    float Force;                                                                      // 0x03B8 (size: 0x4)
    float Speed;                                                                      // 0x03BC (size: 0x4)
    bool whacking;                                                                    // 0x03C0 (size: 0x1)
    FTransform tr_B;                                                                  // 0x03D0 (size: 0x30)
    FTransform tr_A;                                                                  // 0x0400 (size: 0x30)
    bool smacked;                                                                     // 0x0430 (size: 0x1)
    FVector last;                                                                     // 0x0434 (size: 0xC)
    class AmainPlayer_C* p2;                                                          // 0x0440 (size: 0x8)
    FVector Loc;                                                                      // 0x0448 (size: 0xC)

    void whackTimeline__FinishedFunc();
    void whackTimeline__UpdateFunc();
    void OnNotifyEnd_0F7346AF4815D1B767E7E1B865F06C02(FName NotifyName);
    void OnNotifyBegin_0F7346AF4815D1B767E7E1B865F06C02(FName NotifyName);
    void OnInterrupted_0F7346AF4815D1B767E7E1B865F06C02(FName NotifyName);
    void OnBlendOut_0F7346AF4815D1B767E7E1B865F06C02(FName NotifyName);
    void OnCompleted_0F7346AF4815D1B767E7E1B865F06C02(FName NotifyName);
    void OnNotifyEnd_C4DD4A4849ECBCBBA470EE92776983F3(FName NotifyName);
    void OnNotifyBegin_C4DD4A4849ECBCBBA470EE92776983F3(FName NotifyName);
    void OnInterrupted_C4DD4A4849ECBCBBA470EE92776983F3(FName NotifyName);
    void OnBlendOut_C4DD4A4849ECBCBBA470EE92776983F3(FName NotifyName);
    void OnCompleted_C4DD4A4849ECBCBBA470EE92776983F3(FName NotifyName);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void steppedOn(class AmainPlayer_C* Player, FHitResult Hit);
    void whack();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_rake(int32 EntryPoint);
}; // Size: 0x454

#endif
