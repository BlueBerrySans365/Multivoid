#ifndef UE4SS_SDK_event_arirTreehouseSleep_HPP
#define UE4SS_SDK_event_arirTreehouseSleep_HPP

class Aevent_arirTreehouseSleep_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)

    void ReceiveBeginPlay();
    void wokeup();
    void ExecuteUbergraph_event_arirTreehouseSleep(int32 EntryPoint);
}; // Size: 0x250

#endif
