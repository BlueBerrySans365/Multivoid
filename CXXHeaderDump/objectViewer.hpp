#ifndef UE4SS_SDK_objectViewer_HPP
#define UE4SS_SDK_objectViewer_HPP

class AobjectViewer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0228 (size: 0x8)
    class UBillboardComponent* captureHandle;                                         // 0x0230 (size: 0x8)
    class UBillboardComponent* captureRoot;                                           // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x0248 (size: 0x8)
    class AActor* capturingACtor;                                                     // 0x0250 (size: 0x8)
    class Uui_objectUpgrades_C* Widget;                                               // 0x0258 (size: 0x8)
    float Angle;                                                                      // 0x0260 (size: 0x4)

    void genList();
    void Stop();
    void assign(class AActor* Actor, class AmainPlayer_C* Player, class Uui_objectUpgrades_C*& Widget, class UTextureRenderTarget2D*& rt, class AobjectViewer_C*& Viewer);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_objectViewer(int32 EntryPoint);
}; // Size: 0x264

#endif
