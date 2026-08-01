#ifndef UE4SS_SDK_prop_broomspawner_HPP
#define UE4SS_SDK_prop_broomspawner_HPP

class Aprop_broomspawner_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_broomspawner(int32 EntryPoint);
}; // Size: 0x370

#endif
