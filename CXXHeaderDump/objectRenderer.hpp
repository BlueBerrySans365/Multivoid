#ifndef UE4SS_SDK_objectRenderer_HPP
#define UE4SS_SDK_objectRenderer_HPP

class AobjectRenderer_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* reference;                                            // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Sphere;                                               // 0x0230 (size: 0x8)
    class USceneCaptureComponent2D* signalCam;                                        // 0x0238 (size: 0x8)
    class UBillboardComponent* signalCamRoot;                                         // 0x0240 (size: 0x8)
    class UBillboardComponent* Billboard;                                             // 0x0248 (size: 0x8)
    class UBillboardComponent* cameraAxis;                                            // 0x0250 (size: 0x8)
    class UBillboardComponent* rot;                                                   // 0x0258 (size: 0x8)
    class UBillboardComponent* rot_cam;                                               // 0x0260 (size: 0x8)
    class USceneCaptureComponent2D* camRend;                                          // 0x0268 (size: 0x8)
    class UStaticMeshComponent* Mesh;                                                 // 0x0270 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0278 (size: 0x8)
    FName Type;                                                                       // 0x0280 (size: 0x8)
    Fstruct_spaceObject Data;                                                         // 0x0288 (size: 0x70)
    class UTextureRenderTarget2D* rt;                                                 // 0x02F8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0300 (size: 0x8)
    class USceneCaptureComponent2D* activeCam;                                        // 0x0308 (size: 0x8)
    class AsignalCam_C* sigCam;                                                       // 0x0310 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x0318 (size: 0x8)
    class AsignalObjectActorBase_C* signalObjectActor;                                // 0x0320 (size: 0x8)
    FIntPoint debug_res;                                                              // 0x0328 (size: 0x8)

    void deleteSignalActor();
    void findSignalCam(FName signal, bool& found, class AsignalCam_C*& Camera);
    void setRT();
    void begin();
    void requestImage(class UTextureRenderTarget2D*& TextureTarget, class UTextureRenderTarget2D*& rt);
    void init_objectRenderer(FName RowName);
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_objectRenderer(int32 EntryPoint);
}; // Size: 0x330

#endif
