#ifndef UE4SS_SDK_indoorAmbienceVolume_HPP
#define UE4SS_SDK_indoorAmbienceVolume_HPP

class AindoorAmbienceVolume_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UStaticMeshComponent* StaticMesh;                                           // 0x0228 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0230 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x0238 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0240 (size: 0x8)
    float a_a_AA1AB4DA4672C2E455F9339C96E3D27B;                                       // 0x0248 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_AA1AB4DA4672C2E455F9339C96E3D27B; // 0x024C (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0250 (size: 0x8)
    FString room;                                                                     // 0x0258 (size: 0x10)
    class USoundBase* Sound;                                                          // 0x0268 (size: 0x8)
    float audio_volume;                                                               // 0x0270 (size: 0x4)
    float audio_pitch;                                                                // 0x0274 (size: 0x4)
    class UReverbEffect* reverb;                                                      // 0x0278 (size: 0x8)
    float reverb_volume;                                                              // 0x0280 (size: 0x4)
    float Priority;                                                                   // 0x0284 (size: 0x4)
    bool isInside;                                                                    // 0x0288 (size: 0x1)
    int32 volume_priority;                                                            // 0x028C (size: 0x4)
    float FadeTime;                                                                   // 0x0290 (size: 0x4)

    void UserConstructionScript();
    void a__FinishedFunc();
    void a__UpdateFunc();
    void Activate(bool Activate, bool isOn);
    void ExecuteUbergraph_indoorAmbienceVolume(int32 EntryPoint);
}; // Size: 0x294

#endif
