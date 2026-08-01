#ifndef UE4SS_SDK_gearer_HPP
#define UE4SS_SDK_gearer_HPP

class Agearer_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UAudioComponent* gears_loop_Cue;                                            // 0x0298 (size: 0x8)
    TArray<class UStaticMeshComponent*> Gears;                                        // 0x02A0 (size: 0x10)
    int32 amountt;                                                                    // 0x02B0 (size: 0x4)
    TArray<FVector> locs;                                                             // 0x02B8 (size: 0x10)

    void ignoreSave_trigger(bool& ignore);
    void checkDist(FVector v2, bool& Overlap);
    void gen_gear();
    void runTrigger(class AActor* Owner, int32 Index);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_gearer(int32 EntryPoint);
}; // Size: 0x2C8

#endif
