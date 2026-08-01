#ifndef UE4SS_SDK_birber_HPP
#define UE4SS_SDK_birber_HPP

class Abirber_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0228 (size: 0x8)
    bool noBirb;                                                                      // 0x0230 (size: 0x1)
    int32 silencer;                                                                   // 0x0234 (size: 0x4)
    int32 Deactivate;                                                                 // 0x0238 (size: 0x4)
    class AmainGamemode_C* GameMode;                                                  // 0x0240 (size: 0x8)
    class USoundBase* birdSound;                                                      // 0x0248 (size: 0x8)

    void playBird(class USoundBase* Sound);
    void morningBird(class USoundBase* Sound, bool ignoreDaytime, bool ignoreArirDay, bool ignoreIndoors, bool ignoreSunHeight, bool ignoreRain, bool ignoreActivations, bool ignoreNoBirds, bool ignoreBounds, bool ignoreSilencers, bool affectedBySkyVisibility);
    void ReceiveBeginPlay();
    void playBirds_morning();
    void playBirds_snow();
    void winterWind();
    void nightBugs();
    void updSeason(TEnumAsByte<enum_seasons::Type> newSeason);
    void ExecuteUbergraph_birber(int32 EntryPoint);
}; // Size: 0x250

#endif
