#ifndef UE4SS_SDK_borders_HPP
#define UE4SS_SDK_borders_HPP

class Aborders_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Plane5;                                               // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Plane4;                                               // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Plane3;                                               // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Plane2;                                               // 0x0240 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x0248 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0250 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0258 (size: 0x8)

    void ReceiveDestroyed();
    void ReceiveBeginPlay();
    void CustomEvent_0();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_borders(int32 EntryPoint);
}; // Size: 0x260

#endif
