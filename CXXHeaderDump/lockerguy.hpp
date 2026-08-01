#ifndef UE4SS_SDK_lockerguy_HPP
#define UE4SS_SDK_lockerguy_HPP

class Alockerguy_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0230 (size: 0x8)
    float a_a_6321EF9A40690BDDB6A65B9164CC837A;                                       // 0x0238 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_6321EF9A40690BDDB6A65B9164CC837A; // 0x023C (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0240 (size: 0x8)

    void a__FinishedFunc();
    void a__UpdateFunc();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_lockerguy(int32 EntryPoint);
}; // Size: 0x248

#endif
