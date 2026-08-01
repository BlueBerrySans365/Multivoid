#ifndef UE4SS_SDK_prop_tv2_HPP
#define UE4SS_SDK_prop_tv2_HPP

class Aprop_tv2_C : public Aprop_corded_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class UArrowComponent* Forward;                                                   // 0x03B0 (size: 0x8)
    class USphereComponent* renderRadius;                                             // 0x03B8 (size: 0x8)
    class UMediaSoundComponent* MediaSound;                                           // 0x03C0 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x03C8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x03D0 (size: 0x8)
    class UTextureRenderTarget2D* rt;                                                 // 0x03D8 (size: 0x8)
    bool playvid;                                                                     // 0x03E0 (size: 0x1)
    class Uui_videobrowser_C* W;                                                      // 0x03E8 (size: 0x8)
    class UMediaPlayer* MediaPlayer;                                                  // 0x03F0 (size: 0x8)
    FString URL;                                                                      // 0x03F8 (size: 0x10)
    class UMediaTexture* MediaTexture;                                                // 0x0408 (size: 0x8)
    class Uui_tvInterface_C* Interface;                                               // 0x0410 (size: 0x8)
    Fstruct_tv Data;                                                                  // 0x0418 (size: 0x28)
    TEnumAsByte<enum_playlist::Type> PlayMode;                                        // 0x0440 (size: 0x1)
    int32 playIndex;                                                                  // 0x0444 (size: 0x4)
    bool pausePlayer;                                                                 // 0x0448 (size: 0x1)
    TArray<int32> Indexes;                                                            // 0x0450 (size: 0x10)
    bool Picture;                                                                     // 0x0460 (size: 0x1)
    bool powered;                                                                     // 0x0461 (size: 0x1)
    int32 screenMaterialIndex;                                                        // 0x0464 (size: 0x4)
    class UPrimitiveComponent* targetMesh;                                            // 0x0468 (size: 0x8)
    int32 AudioVolume;                                                                // 0x0470 (size: 0x4)
    float Brightness;                                                                 // 0x0474 (size: 0x4)
    class UMaterialInterface* tvScreenMaterial;                                       // 0x0478 (size: 0x8)
    bool isSecurity;                                                                  // 0x0480 (size: 0x1)
    class UMaterialInstanceDynamic* dynmat_security;                                  // 0x0488 (size: 0x8)
    class Aprop_camera_bad_C* bindedCamera;                                           // 0x0490 (size: 0x8)
    class UTextureRenderTarget2D* securityRT;                                         // 0x0498 (size: 0x8)
    int32 Channel;                                                                    // 0x04A0 (size: 0x4)
    bool renderCam;                                                                   // 0x04A4 (size: 0x1)
    int32 squeeze_X;                                                                  // 0x04A8 (size: 0x4)
    int32 squeeze_Y;                                                                  // 0x04AC (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void updConnected();
    void removeChannel(int32 Index);
    void useChannel(int32 Channel);
    void bindCamera(FName Name, bool& validCamera);
    void setAsSecurity(bool isSecurity);
    void SetMaterial();
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void gatherDataFromKeyT(bool& gather);
    void updProperties();
    void upd();
    void matChanged();
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void opened(FString OpenedUrl);
    void openLink(Fstruct_tv Data, bool pausePlayer);
    void fin();
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void BndEvt__prop_tv2_renderRadius_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
    void BndEvt__prop_tv2_renderRadius_K2Node_ComponentBoundEvent_1_ComponentEndOverlapSignature__DelegateSignature(class UPrimitiveComponent* OverlappedComponent, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
    void ExecuteUbergraph_prop_tv2(int32 EntryPoint);
}; // Size: 0x4B0

#endif
