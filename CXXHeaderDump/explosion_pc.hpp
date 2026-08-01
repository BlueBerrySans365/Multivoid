#ifndef UE4SS_SDK_explosion_pc_HPP
#define UE4SS_SDK_explosion_pc_HPP

class Aexplosion_pc_C : public Aexplosion_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0328 (size: 0x8)
    class Uui_laptop_C* PC;                                                           // 0x0330 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_explosion_pc(int32 EntryPoint);
}; // Size: 0x338

#endif
