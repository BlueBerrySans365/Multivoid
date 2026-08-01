#ifndef UE4SS_SDK_prop_moabRocket_HPP
#define UE4SS_SDK_prop_moabRocket_HPP

class Aprop_moabRocket_C : public Aprop_rocket_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E0 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x03E8 (size: 0x8)
    bool lolMoment;                                                                   // 0x03F0 (size: 0x1)

    void Zoom(bool zoomIn);
    void makeMoab(int32 Width, int32 Height, class USceneCaptureComponent2D*& Camera, class UTextureRenderTarget2D*& rt);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_moabRocket(int32 EntryPoint);
}; // Size: 0x3F1

#endif
