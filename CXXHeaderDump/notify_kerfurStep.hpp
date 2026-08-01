#ifndef UE4SS_SDK_notify_kerfurStep_HPP
#define UE4SS_SDK_notify_kerfurStep_HPP

class Unotify_kerfurStep_C : public UAnimNotify
{
    FName Bone;                                                                       // 0x0038 (size: 0x8)

    bool Received_Notify(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation);
}; // Size: 0x40

#endif
