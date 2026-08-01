#ifndef UE4SS_SDK_noiser_HPP
#define UE4SS_SDK_noiser_HPP

class Anoiser_C : public ACharacter
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04C0 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x04C8 (size: 0x8)
    class UNavigationInvokerComponent* NavigationInvoker;                             // 0x04D0 (size: 0x8)
    float step;                                                                       // 0x04D8 (size: 0x4)
    FVector lastStep;                                                                 // 0x04DC (size: 0xC)
    FVector walkTo;                                                                   // 0x04E8 (size: 0xC)
    TArray<FVector> walkPath;                                                         // 0x04F8 (size: 0x10)
    int32 ind;                                                                        // 0x0508 (size: 0x4)
    float Volume;                                                                     // 0x050C (size: 0x4)
    class USoundAttenuation* att;                                                     // 0x0510 (size: 0x8)
    FString Key;                                                                      // 0x0518 (size: 0x10)
    bool walking;                                                                     // 0x0528 (size: 0x1)
    bool Walk;                                                                        // 0x0529 (size: 0x1)

    void setPoint();
    void stepOn();
    void OnFail_B0DA3AC64CD2F548A9ECFFB9B8CF0D20(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_B0DA3AC64CD2F548A9ECFFB9B8CF0D20(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void despawn();
    void Timer();
    void seen();
    void ExecuteUbergraph_noiser(int32 EntryPoint);
}; // Size: 0x52A

#endif
