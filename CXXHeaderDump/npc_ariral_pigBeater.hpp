#ifndef UE4SS_SDK_npc_ariral_pigBeater_HPP
#define UE4SS_SDK_npc_ariral_pigBeater_HPP

class Anpc_ariral_pigBeater_C : public Anpc_arirFollower_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0628 (size: 0x8)

    void ReceiveBeginPlay();
    void targetDestroyed_d(class AActor* DestroyedActor);
    void ExecuteUbergraph_npc_ariral_pigBeater(int32 EntryPoint);
}; // Size: 0x630

#endif
