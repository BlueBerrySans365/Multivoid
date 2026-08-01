#ifndef UE4SS_SDK_triggerBase_skeleChair_HPP
#define UE4SS_SDK_triggerBase_skeleChair_HPP

class AtriggerBase_skeleChair_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class Aprop_seat_C* seat;                                                         // 0x0298 (size: 0x8)

    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_triggerBase_skeleChair(int32 EntryPoint);
}; // Size: 0x2A0

#endif
