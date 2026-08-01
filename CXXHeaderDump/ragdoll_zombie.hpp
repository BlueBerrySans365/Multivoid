#ifndef UE4SS_SDK_ragdoll_zombie_HPP
#define UE4SS_SDK_ragdoll_zombie_HPP

class Aragdoll_zombie_C : public Aragdoll_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0240 (size: 0x8)
    class UAudioComponent* zombie_death_Cue;                                          // 0x0248 (size: 0x8)
    class USkeletalMesh* Mesh;                                                        // 0x0250 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ragdoll_zombie(int32 EntryPoint);
}; // Size: 0x258

#endif
