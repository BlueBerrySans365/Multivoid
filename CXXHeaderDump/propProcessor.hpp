#ifndef UE4SS_SDK_propProcessor_HPP
#define UE4SS_SDK_propProcessor_HPP

class ApropProcessor_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* vol;                                                  // 0x0228 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0230 (size: 0x8)
    class USceneCaptureComponent2D* SceneCaptureComponent2D;                          // 0x0238 (size: 0x8)
    class UBillboardComponent* camRot;                                                // 0x0240 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    TArray<FName> propsNames;                                                         // 0x0258 (size: 0x10)
    TArray<class UTextureRenderTarget2D*> RTs;                                        // 0x0268 (size: 0x10)
    TArray<FName> Names;                                                              // 0x0278 (size: 0x10)
    TArray<class UTexture2D*> toTex;                                                  // 0x0288 (size: 0x10)
    class Uui_spawnmenu_C* spawnmenu;                                                 // 0x0298 (size: 0x8)
    class URuntimeAudioImporterLibrary* audioImport;                                  // 0x02A0 (size: 0x8)
    TArray<FString> audiosToImport;                                                   // 0x02A8 (size: 0x10)
    FString currAudio;                                                                // 0x02B8 (size: 0x10)
    TArray<FString> audiosNames;                                                      // 0x02C8 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x02D8 (size: 0x8)
    int32 nrtLoadId;                                                                  // 0x02E0 (size: 0x4)
    class UObject* urrSoft;                                                           // 0x02E8 (size: 0x8)
    int32 fins;                                                                       // 0x02F0 (size: 0x4)
    TArray<FName> objectsNames;                                                       // 0x02F8 (size: 0x10)
    TArray<FName> objNames;                                                           // 0x0308 (size: 0x10)
    TArray<class UTextureRenderTarget2D*> objRTs;                                     // 0x0318 (size: 0x10)
    TArray<class UTexture2D*> objToTex;                                               // 0x0328 (size: 0x10)
    TArray<class UStaticMesh*> objs;                                                  // 0x0338 (size: 0x10)
    bool ignoreVolumes;                                                               // 0x0348 (size: 0x1)
    TArray<FName> objectDispNames;                                                    // 0x0350 (size: 0x10)
    TArray<FText> objectDispNames_d;                                                  // 0x0360 (size: 0x10)
    FpropProcessor_CFinished Finished;                                                // 0x0370 (size: 0x10)
    void finished();
    TArray<float> Mass;                                                               // 0x0380 (size: 0x10)
    bool multVolumes;                                                                 // 0x0390 (size: 0x1)
    int32 propsNames_len;                                                             // 0x0394 (size: 0x4)
    int32 objectsNames_len;                                                           // 0x0398 (size: 0x4)
    TArray<Fstruct_prop> propData;                                                    // 0x03A0 (size: 0x10)
    class AGameStateBase* GameState;                                                  // 0x03B0 (size: 0x8)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void makeLoadingBar(FString Prefix, float process, FString Suffix, int32 barSize, FString& Text);
    void Get Item Icon Name(const FName& ItemToFind, class UTexture2D*& Icon, FText& Name);
    void setObjNames();
    void setPropNames();
    void genDispNames();
    void nameToDisplayName(FString Name, FText& DisplayName);
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
    void ReceiveBeginPlay();
    void importAudio();
    void Finish();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_propProcessor(int32 EntryPoint);
    void finished__DelegateSignature();
}; // Size: 0x3B8

#endif
