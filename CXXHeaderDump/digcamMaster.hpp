#ifndef UE4SS_SDK_digcamMaster_HPP
#define UE4SS_SDK_digcamMaster_HPP

class AdigcamMaster_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0228 (size: 0x8)
    class USceneCaptureComponent2D* cam;                                              // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    class UStaticMeshComponent* comp;                                                 // 0x0240 (size: 0x8)
    class UMaterialInstanceDynamic* radPP;                                            // 0x0248 (size: 0x8)

    void genTanneul();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_digcamMaster(int32 EntryPoint);
}; // Size: 0x250

#endif
