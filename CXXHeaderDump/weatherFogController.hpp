#ifndef UE4SS_SDK_weatherFogController_HPP
#define UE4SS_SDK_weatherFogController_HPP

class AweatherFogController_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    class AdaynightCycle_C* cyc;                                                      // 0x0230 (size: 0x8)
    float Time;                                                                       // 0x0238 (size: 0x4)
    float Alpha;                                                                      // 0x023C (size: 0x4)
    float Duration;                                                                   // 0x0240 (size: 0x4)
    float fogPhase;                                                                   // 0x0244 (size: 0x4)
    bool permanent;                                                                   // 0x0248 (size: 0x1)
    bool permafog;                                                                    // 0x0249 (size: 0x1)
    float Strength;                                                                   // 0x024C (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_weatherFogController(int32 EntryPoint);
}; // Size: 0x250

#endif
