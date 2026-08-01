#ifndef UE4SS_SDK_prop_logcut_HPP
#define UE4SS_SDK_prop_logcut_HPP

class Aprop_logcut_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void broken();
    void broken_fire();
    void ExecuteUbergraph_prop_logcut(int32 EntryPoint);
}; // Size: 0x370

#endif
