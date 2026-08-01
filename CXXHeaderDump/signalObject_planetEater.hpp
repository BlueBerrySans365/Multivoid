#ifndef UE4SS_SDK_signalObject_planetEater_HPP
#define UE4SS_SDK_signalObject_planetEater_HPP

class AsignalObject_planetEater_C : public AsignalObjectActorBase_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0230 (size: 0x8)
    class USkeletalMeshComponent* SkeletalMesh;                                       // 0x0238 (size: 0x8)
    bool playingAnimation;                                                            // 0x0240 (size: 0x1)

    void getAnimationName(FName& OutputPin);
    void OnNotifyEnd_6679B5754A987B5E9F8EFEA07F19D5DD(FName NotifyName);
    void OnNotifyBegin_6679B5754A987B5E9F8EFEA07F19D5DD(FName NotifyName);
    void OnInterrupted_6679B5754A987B5E9F8EFEA07F19D5DD(FName NotifyName);
    void OnBlendOut_6679B5754A987B5E9F8EFEA07F19D5DD(FName NotifyName);
    void OnCompleted_6679B5754A987B5E9F8EFEA07F19D5DD(FName NotifyName);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_signalObject_planetEater(int32 EntryPoint);
}; // Size: 0x241

#endif
