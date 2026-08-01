#ifndef UE4SS_SDK_prop_growinator_HPP
#define UE4SS_SDK_prop_growinator_HPP

class Aprop_growinator_C : public Aprop_inator_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)

    void fired(FHitResult Hit);
    void ExecuteUbergraph_prop_growinator(int32 EntryPoint);
}; // Size: 0x378

#endif
