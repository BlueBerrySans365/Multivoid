#ifndef UE4SS_SDK_rozitBorg_HPP
#define UE4SS_SDK_rozitBorg_HPP

class ArozitBorg_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0228 (size: 0x8)
    class UStaticMeshComponent* ship3;                                                // 0x0230 (size: 0x8)
    class UBillboardComponent* ships;                                                 // 0x0238 (size: 0x8)
    class UStaticMeshComponent* B;                                                    // 0x0240 (size: 0x8)
    class UStaticMeshComponent* A;                                                    // 0x0248 (size: 0x8)
    class UAudioComponent* audio3;                                                    // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)
    float Alpha;                                                                      // 0x0260 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_rozitBorg(int32 EntryPoint);
}; // Size: 0x264

#endif
