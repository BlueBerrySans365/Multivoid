#ifndef UE4SS_SDK_NewBlueprint5_HPP
#define UE4SS_SDK_NewBlueprint5_HPP

class ANewBlueprint5_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0228 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0230 (size: 0x8)
    class UAudioComponent* loop;                                                      // 0x0238 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0240 (size: 0x8)
    bool NewVar_0;                                                                    // 0x0248 (size: 0x1)
    float NewVar_1;                                                                   // 0x024C (size: 0x4)
    FVector2D NewVar_2;                                                               // 0x0250 (size: 0x8)
    bool NewVar_3;                                                                    // 0x0258 (size: 0x1)
    float NewVar_4;                                                                   // 0x025C (size: 0x4)
    class UMaterialInstanceDynamic* NewVar_5;                                         // 0x0260 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x0268 (size: 0x8)
    class Uui_figura_C* UI;                                                           // 0x0270 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x0278 (size: 0x8)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void createRT();
    void intComs_signalDeleted();
    void intComs_signalSaved();
    void intComs_gamemodeBeginPlay();
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
    void ExecuteUbergraph_NewBlueprint5(int32 EntryPoint);
}; // Size: 0x280

#endif
