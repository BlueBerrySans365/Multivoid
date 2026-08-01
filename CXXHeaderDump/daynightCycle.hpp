#ifndef UE4SS_SDK_daynightCycle_HPP
#define UE4SS_SDK_daynightCycle_HPP

class AdaynightCycle_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UParticleSystemComponent* eff_rain;                                         // 0x0228 (size: 0x8)
    class UArrowComponent* rain_tilt;                                                 // 0x0230 (size: 0x8)
    class UArrowComponent* rain_root;                                                 // 0x0238 (size: 0x8)
    class UDirectionalLightComponent* light_moon;                                     // 0x0240 (size: 0x8)
    class UDirectionalLightComponent* light_sun;                                      // 0x0248 (size: 0x8)
    class UArrowComponent* Arrow2;                                                    // 0x0250 (size: 0x8)
    class UArrowComponent* Arrow1;                                                    // 0x0258 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0260 (size: 0x8)
    class USkyLightComponent* lightning;                                              // 0x0268 (size: 0x8)
    class UExponentialHeightFogComponent* ExponentialHeightFog;                       // 0x0270 (size: 0x8)
    class UAudioComponent* rainSnd;                                                   // 0x0278 (size: 0x8)
    class USkyLightComponent* SkyLight_A;                                             // 0x0280 (size: 0x8)
    class UParticleSystemComponent* eff_shootingStar;                                 // 0x0288 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0290 (size: 0x8)
    float Day;                                                                        // 0x0298 (size: 0x4)
    float Phase;                                                                      // 0x029C (size: 0x4)
    float phase_sin;                                                                  // 0x02A0 (size: 0x4)
    float phase_nsin;                                                                 // 0x02A4 (size: 0x4)
    float phase_normsin;                                                              // 0x02A8 (size: 0x4)
    float MaxTime;                                                                    // 0x02AC (size: 0x4)
    float totalTime;                                                                  // 0x02B0 (size: 0x4)
    float TimeScale;                                                                  // 0x02B4 (size: 0x4)
    class Anewsky_C* skysphere;                                                       // 0x02B8 (size: 0x8)
    FVector sunAxis;                                                                  // 0x02C0 (size: 0xC)
    bool IsActive;                                                                    // 0x02CC (size: 0x1)
    FIntVector timeZ;                                                                 // 0x02D0 (size: 0xC)
    bool SStar_active;                                                                // 0x02DC (size: 0x1)
    float rain;                                                                       // 0x02E0 (size: 0x4)
    bool isRaining;                                                                   // 0x02E4 (size: 0x1)
    bool rainMuted;                                                                   // 0x02E5 (size: 0x1)
    float diff_mult;                                                                  // 0x02E8 (size: 0x4)
    TEnumAsByte<enum_difficulty::Type> diff;                                          // 0x02EC (size: 0x1)
    float sun_height;                                                                 // 0x02F0 (size: 0x4)
    float rainSpeed;                                                                  // 0x02F4 (size: 0x4)
    class UCurveLinearColor* fog_color_A;                                             // 0x02F8 (size: 0x8)
    class UCurveLinearColor* fog_color_B;                                             // 0x0300 (size: 0x8)
    class UCurveLinearColor* amb_color;                                               // 0x0308 (size: 0x8)
    class UCurveLinearColor* sun_color;                                               // 0x0310 (size: 0x8)
    bool loan;                                                                        // 0x0318 (size: 0x1)
    FdaynightCycle_CNewMinute newMinute;                                              // 0x0320 (size: 0x10)
    void newMinute(FIntVector Time);
    float thickFog;                                                                   // 0x0330 (size: 0x4)
    class AweatherFogController_C* fogEventObject;                                    // 0x0338 (size: 0x8)
    bool Realtime;                                                                    // 0x0340 (size: 0x1)
    float dayAdd;                                                                     // 0x0344 (size: 0x4)
    float RT_pastTime;                                                                // 0x0348 (size: 0x4)
    int32 WeekDay;                                                                    // 0x034C (size: 0x4)
    float settingMultiplayer;                                                         // 0x0350 (size: 0x4)
    int32 sleeplessDays;                                                              // 0x0354 (size: 0x4)
    bool eyeSpawned;                                                                  // 0x0358 (size: 0x1)
    class AmainGamemode_C* GameMode;                                                  // 0x0360 (size: 0x8)
    bool NewVar_0;                                                                    // 0x0368 (size: 0x1)
    FdaynightCycle_CNewHour newHour;                                                  // 0x0370 (size: 0x10)
    void newHour(FIntVector Time);
    FdaynightCycle_CNewDay newDay;                                                    // 0x0380 (size: 0x10)
    void newDay(FIntVector Time);
    class AambientLightCurve_C* lightCurve;                                           // 0x0390 (size: 0x8)
    float LC_int_amb;                                                                 // 0x0398 (size: 0x4)
    float LC_int_amb_a;                                                               // 0x039C (size: 0x4)
    float LC_int_amb_b;                                                               // 0x03A0 (size: 0x4)
    class UParticleSystem* rainEffect;                                                // 0x03A8 (size: 0x8)
    bool isSnow;                                                                      // 0x03B0 (size: 0x1)
    float DeltaSeconds;                                                               // 0x03B4 (size: 0x4)
    FLinearColor skyLightColor;                                                       // 0x03B8 (size: 0x10)
    FLinearColor fogColor;                                                            // 0x03C8 (size: 0x10)
    bool enableSunlight;                                                              // 0x03D8 (size: 0x1)
    TArray<int32> Struct Task New Sig Required;                                       // 0x03E0 (size: 0x10)
    FLinearColor sunColor;                                                            // 0x03F0 (size: 0x10)
    float sleepingTimeDilation;                                                       // 0x0400 (size: 0x4)
    float rainStrength;                                                               // 0x0404 (size: 0x4)
    float rainLightningChance;                                                        // 0x0408 (size: 0x4)
    float rainDeactivateChance;                                                       // 0x040C (size: 0x4)
    float cloudsTimer;                                                                // 0x0410 (size: 0x4)
    float cloudsTimerAccumulate;                                                      // 0x0414 (size: 0x4)
    float finalFogDensity;                                                            // 0x0418 (size: 0x4)
    float rainWindSpeed;                                                              // 0x041C (size: 0x4)
    bool rainToggle;                                                                  // 0x0420 (size: 0x1)
    float rainProbability;                                                            // 0x0424 (size: 0x4)
    float fogProbability;                                                             // 0x0428 (size: 0x4)
    bool permanentRain;                                                               // 0x042C (size: 0x1)
    bool permanentFog;                                                                // 0x042D (size: 0x1)
    float seasonalExponent;                                                           // 0x0430 (size: 0x4)
    bool isHalloween;                                                                 // 0x0434 (size: 0x1)
    float timeRotationDelay;                                                          // 0x0438 (size: 0x4)
    FTimerHandle sunRotation_timerHandle;                                             // 0x0440 (size: 0x8)
    bool enableMoonlight;                                                             // 0x0448 (size: 0x1)
    bool enable_fog;                                                                  // 0x0449 (size: 0x1)
    bool enable_superfog;                                                             // 0x044A (size: 0x1)
    bool enable_rain;                                                                 // 0x044B (size: 0x1)
    bool skipDaySet;                                                                  // 0x044C (size: 0x1)

    void intComs_dreamInv(TArray<Fstruct_save>& invv, class AdreamBase_C*& Base);
    void intComs_storeMiddleman(class AActor*& Actor, TArray<class AActor*>& Actors);
    void updateWeekDay();
    void setSunAndMoonRotation();
    void getNamedDaytime(int32& Hour, int32& Minute, int32& Day);
    void getNamedTime(const FIntVector& IntVector, int32& Hour, int32& Minute, int32& Day);
    void func_newHour(FIntVector Time);
    void func_newMinute(FIntVector Time);
    void SetFogDensity();
    void setWindParameters();
    void setRainParameters();
    void causeRain(bool isRaining);
    void setRainProperties(bool isRaining, float rainStrength, float rainLightningChance, float rainDeactivateChance, float rainWindSpeed);
    void createNewTask(Fstruct_taskNew& struct_taskNew);
    void setRainParticles();
    void plugoutLightCurve(bool Reset, class AambientLightCurve_C* Curve);
    void setLCparams();
    void pluginLightCurve(class AambientLightCurve_C* Curve, bool& success);
    void setSkyIntensity();
    void sendDriveBox(class AmainGamemode_C* self2, bool& OutputPin);
    void dailyTaskDriveSize(int32& 0, int32& 1, int32& 2, int32& 3, int32& dishCheckAm);
    void Make Default Order(Fstruct_storeOrder& struct_storeOrder);
    void isDream(bool dream);
    void loadtime(float totalTime, float Day);
    void UserConstructionScript();
    void intComs_signalDeleted();
    void intComs_signalSaved();
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
    void ReceiveTick(float DeltaSeconds);
    void ligh();
    void rainS();
    void fogEvent();
    void Dest(class AActor* DestroyedActor);
    void ReceiveBeginPlay();
    void Rewind();
    void superFogEvent();
    void rainCleanup();
    void rainClean();
    void spawnFog();
    void timerRain();
    void timerLightning();
    void updSeason(TEnumAsByte<enum_seasons::Type> newSeason);
    void intComs_gamemodeBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void intComs_triggerSnow(bool isSnow);
    void timer_changeSunRotation();
    void initializeSunRotation(float Time);
    void permaRain_timer();
    void setSkyColor();
    void ExecuteUbergraph_daynightCycle(int32 EntryPoint);
    void newDay__DelegateSignature(FIntVector Time);
    void newHour__DelegateSignature(FIntVector Time);
    void newMinute__DelegateSignature(FIntVector Time);
}; // Size: 0x44D

#endif
