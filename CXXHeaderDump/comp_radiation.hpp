#ifndef UE4SS_SDK_comp_radiation_HPP
#define UE4SS_SDK_comp_radiation_HPP

class Ucomp_radiation_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)
    float Radius;                                                                     // 0x00B8 (size: 0x4)
    float Strength;                                                                   // 0x00BC (size: 0x4)
    float Delay;                                                                      // 0x00C0 (size: 0x4)
    class AActor* Owner;                                                              // 0x00C8 (size: 0x8)
    TArray<TEnumAsByte<EObjectTypeQuery>> obj;                                        // 0x00D0 (size: 0x10)
    int32 Amount;                                                                     // 0x00E0 (size: 0x4)
    TArray<class AActor*> A;                                                          // 0x00E8 (size: 0x10)
    bool delayVariety;                                                                // 0x00F8 (size: 0x1)
    float delayVariety_max;                                                           // 0x00FC (size: 0x4)

    void calcRadAmount(FVector pointA, FVector pointB, float& rad);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Dest(class AActor* DestroyedActor);
    void ExecuteUbergraph_comp_radiation(int32 EntryPoint);
}; // Size: 0x100

#endif
