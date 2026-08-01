#ifndef UE4SS_SDK_ufoshieldshader_HPP
#define UE4SS_SDK_ufoshieldshader_HPP

class Aufoshieldshader_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0228 (size: 0x8)
    class UStaticMeshComponent* UFO;                                                  // 0x0230 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0238 (size: 0x8)
    class USceneComponent* Scene;                                                     // 0x0240 (size: 0x8)
    class UArrowComponent* throw;                                                     // 0x0248 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0250 (size: 0x8)
    FVector Timeline_0_a_1285DA7946210AA3F7F1D3A77D4298FF;                            // 0x0258 (size: 0xC)
    float Timeline_0_spd_1285DA7946210AA3F7F1D3A77D4298FF;                            // 0x0264 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_1285DA7946210AA3F7F1D3A77D4298FF; // 0x0268 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0270 (size: 0x8)
    FRotator rot;                                                                     // 0x0278 (size: 0xC)
    FVector Spin;                                                                     // 0x0284 (size: 0xC)
    float spinSpeed;                                                                  // 0x0290 (size: 0x4)

    void SetActive(bool bEnabled);
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void flyAway();
    void ExecuteUbergraph_ufoshieldshader(int32 EntryPoint);
}; // Size: 0x294

#endif
