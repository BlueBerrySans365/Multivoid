#ifndef UE4SS_SDK_cameraFlash_HPP
#define UE4SS_SDK_cameraFlash_HPP

class AcameraFlash_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0228 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_cameraFlash(int32 EntryPoint);
}; // Size: 0x230

#endif
