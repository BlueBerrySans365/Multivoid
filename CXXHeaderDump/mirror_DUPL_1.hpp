#ifndef UE4SS_SDK_mirror_DUPL_1_HPP
#define UE4SS_SDK_mirror_DUPL_1_HPP

class Amirror_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0228 (size: 0x8)
    class UArrowComponent* normal_nega;                                               // 0x0230 (size: 0x8)
    class UArrowComponent* Normal;                                                    // 0x0238 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0240 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0248 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0250 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x0258 (size: 0x8)
    bool Hidden;                                                                      // 0x0260 (size: 0x1)

    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    bool Parent();
    void res();
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
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_gamemodeBeginPlay();
    void intComs_signalSaved();
    void intComs_signalDeleted();
    void ExecuteUbergraph_mirror(int32 EntryPoint);
}; // Size: 0x261

#endif
