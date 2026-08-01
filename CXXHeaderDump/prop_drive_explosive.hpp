#ifndef UE4SS_SDK_prop_drive_explosive_HPP
#define UE4SS_SDK_prop_drive_explosive_HPP

class Aprop_drive_explosive_C : public Aprop_drive_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05C0 (size: 0x8)

    void imported();
    void exported();
    void physDestroyed();
    void physPreDestroyed();
    void broken();
    void ExecuteUbergraph_prop_drive_explosive(int32 EntryPoint);
}; // Size: 0x5C8

#endif
