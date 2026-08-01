#ifndef UE4SS_SDK_npc_goreSlither_cheese_HPP
#define UE4SS_SDK_npc_goreSlither_cheese_HPP

class Anpc_goreSlither_cheese_C : public Anpc_goreSlither_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05E0 (size: 0x8)

    void SetMesh();
    void preDied();
    void ExecuteUbergraph_npc_goreSlither_cheese(int32 EntryPoint);
}; // Size: 0x5E8

#endif
