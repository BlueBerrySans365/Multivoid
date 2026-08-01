#ifndef UE4SS_SDK_garage_HPP
#define UE4SS_SDK_garage_HPP

class Agarage_C : public AtriggerBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0290 (size: 0x8)
    class UNavModifierComponent* NavModifier;                                         // 0x0298 (size: 0x8)
    class UAudioComponent* s2;                                                        // 0x02A0 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x02A8 (size: 0x8)
    class UBoxComponent* cull;                                                        // 0x02B0 (size: 0x8)
    class UAudioComponent* S;                                                         // 0x02B8 (size: 0x8)
    class UAudioComponent* ac;                                                        // 0x02C0 (size: 0x8)
    class UAudioComponent* loop;                                                      // 0x02C8 (size: 0x8)
    class UBoxComponent* Box;                                                         // 0x02D0 (size: 0x8)
    float move_a_F3BBC7684F1D01D6469E7BA3FE15A1E5;                                    // 0x02D8 (size: 0x4)
    TEnumAsByte<ETimelineDirection::Type> move__Direction_F3BBC7684F1D01D6469E7BA3FE15A1E5; // 0x02DC (size: 0x1)
    class UTimelineComponent* move;                                                   // 0x02E0 (size: 0x8)
    bool Open;                                                                        // 0x02E8 (size: 0x1)
    bool mov;                                                                         // 0x02E9 (size: 0x1)

    void set(float InputPin);
    void ignoreSave_trigger(bool& ignore);
    void loadTriggerData(Fstruct_triggerSave Data, bool& return);
    void getTriggerData(Fstruct_triggerSave& Data);
    void move__FinishedFunc();
    void move__UpdateFunc();
    void OnNotifyEnd_C7785C254EBAB5F644FE8987D191DCBD(FName NotifyName);
    void OnNotifyBegin_C7785C254EBAB5F644FE8987D191DCBD(FName NotifyName);
    void OnInterrupted_C7785C254EBAB5F644FE8987D191DCBD(FName NotifyName);
    void OnBlendOut_C7785C254EBAB5F644FE8987D191DCBD(FName NotifyName);
    void OnCompleted_C7785C254EBAB5F644FE8987D191DCBD(FName NotifyName);
    void OnNotifyEnd_A5D3EFEF417D2332A88BC68333B1D35A(FName NotifyName);
    void OnNotifyBegin_A5D3EFEF417D2332A88BC68333B1D35A(FName NotifyName);
    void OnInterrupted_A5D3EFEF417D2332A88BC68333B1D35A(FName NotifyName);
    void OnBlendOut_A5D3EFEF417D2332A88BC68333B1D35A(FName NotifyName);
    void OnCompleted_A5D3EFEF417D2332A88BC68333B1D35A(FName NotifyName);
    void runTrigger(class AActor* Owner, int32 Index);
    void acivae();
    void settime(bool Open);
    void ExecuteUbergraph_garage(int32 EntryPoint);
}; // Size: 0x2EA

#endif
