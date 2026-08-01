#ifndef UE4SS_SDK_prop_saw_HPP
#define UE4SS_SDK_prop_saw_HPP

class Aprop_saw_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_saw(int32 EntryPoint);
}; // Size: 0x370

#endif
