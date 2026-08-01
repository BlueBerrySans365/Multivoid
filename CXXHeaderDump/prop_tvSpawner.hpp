#ifndef UE4SS_SDK_prop_tvSpawner_HPP
#define UE4SS_SDK_prop_tvSpawner_HPP

class Aprop_tvSpawner_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_tvSpawner(int32 EntryPoint);
}; // Size: 0x370

#endif
