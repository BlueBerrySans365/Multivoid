#ifndef UE4SS_SDK_prop_drive_debug0_HPP
#define UE4SS_SDK_prop_drive_debug0_HPP

class Aprop_drive_debug0_C : public Aprop_drive_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)
    int32 D;                                                                          // 0x05C8 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_drive_debug0(int32 EntryPoint);
}; // Size: 0x5CC

#endif
