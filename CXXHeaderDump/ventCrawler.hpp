#ifndef UE4SS_SDK_ventCrawler_HPP
#define UE4SS_SDK_ventCrawler_HPP

class AventCrawler_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x04C8 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x04D0 (size: 0x8)
    float ventBreakTL_a_EC322B2941F0898B8DAA1E9ABB754BCD;                             // 0x04D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> ventBreakTL__Direction_EC322B2941F0898B8DAA1E9ABB754BCD; // 0x04DC (size: 0x1)
    class UTimelineComponent* ventBreakTL;                                            // 0x04E0 (size: 0x8)
    float moveTL_pitch_E19D9CFD455E27F0AECC319324BC26AD;                              // 0x04E8 (size: 0x4)
    float moveTL_multiplyVolume_E19D9CFD455E27F0AECC319324BC26AD;                     // 0x04EC (size: 0x4)
    float moveTL_stepVolume_E19D9CFD455E27F0AECC319324BC26AD;                         // 0x04F0 (size: 0x4)
    float moveTL_a_E19D9CFD455E27F0AECC319324BC26AD;                                  // 0x04F4 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> moveTL__Direction_E19D9CFD455E27F0AECC319324BC26AD; // 0x04F8 (size: 0x1)
    class UTimelineComponent* moveTL;                                                 // 0x0500 (size: 0x8)
    FTransform vent_A;                                                                // 0x0510 (size: 0x30)
    FTransform vent_b;                                                                // 0x0540 (size: 0x30)
    class Aprop_vent_C* vent;                                                         // 0x0570 (size: 0x8)
    FVector loc_A;                                                                    // 0x0578 (size: 0xC)
    FVector loc_B;                                                                    // 0x0584 (size: 0xC)

    void moveTL__FinishedFunc();
    void moveTL__UpdateFunc();
    void moveTL__stepSounds__EventFunc();
    void moveTL__breakVent__EventFunc();
    void ventBreakTL__FinishedFunc();
    void ventBreakTL__UpdateFunc();
    void step();
    void BndEvt__ventCrawler_Box_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_ventCrawler(int32 EntryPoint);
}; // Size: 0x590

#endif
