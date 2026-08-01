#ifndef UE4SS_SDK_triggerTimer_HPP
#define UE4SS_SDK_triggerTimer_HPP

class AtriggerTimer_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    int32 Hour;                                                                       // 0x0298 (size: 0x4)
    bool Run;                                                                         // 0x029C (size: 0x1)
    bool prevState;                                                                   // 0x029D (size: 0x1)
    bool invert;                                                                      // 0x029E (size: 0x1)

    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void newMinute(FIntVector Time);
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_triggerTimer(int32 EntryPoint);
}; // Size: 0x29F

#endif
