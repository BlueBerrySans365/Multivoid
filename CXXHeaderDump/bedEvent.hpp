#ifndef UE4SS_SDK_bedEvent_HPP
#define UE4SS_SDK_bedEvent_HPP

class AbedEvent_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)

    void ReceiveBeginPlay();
    void woken();
    void ExecuteUbergraph_bedEvent(int32 EntryPoint);
}; // Size: 0x250

#endif
