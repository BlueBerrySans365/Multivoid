#ifndef UE4SS_SDK_portal_HPP
#define UE4SS_SDK_portal_HPP

class Aportal_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USpotLightComponent* light_R;                                               // 0x0228 (size: 0x8)
    class UArrowComponent* back;                                                      // 0x0230 (size: 0x8)
    class USceneCaptureComponent2D* renderCam1;                                       // 0x0238 (size: 0x8)
    class UArrowComponent* Base;                                                      // 0x0240 (size: 0x8)
    class UArrowComponent* rev;                                                       // 0x0248 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0250 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0258 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x0260 (size: 0x8)
    class Aportal_C* Out;                                                             // 0x0268 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0270 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x0278 (size: 0x8)
    FVector meshScale;                                                                // 0x0280 (size: 0xC)
    FVector meshOffset;                                                               // 0x028C (size: 0xC)
    bool canRender;                                                                   // 0x0298 (size: 0x1)
    bool IsActive;                                                                    // 0x0299 (size: 0x1)
    float renderDistance;                                                             // 0x029C (size: 0x4)
    class AmainGamemode_C* GameMode;                                                  // 0x02A0 (size: 0x8)

    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void SetActive(bool IsActive);
    void applyVisual();
    void Render();
    void makeRT();
    void UserConstructionScript();
    void intComs_signalDeleted();
    void intComs_signalSaved();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void intComs_unfoc();
    void intComs_unfocused();
    void intComs_gamemodePreLoad();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodeMakeKeys();
    void intComs_propRenderer_finishProps();
    void intComs_applyColor(FLinearColor Color);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_gamemodePostKeys();
    void intComs_triggerSnow(bool isSnow);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void intComs_gamemodeBeginPlay();
    void FL(class USpotLightComponent* Light, bool Visible);
    void ExecuteUbergraph_portal(int32 EntryPoint);
}; // Size: 0x2A8

#endif
