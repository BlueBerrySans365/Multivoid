#ifndef UE4SS_SDK_npc_zombie_corpse_HPP
#define UE4SS_SDK_npc_zombie_corpse_HPP

class Anpc_zombie_corpse_C : public Anpc_zombie_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06C8 (size: 0x8)

    void setRandomSkin();
    void died();
    void ExecuteUbergraph_npc_zombie_corpse(int32 EntryPoint);
}; // Size: 0x6D0

#endif
