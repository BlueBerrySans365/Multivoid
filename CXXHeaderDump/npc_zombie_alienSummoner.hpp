#ifndef UE4SS_SDK_npc_zombie_alienSummoner_HPP
#define UE4SS_SDK_npc_zombie_alienSummoner_HPP

class Anpc_zombie_alienSummoner_C : public Anpc_zombie_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06C8 (size: 0x8)

    void setRandomSkin();
    void OnLanded(const FHitResult& Hit);
    void ReceiveBeginPlay();
    void ReceiveDestroyed();
    void ExecuteUbergraph_npc_zombie_alienSummoner(int32 EntryPoint);
}; // Size: 0x6D0

#endif
