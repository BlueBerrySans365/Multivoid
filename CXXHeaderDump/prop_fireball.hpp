#ifndef UE4SS_SDK_prop_fireball_HPP
#define UE4SS_SDK_prop_fireball_HPP

class Aprop_fireball_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_fireball(int32 EntryPoint);
}; // Size: 0x370

#endif
