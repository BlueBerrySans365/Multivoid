#ifndef UE4SS_SDK_kerfusFace_HPP
#define UE4SS_SDK_kerfusFace_HPP

class AkerfusFace_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0228 (size: 0x8)
    class USkeletalMeshComponent* face;                                               // 0x0230 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x0248 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0250 (size: 0x8)
    int32 Type;                                                                       // 0x0258 (size: 0x4)
    class UMaterialInstanceDynamic* dynmatStare;                                      // 0x0260 (size: 0x8)

    void gen(class UMaterialInstanceDynamic*& dynmat);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_kerfusFace(int32 EntryPoint);
}; // Size: 0x268

#endif
