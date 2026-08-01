#ifndef UE4SS_SDK_trigger_sound_DUPL_1_HPP
#define UE4SS_SDK_trigger_sound_DUPL_1_HPP

class Atrigger_sound_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UAudioComponent* Audio;                                                     // 0x0298 (size: 0x8)
    bool SetSound;                                                                    // 0x02A0 (size: 0x1)
    Fstruct_sound sound_data;                                                         // 0x02A8 (size: 0x18)

    void gatherDataFromKeyT(bool& gather);
    void makeSoundData();
    void setSoundData();
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void UserConstructionScript();
    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_trigger_sound(int32 EntryPoint);
}; // Size: 0x2C0

#endif
