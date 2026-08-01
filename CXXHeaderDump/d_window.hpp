#ifndef UE4SS_SDK_d_window_HPP
#define UE4SS_SDK_d_window_HPP

class Ad_window_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* newbaseWindow3_sig_002;                               // 0x0228 (size: 0x8)
    class UStaticMeshComponent* newbaseWindow3_sig_003;                               // 0x0230 (size: 0x8)
    class UStaticMeshComponent* newbaseWindow3_sig_004;                               // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0248 (size: 0x8)
    float Ratio;                                                                      // 0x0250 (size: 0x4)
    class UTextureRenderTarget2D* rt_w;                                               // 0x0258 (size: 0x8)
    class UCanvas* canv;                                                              // 0x0260 (size: 0x8)
    FDrawToRenderTargetContext cont;                                                  // 0x0268 (size: 0x10)
    FIntPoint Size;                                                                   // 0x0278 (size: 0x8)
    FVector2D A;                                                                      // 0x0280 (size: 0x8)
    bool cv;                                                                          // 0x0288 (size: 0x1)
    FString Code;                                                                     // 0x0290 (size: 0x10)
    FString picHash;                                                                  // 0x02A0 (size: 0x10)
    TArray<uint8> gotCode;                                                            // 0x02B0 (size: 0x10)
    TArray<uint8> defaultImage;                                                       // 0x02C0 (size: 0x10)
    class UMaterialInstanceDynamic* dynmat_cheap;                                     // 0x02D0 (size: 0x8)
    bool isCheap;                                                                     // 0x02D8 (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void SetMaterial();
    void prepareRT();
    void dirty();
    void setCode(const TArray<uint8>& ByteArray);
    void getCode(TArray<uint8>& ByteArray);
    void endDraw();
    void setDraw();
    void intComs_signalSaved();
    void intComs_gamemodeBeginPlay();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void cleanAtPoint(class Aprop_sponge_C* sponge, FVector Location);
    void intComs_signalDeleted();
    void intComs_unfoc();
    void intComs_unfocused();
    void intComs_gamemodePreLoad();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodeMakeKeys();
    void ReceiveBeginPlay();
    void intComs_triggerSnow(bool isSnow);
    void intComs_gamemodePostKeys();
    void cleanOnHit(class Aprop_sponge_C* InputPin, const FHitResult& Hit);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void cleanPhys(class Aprop_sponge_C* InputPin, const FHitResult& Hit);
    void intComs_applyColor(FLinearColor Color);
    void Canvas();
    void intComs_propRenderer_finishProps();
    void dirtify();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_d_window(int32 EntryPoint);
}; // Size: 0x2D9

#endif
