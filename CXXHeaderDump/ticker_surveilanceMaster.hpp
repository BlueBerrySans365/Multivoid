#ifndef UE4SS_SDK_ticker_surveilanceMaster_HPP
#define UE4SS_SDK_ticker_surveilanceMaster_HPP

class Aticker_surveilanceMaster_C : public Aticker_base_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0238 (size: 0x8)
    int32 tvAmount;                                                                   // 0x0240 (size: 0x4)
    TArray<class Aprop_tv2_C*> activeSecurityTvs;                                     // 0x0248 (size: 0x10)
    int32 currentIndex;                                                               // 0x0258 (size: 0x4)
    TArray<float> securityTvsRates;                                                   // 0x0260 (size: 0x10)
    float DeltaSeconds;                                                               // 0x0270 (size: 0x4)

    void ReceiveTick(float DeltaSeconds);
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_ticker_surveilanceMaster(int32 EntryPoint);
}; // Size: 0x274

#endif
