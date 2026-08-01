#ifndef UE4SS_SDK_erieRise_HPP
#define UE4SS_SDK_erieRise_HPP

class AerieRise_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    class USkeletalMeshComponent* eriePlushRise;                                      // 0x0250 (size: 0x8)

    void OnNotifyEnd_7485A2DE4EC0D8B801273ABF7396B39B(FName NotifyName);
    void OnNotifyBegin_7485A2DE4EC0D8B801273ABF7396B39B(FName NotifyName);
    void OnInterrupted_7485A2DE4EC0D8B801273ABF7396B39B(FName NotifyName);
    void OnBlendOut_7485A2DE4EC0D8B801273ABF7396B39B(FName NotifyName);
    void OnCompleted_7485A2DE4EC0D8B801273ABF7396B39B(FName NotifyName);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_erieRise(int32 EntryPoint);
}; // Size: 0x258

#endif
