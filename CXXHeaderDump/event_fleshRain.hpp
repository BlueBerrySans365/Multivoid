#ifndef UE4SS_SDK_event_fleshRain_HPP
#define UE4SS_SDK_event_fleshRain_HPP

class Aevent_fleshRain_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    int32 I;                                                                          // 0x0250 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_event_fleshRain(int32 EntryPoint);
}; // Size: 0x254

#endif
