#ifndef UE4SS_SDK_deer_ded_HPP
#define UE4SS_SDK_deer_ded_HPP

class Adeer_ded_C : public Adeer_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0510 (size: 0x8)
    float Timeline_0_a_190A342749EEDB8749136080BC0C5017;                              // 0x0518 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> Timeline_0__Direction_190A342749EEDB8749136080BC0C5017; // 0x051C (size: 0x1)
    class UTimelineComponent* Timeline_0;                                             // 0x0520 (size: 0x8)
    bool walkr;                                                                       // 0x0528 (size: 0x1)
    bool dmg;                                                                         // 0x0529 (size: 0x1)

    void Timeline_0__FinishedFunc();
    void Timeline_0__UpdateFunc();
    void OnFail_0986349A439BCCE82A54A0840411644B(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_0986349A439BCCE82A54A0840411644B(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnFail_DCB43D1B433EA780BE18C7BBD401893F(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void OnSuccess_DCB43D1B433EA780BE18C7BBD401893F(TEnumAsByte<EPathFollowingResult::Type> MovementResult);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_deer_ded(int32 EntryPoint);
}; // Size: 0x52A

#endif
