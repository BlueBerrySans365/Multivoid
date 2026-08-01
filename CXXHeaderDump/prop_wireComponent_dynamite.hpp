#ifndef UE4SS_SDK_prop_wireComponent_dynamite_HPP
#define UE4SS_SDK_prop_wireComponent_dynamite_HPP

class Aprop_wireComponent_dynamite_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)

    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_dynamite(int32 EntryPoint);
}; // Size: 0x378

#endif
