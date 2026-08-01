#ifndef UE4SS_SDK_comp_madnessCombatOnly_HPP
#define UE4SS_SDK_comp_madnessCombatOnly_HPP

class Ucomp_madnessCombatOnly_C : public UActorComponent
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x00B0 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_comp_madnessCombatOnly(int32 EntryPoint);
}; // Size: 0xB8

#endif
