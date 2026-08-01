#ifndef UE4SS_SDK_NewBlueprint41_HPP
#define UE4SS_SDK_NewBlueprint41_HPP

class ANewBlueprint41_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Render;                                               // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Body;                                                 // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    bool vis;                                                                         // 0x0240 (size: 0x1)
    bool isVis;                                                                       // 0x0241 (size: 0x1)
    bool seen;                                                                        // 0x0242 (size: 0x1)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0248 (size: 0x8)
    class UTextureRenderTarget2D* tex;                                                // 0x0250 (size: 0x8)
    class UTexture* T;                                                                // 0x0258 (size: 0x8)
    FString txt;                                                                      // 0x0260 (size: 0x10)
    FString NewVar_0;                                                                 // 0x0270 (size: 0x10)

    void gen(FString A1);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_NewBlueprint41(int32 EntryPoint);
}; // Size: 0x280

#endif
