#ifndef UE4SS_SDK_prop_micRepeater_HPP
#define UE4SS_SDK_prop_micRepeater_HPP

class Aprop_micRepeater_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioCaptureComponent* audioStream;                                        // 0x0370 (size: 0x8)
    class UStaticMeshComponent* Plane1;                                               // 0x0378 (size: 0x8)
    class USceneComponent* pivotVolume;                                               // 0x0380 (size: 0x8)
    class USceneComponent* vol;                                                       // 0x0388 (size: 0x8)
    class UStaticMeshComponent* Plane;                                                // 0x0390 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0398 (size: 0x8)
    bool recording;                                                                   // 0x03A0 (size: 0x1)
    class UCapturableSoundWave* recorded;                                             // 0x03A8 (size: 0x8)
    int32 InputDevice;                                                                // 0x03B0 (size: 0x4)
    FVector2D frequencyRange;                                                         // 0x03B4 (size: 0x8)
    TArray<float> FrequenciesToAnalyze;                                               // 0x03C0 (size: 0x10)
    int32 frequencyAmount;                                                            // 0x03D0 (size: 0x4)
    TArray<float> analyzed;                                                           // 0x03D8 (size: 0x10)
    class USoundSubmix* Submix;                                                       // 0x03E8 (size: 0x8)
    class UAudioComponent* playingAudio;                                              // 0x03F0 (size: 0x8)
    float analyseResult;                                                              // 0x03F8 (size: 0x4)
    float peakVolume;                                                                 // 0x03FC (size: 0x4)
    class UMaterialInstanceDynamic* dynmat_face;                                      // 0x0400 (size: 0x8)
    bool isStreaming;                                                                 // 0x0408 (size: 0x1)
    bool isPlayingRecorder;                                                           // 0x0409 (size: 0x1)
    FString activeDevice;                                                             // 0x0410 (size: 0x10)

    void getAudioDeviceID();
    void startStreaming();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void setFace(float Volume);
    void makeFrequencyAnalysis();
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getActionOptions(class AmainPlayer_C* Player, class UPrimitiveComponent* Component, class AActor* Actor, uint8 numberIn, TArray<FString>& Options, TArray<TEnumAsByte<enum_interactionActions::Type>>& options_enum, TArray<FText>& optionsNamesOverlay, uint8& Number, float& lookAtCenter);
    void UserConstructionScript();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void actionOptionIndex(class AmainPlayer_C* Player, FHitResult Hit, TEnumAsByte<enum_interactionActions::Type> Action, class UPrimitiveComponent* lookAtComponent);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void BndEvt__prop_micRepeater_Audio_K2Node_ComponentBoundEvent_0_OnAudioFinished__DelegateSignature();
    void BndEvt__prop_micRepeater_audioStream_K2Node_ComponentBoundEvent_1_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
    void BndEvt__prop_micRepeater_audioStream_K2Node_ComponentBoundEvent_2_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component);
    void BndEvt__prop_micRepeater_Audio_K2Node_ComponentBoundEvent_3_ActorComponentActivatedSignature__DelegateSignature(class UActorComponent* Component, bool bReset);
    void BndEvt__prop_micRepeater_Audio_K2Node_ComponentBoundEvent_4_ActorComponentDeactivateSignature__DelegateSignature(class UActorComponent* Component);
    void ExecuteUbergraph_prop_micRepeater(int32 EntryPoint);
}; // Size: 0x420

#endif
