#ifndef UE4SS_SDK_prop_umbrella_HPP
#define UE4SS_SDK_prop_umbrella_HPP

class Aprop_umbrella_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0370 (size: 0x8)
    bool Active;                                                                      // 0x0378 (size: 0x1)
    bool Anim;                                                                        // 0x0379 (size: 0x1)

    void OnNotifyEnd_8FD53D694FAA874324AF05B1C3990EB3(FName NotifyName);
    void OnNotifyBegin_8FD53D694FAA874324AF05B1C3990EB3(FName NotifyName);
    void OnInterrupted_8FD53D694FAA874324AF05B1C3990EB3(FName NotifyName);
    void OnBlendOut_8FD53D694FAA874324AF05B1C3990EB3(FName NotifyName);
    void OnCompleted_8FD53D694FAA874324AF05B1C3990EB3(FName NotifyName);
    void ReceiveTick(float DeltaSeconds);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_umbrella(int32 EntryPoint);
}; // Size: 0x37A

#endif
