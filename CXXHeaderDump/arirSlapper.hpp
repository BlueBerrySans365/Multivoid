#ifndef UE4SS_SDK_arirSlapper_HPP
#define UE4SS_SDK_arirSlapper_HPP

class AarirSlapper_C : public Anpc_arirFollower_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0628 (size: 0x8)
    class AActor* stolenThing;                                                        // 0x0630 (size: 0x8)
    FVector placeReturn;                                                              // 0x0638 (size: 0xC)
    FName stolenThing_key;                                                            // 0x0644 (size: 0x8)

    void processKeys(bool& return);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void Finished();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_arirSlapper(int32 EntryPoint);
}; // Size: 0x64C

#endif
