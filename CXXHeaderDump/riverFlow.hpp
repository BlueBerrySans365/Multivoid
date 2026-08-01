#ifndef UE4SS_SDK_riverFlow_HPP
#define UE4SS_SDK_riverFlow_HPP

class AriverFlow_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USphereComponent* rad_in;                                                   // 0x0228 (size: 0x8)
    class USphereComponent* rad_out;                                                  // 0x0230 (size: 0x8)
    class UAudioComponent* water_river;                                               // 0x0238 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0240 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    float Force;                                                                      // 0x0258 (size: 0x4)
    float radius_out;                                                                 // 0x025C (size: 0x4)
    float radius_in;                                                                  // 0x0260 (size: 0x4)
    float debugRadius;                                                                // 0x0264 (size: 0x4)

    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_riverFlow(int32 EntryPoint);
}; // Size: 0x268

#endif
