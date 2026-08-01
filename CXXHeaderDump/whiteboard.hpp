#ifndef UE4SS_SDK_whiteboard_HPP
#define UE4SS_SDK_whiteboard_HPP

class Awhiteboard_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0228 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x0230 (size: 0x8)
    bool Active;                                                                      // 0x0238 (size: 0x1)
    class UCanvas* Canvas;                                                            // 0x0240 (size: 0x8)
    FVector2D canvasSize;                                                             // 0x0248 (size: 0x8)
    FDrawToRenderTargetContext canvasContext;                                         // 0x0250 (size: 0x10)
    FVector2D lastPos;                                                                // 0x0260 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0268 (size: 0x8)
    int32 resScale;                                                                   // 0x0270 (size: 0x4)
    FIntPoint Resolution;                                                             // 0x0274 (size: 0x8)
    class Aprop_wbPen_R_C* activePen;                                                 // 0x0280 (size: 0x8)
    FVector2D pointLoc;                                                               // 0x0288 (size: 0x8)
    FVector2D vec1;                                                                   // 0x0290 (size: 0x8)
    FVector2D vec2;                                                                   // 0x0298 (size: 0x8)
    class UMaterialInstanceDynamic* dynmatPen;                                        // 0x02A0 (size: 0x8)
    FString texString;                                                                // 0x02A8 (size: 0x10)

    void stringToTexture(FString String);
    void TextureToString(FString& String);
    void makeTris(float Size, TArray<FCanvasUVTri>& Array);
    bool lineTrace(FVector& HitLocation);
    FVector2D transformPoint(FVector Location);
    void initDraw(bool Active, class Aprop_wbPen_R_C* pen);
    void makeRT();
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_whiteboard(int32 EntryPoint);
}; // Size: 0x2B8

#endif
