#ifndef UE4SS_SDK_prop_mirror1_HPP
#define UE4SS_SDK_prop_mirror1_HPP

class Aprop_mirror1_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UChildActorComponent* M;                                                    // 0x0370 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_mirror1(int32 EntryPoint);
}; // Size: 0x378

#endif
