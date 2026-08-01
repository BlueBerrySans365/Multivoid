#ifndef UE4SS_SDK_trigger_ambientSound_HPP
#define UE4SS_SDK_trigger_ambientSound_HPP

class Atrigger_ambientSound_C : public AtriggerBase_C
{
    class UAudioComponent* Audio;                                                     // 0x0290 (size: 0x8)
    float BaseVolume;                                                                 // 0x0298 (size: 0x4)
    float Volume_0;                                                                   // 0x029C (size: 0x4)
    float Volume_1;                                                                   // 0x02A0 (size: 0x4)
    float Volume_2;                                                                   // 0x02A4 (size: 0x4)
    float volume_3_isBlackHole;                                                       // 0x02A8 (size: 0x4)

    void ignoreSave_trigger(bool& ignore);
    void setVol2(float Volume_2);
    void upd();
}; // Size: 0x2AC

#endif
