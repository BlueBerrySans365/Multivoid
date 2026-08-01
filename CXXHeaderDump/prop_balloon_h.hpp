#ifndef UE4SS_SDK_prop_balloon_h_HPP
#define UE4SS_SDK_prop_balloon_h_HPP

class Aprop_balloon_h_C : public Aprop_balloon_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A0 (size: 0x8)

    void Init();
    void broken_fire();
    void broken();
    void ExecuteUbergraph_prop_balloon_h(int32 EntryPoint);
}; // Size: 0x3A8

#endif
