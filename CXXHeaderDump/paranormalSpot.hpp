#ifndef UE4SS_SDK_paranormalSpot_HPP
#define UE4SS_SDK_paranormalSpot_HPP

class AparanormalSpot_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class Ucomp_paranormal_C* pnormal;                                                // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    float Strength;                                                                   // 0x0240 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_paranormalSpot(int32 EntryPoint);
}; // Size: 0x244

#endif
