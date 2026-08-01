#ifndef UE4SS_SDK_tentacleBallsFollower_HPP
#define UE4SS_SDK_tentacleBallsFollower_HPP

class AtentacleBallsFollower_C : public AActor
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0220 (size: 0x8)
    class UBillboardComponent* targetForw;                                            // 0x0228 (size: 0x8)
    class UArrowComponent* Arrow;                                                     // 0x0230 (size: 0x8)
    class UBillboardComponent* resume;                                                // 0x0238 (size: 0x8)
    class UBillboardComponent* follow;                                                // 0x0240 (size: 0x8)
    class USplineComponent* Spline;                                                   // 0x0248 (size: 0x8)
    class USceneComponent* DefaultSceneRoot;                                          // 0x0250 (size: 0x8)
    TArray<class AtentacleBall_C*> balls;                                             // 0x0258 (size: 0x10)
    FVector Point;                                                                    // 0x0268 (size: 0xC)
    FVector Loc;                                                                      // 0x0274 (size: 0xC)
    FVector lastPoint;                                                                // 0x0280 (size: 0xC)
    FVector dir;                                                                      // 0x028C (size: 0xC)
    bool passed;                                                                      // 0x0298 (size: 0x1)
    float resumeEvent;                                                                // 0x029C (size: 0x4)
    bool allowFollow;                                                                 // 0x02A0 (size: 0x1)

    void gatherDataFromKeyT(bool& gather);
    void getTriggerData(Fstruct_triggerSave& Data);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void ignoreSave_trigger(bool& ignore);
    void UserConstructionScript();
    void set_ignoreSave_trigger(bool NewParam);
    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void setActiveTrigger(class AActor* sentFrom, bool Active);
    void ReceiveBeginPlay();
    void ReceiveTick(float DeltaSeconds);
    void Finish();
    void runTrigger(class AActor* Owner, int32 Index);
    void ExecuteUbergraph_tentacleBallsFollower(int32 EntryPoint);
}; // Size: 0x2A1

#endif
