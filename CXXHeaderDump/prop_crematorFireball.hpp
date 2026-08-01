#ifndef UE4SS_SDK_prop_crematorFireball_HPP
#define UE4SS_SDK_prop_crematorFireball_HPP

class Aprop_crematorFireball_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    FVector Velocity;                                                                 // 0x0370 (size: 0xC)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_crematorFireball(int32 EntryPoint);
}; // Size: 0x37C

#endif
