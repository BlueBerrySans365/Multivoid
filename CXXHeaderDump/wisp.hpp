#ifndef UE4SS_SDK_wisp_HPP
#define UE4SS_SDK_wisp_HPP

class Awisp_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x04C8 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x04D0 (size: 0x8)
    class UBillboardComponent* arg;                                                   // 0x04D8 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x04E0 (size: 0x8)
    class UParticleSystemComponent* eff_wisp;                                         // 0x04E8 (size: 0x8)
    float a_a_0405F1684513B03B00D2F2A73082564A;                                       // 0x04F0 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_0405F1684513B03B00D2F2A73082564A; // 0x04F4 (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x04F8 (size: 0x8)
    float ime;                                                                        // 0x0500 (size: 0x4)
    bool disappearing;                                                                // 0x0504 (size: 0x1)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x0508 (size: 0x10)
    bool landed;                                                                      // 0x0518 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x0520 (size: 0x8)

    void UserConstructionScript();
    void a__FinishedFunc();
    void a__UpdateFunc();
    void OnFail_95C7E50A40390A94DFC4A1A7F17F1D14(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_95C7E50A40390A94DFC4A1A7F17F1D14(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveBeginPlay();
    void dir(bool Condition);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_wisp(int32 EntryPoint);
}; // Size: 0x528

#endif
