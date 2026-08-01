#ifndef UE4SS_SDK_ragdoll_zombie_erie_HPP
#define UE4SS_SDK_ragdoll_zombie_erie_HPP

class Aragdoll_zombie_erie_C : public Aragdoll_zombie_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0258 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_ragdoll_zombie_erie(int32 EntryPoint);
}; // Size: 0x260

#endif
