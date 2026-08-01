#ifndef UE4SS_SDK_vpcmg_controller_HPP
#define UE4SS_SDK_vpcmg_controller_HPP

class Avpcmg_controller_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0228 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    TArray<FString> KeyboardKeysNames;                                                // 0x0240 (size: 0x10)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0250 (size: 0x8)
    class UTexture2D* tex;                                                            // 0x0258 (size: 0x8)
    bool loading_image;                                                               // 0x0260 (size: 0x1)
    class UTextureRenderTarget2D* rt;                                                 // 0x0268 (size: 0x8)
    class UTexture2D* loadTex;                                                        // 0x0270 (size: 0x8)
    FVector2D A;                                                                      // 0x0278 (size: 0x8)
    TMap<class FKey, class FName> Key;                                                // 0x0280 (size: 0x50)
    FVector2D mouseDelta;                                                             // 0x02D0 (size: 0x8)
    bool captureInputs;                                                               // 0x02D8 (size: 0x1)
    FString pathKeyboard;                                                             // 0x02E0 (size: 0x10)
    FString pathController;                                                           // 0x02F0 (size: 0x10)
    FString pathImage;                                                                // 0x0300 (size: 0x10)
    FString gameName;                                                                 // 0x0310 (size: 0x10)

    void setGame(FString Name);
    void Write(bool bEnabled);
    void OnFail_4AB6F0714952CBB4D8199E89AB1CB932(const FString Filename, const TArray<uint8>& bytes, const int32 errorCode, const FString errorMessage);
    void OnSuccess_4AB6F0714952CBB4D8199E89AB1CB932(const FString Filename, const TArray<uint8>& bytes, const int32 errorCode, const FString errorMessage);
    void ReceiveBeginPlay();
    void AnyKey(FKey Key, bool Pressed);
    void ReceiveTick(float DeltaSeconds);
    void XY(FVector2D mouseXY);
    void ExecuteUbergraph_vpcmg_controller(int32 EntryPoint);
}; // Size: 0x320

#endif
