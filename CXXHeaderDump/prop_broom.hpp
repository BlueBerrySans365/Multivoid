#ifndef UE4SS_SDK_prop_broom_HPP
#define UE4SS_SDK_prop_broom_HPP

class Aprop_broom_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class AmainPlayer_C* Player;                                                      // 0x0370 (size: 0x8)
    float Force;                                                                      // 0x0378 (size: 0x4)
    float Speed;                                                                      // 0x037C (size: 0x4)

    void OnNotifyEnd_7E35D01041C5887545256ABEE348B954(FName NotifyName);
    void OnNotifyBegin_7E35D01041C5887545256ABEE348B954(FName NotifyName);
    void OnInterrupted_7E35D01041C5887545256ABEE348B954(FName NotifyName);
    void OnBlendOut_7E35D01041C5887545256ABEE348B954(FName NotifyName);
    void OnCompleted_7E35D01041C5887545256ABEE348B954(FName NotifyName);
    void OnNotifyEnd_6E812E554132A6D770F1F3A21FF9EAC0(FName NotifyName);
    void OnNotifyBegin_6E812E554132A6D770F1F3A21FF9EAC0(FName NotifyName);
    void OnInterrupted_6E812E554132A6D770F1F3A21FF9EAC0(FName NotifyName);
    void OnBlendOut_6E812E554132A6D770F1F3A21FF9EAC0(FName NotifyName);
    void OnCompleted_6E812E554132A6D770F1F3A21FF9EAC0(FName NotifyName);
    void playerHandRelease_RMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_broom(int32 EntryPoint);
}; // Size: 0x380

#endif
