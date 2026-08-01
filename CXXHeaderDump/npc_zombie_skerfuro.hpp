#ifndef UE4SS_SDK_npc_zombie_skerfuro_HPP
#define UE4SS_SDK_npc_zombie_skerfuro_HPP

class Anpc_zombie_skerfuro_C : public Anpc_zombie_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x06C8 (size: 0x8)
    TArray<class Anpc_zombie_skele_C*> summons;                                       // 0x06D0 (size: 0x10)

    void setRandomSkin();
    void ReceiveBeginPlay();
    void summonTimer();
    void Dest(class AActor* DestroyedActor);
    void ExecuteUbergraph_npc_zombie_skerfuro(int32 EntryPoint);
}; // Size: 0x6E0

#endif
