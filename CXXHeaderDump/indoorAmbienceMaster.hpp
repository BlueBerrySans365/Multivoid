#ifndef UE4SS_SDK_indoorAmbienceMaster_HPP
#define UE4SS_SDK_indoorAmbienceMaster_HPP

class AindoorAmbienceMaster_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UAudioComponent* ambience_night;                                            // 0x0228 (size: 0x8)
    class UAudioComponent* ambience_morning;                                          // 0x0230 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0238 (size: 0x8)
    float Timeline_0_a_14CE39D6419AF144239869A4BED2A64E;                              // 0x0240 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_14CE39D6419AF144239869A4BED2A64E; // 0x0244 (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0248 (size: 0x8)
    TArray<class AindoorAmbienceVolume_C*> volumes;                                   // 0x0250 (size: 0x10)
    FString currentRoom;                                                              // 0x0260 (size: 0x10)
    class AindoorAmbienceVolume_C* currentVolume;                                     // 0x0270 (size: 0x8)
    float Volume;                                                                     // 0x0278 (size: 0x4)
    float indoorVol;                                                                  // 0x027C (size: 0x4)
    bool isOutside;                                                                   // 0x0280 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x0288 (size: 0x8)
    class AindoorAmbienceVolume_C* oldVolume;                                         // 0x0290 (size: 0x8)
    TArray<class AindoorAmbienceVolume_C*> debug;                                     // 0x0298 (size: 0x10)
    bool Activ;                                                                       // 0x02A8 (size: 0x1)
    bool mixPushed;                                                                   // 0x02A9 (size: 0x1)
    bool affectOutdoorVolume;                                                         // 0x02AA (size: 0x1)
    uint8 change;                                                                     // 0x02AB (size: 0x1)
    class AindoorAmbienceVolume_C* firstVolume;                                       // 0x02B0 (size: 0x8)

    void indoorAmbienceMaster_AutoGenFunc(class UObject* ObjectA, class UObject* ObjectB, bool& Result);
    void calc();
    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void ReceiveTick(float DeltaSeconds);
    void Activate(bool Activate);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_indoorAmbienceMaster(int32 EntryPoint);
}; // Size: 0x2B8

#endif
