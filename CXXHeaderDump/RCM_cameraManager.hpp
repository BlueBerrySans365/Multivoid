#ifndef UE4SS_SDK_RCM_cameraManager_HPP
#define UE4SS_SDK_RCM_cameraManager_HPP

class ARCM_cameraManager_C : public ARecordCameraManager
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0460 (size: 0x8)
    class UWidgetComponent* Widget;                                                   // 0x0468 (size: 0x8)
    float optionOpacity_a_CB86203E41018E04D4FDD6A8D2AFC194;                           // 0x0470 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> optionOpacity__Direction_CB86203E41018E04D4FDD6A8D2AFC194; // 0x0474 (size: 0x1)
    class UTimelineComponent* optionOpacity;                                          // 0x0478 (size: 0x8)
    float tl_a_1E31648549AA2DCC1E476783D6878772;                                      // 0x0480 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> tl__Direction_1E31648549AA2DCC1E476783D6878772; // 0x0484 (size: 0x1)
    class UTimelineComponent* tl;                                                     // 0x0488 (size: 0x8)
    class ARCM_camera_C* cam;                                                         // 0x0490 (size: 0x8)
    FTimerHandle Timer;                                                               // 0x0498 (size: 0x8)
    class Aprop_vidcam_C* camProp;                                                    // 0x04A0 (size: 0x8)
    float Time;                                                                       // 0x04A8 (size: 0x4)
    float IsPaused;                                                                   // 0x04AC (size: 0x4)
    float MaxTime;                                                                    // 0x04B0 (size: 0x4)
    class Uui_vcam_C* camUI;                                                          // 0x04B8 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat;                                           // 0x04C0 (size: 0x8)
    FIntPoint res;                                                                    // 0x04C8 (size: 0x8)
    int32 battDiff;                                                                   // 0x04D0 (size: 0x4)
    class Uui_vcamOverlay_C* camOverlay;                                              // 0x04D8 (size: 0x8)
    class AmainGamemode_C* GameMode;                                                  // 0x04E0 (size: 0x8)
    bool canAccess;                                                                   // 0x04E8 (size: 0x1)
    bool pausedByGame;                                                                // 0x04E9 (size: 0x1)
    class UObject* Object;                                                            // 0x04F0 (size: 0x8)
    FString filenameRes;                                                              // 0x04F8 (size: 0x10)
    bool isCam;                                                                       // 0x0508 (size: 0x1)
    bool isInContainer;                                                               // 0x0509 (size: 0x1)
    bool progressed;                                                                  // 0x050A (size: 0x1)
    float batteryPower;                                                               // 0x050C (size: 0x4)
    float DeltaSeconds;                                                               // 0x0510 (size: 0x4)
    bool lowBattery;                                                                  // 0x0514 (size: 0x1)
    FString btxt;                                                                     // 0x0518 (size: 0x10)
    TSubclassOf<class Aprop_batts_C> battery;                                         // 0x0528 (size: 0x8)
    FTransform lerp_A;                                                                // 0x0530 (size: 0x30)
    class USceneComponent* comp;                                                      // 0x0560 (size: 0x8)
    FRecordingSettings settingsCopy;                                                  // 0x0568 (size: 0x48)
    bool optionControl;                                                               // 0x05B0 (size: 0x1)
    class AmainPlayer_C* pl;                                                          // 0x05B8 (size: 0x8)
    bool altPressed;                                                                  // 0x05C0 (size: 0x1)
    bool micPermission;                                                               // 0x05C1 (size: 0x1)
    bool micEnabled;                                                                  // 0x05C2 (size: 0x1)
    bool frustumEnabled;                                                              // 0x05C3 (size: 0x1)
    float q_imageQuality;                                                             // 0x05C4 (size: 0x4)
    int32 q_videoBitrate;                                                             // 0x05C8 (size: 0x4)
    int32 q_audioBitrate;                                                             // 0x05CC (size: 0x4)
    int32 q_audioSampleRate;                                                          // 0x05D0 (size: 0x4)
    int32 q_fps;                                                                      // 0x05D4 (size: 0x4)
    class UMaterialInterface* dynmat_filter;                                          // 0x05D8 (size: 0x8)
    int32 filterId;                                                                   // 0x05E0 (size: 0x4)
    TArray<class UMaterialInterface*> filters;                                        // 0x05E8 (size: 0x10)
    Fstruct_camPPsettings PPsettings;                                                 // 0x05F8 (size: 0x10)
    bool progressed_update;                                                           // 0x0608 (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void setCameraPostProcessSettings();
    void changeFilter(int32 filterId);
    void setFilter();
    void getFilter(class UMaterialInterface*& Material);
    void getCamSettings();
    void updMic();
    void updateSettings();
    void camInInventory(bool& return);
    void attachToCamera(bool isCam);
    bool isHoldingTheCamera();
    void setCamOverlayInfo();
    void setUI_time();
    void updUI();
    void tl__FinishedFunc();
    void tl__UpdateFunc();
    void optionOpacity__FinishedFunc();
    void optionOpacity__UpdateFunc();
    void fin();
    void timerUpdate();
    void beginRecord(class Aprop_vidcam_C* Camera);
    void stopRecord();
    void camDest(class AActor* DestroyedActor);
    void ReceiveTick(float DeltaSeconds);
    void pauseRecord();
    void intComs_stuffUpgraded(class AmainGamemode_C* GameMode);
    void ReceiveBeginPlay();
    void intComs_triggerSnow(bool isSnow);
    void intComs_gamemodeBeginPlay();
    void intComs_signalSaved();
    void intComs_signalDeleted();
    void timerUpdCamOverlay();
    void checkCamera();
    void invUpd();
    void damaged(float Damage, class AActor* Actor);
    void setRecordPaused();
    void setRecordResumed();
    void intComs_gamemodePostKeys();
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void intComs_applyColor(FLinearColor Color);
    void assignVidcam(class Aprop_vidcam_C* camProp);
    void lerpTo(FTransform A, class USceneComponent* AttachComponent);
    void optionMenuOpen(class AmainPlayer_C* Player);
    void usedAlt(bool Pressed);
    void usedRMB(bool Pressed);
    void hideOptionMenu();
    void optionMenuAnim();
    void intComs_propRenderer_finishProps();
    void intComs_gamemodeMakeKeys();
    void intComs_anyKey(FKey Key, bool Pressed);
    void intComs_gamemodePreLoad();
    void intComs_unfocused();
    void intComs_unfoc();
    void ReceiveEndPlay(TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_RCM_cameraManager(int32 EntryPoint);
}; // Size: 0x609

#endif
