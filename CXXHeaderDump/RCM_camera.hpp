#ifndef UE4SS_SDK_RCM_camera_HPP
#define UE4SS_SDK_RCM_camera_HPP

class ARCM_camera_C : public ACamera2D
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class UStaticMeshComponent* frustum;                                              // 0x0248 (size: 0x8)
    class UParticleSystemComponent* eff_light;                                        // 0x0250 (size: 0x8)
    class ARCM_cameraManager_C* Manager;                                              // 0x0258 (size: 0x8)
    float FOV;                                                                        // 0x0260 (size: 0x4)

    float vert();
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_RCM_camera(int32 EntryPoint);
}; // Size: 0x264

#endif
