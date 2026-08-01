#ifndef UE4SS_SDK_prop_timeclock_HPP
#define UE4SS_SDK_prop_timeclock_HPP

class Aprop_timeclock_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UAudioComponent* timeFast;                                                  // 0x0370 (size: 0x8)
    float a_a_3422C41A480536959E6D7EA61A6C7686;                                       // 0x0378 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> a__Direction_3422C41A480536959E6D7EA61A6C7686; // 0x037C (size: 0x1)
    class UTimelineComponent* A;                                                      // 0x0380 (size: 0x8)

    void a__FinishedFunc();
    void a__UpdateFunc();
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_timeclock(int32 EntryPoint);
}; // Size: 0x388

#endif
