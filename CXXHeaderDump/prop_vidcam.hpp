#ifndef UE4SS_SDK_prop_vidcam_HPP
#define UE4SS_SDK_prop_vidcam_HPP

class Aprop_vidcam_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UArrowComponent* CamLoc;                                                    // 0x0370 (size: 0x8)
    class ARCM_cameraManager_C* recordManager;                                        // 0x0378 (size: 0x8)
    float battery;                                                                    // 0x0380 (size: 0x4)
    class Aprop_vidcamTripod_C* onTripod;                                             // 0x0388 (size: 0x8)
    int32 quality;                                                                    // 0x0390 (size: 0x4)
    float imageQuality;                                                               // 0x0394 (size: 0x4)
    int32 videoBitrate;                                                               // 0x0398 (size: 0x4)
    int32 audioBitrate;                                                               // 0x039C (size: 0x4)
    int32 AudioSampleRate;                                                            // 0x03A0 (size: 0x4)
    int32 FPS;                                                                        // 0x03A4 (size: 0x4)
    float microwaved;                                                                 // 0x03A8 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void recharge(class Aprop_batts_C* battery, class AmainPlayer_C* Player);
    void isInInventory(bool& return);
    void updUI();
    bool hollding();
    void insertBattery(class AmainPlayer_C* Player, class Aprop_batts_C* battery);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void record();
    void tryPause();
    void ReceiveBeginPlay();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHoldPost(class AmainPlayer_C* Player);
    void microwaveElec();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_vidcam(int32 EntryPoint);
}; // Size: 0x3AC

#endif
