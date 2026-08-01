#ifndef UE4SS_SDK_hook_Child_HPP
#define UE4SS_SDK_hook_Child_HPP

class Ahook_Child_C : public Ahook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)
    class AActor* manual_A;                                                           // 0x03B0 (size: 0x8)
    class AActor* manual_B;                                                           // 0x03B8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_hook_Child(int32 EntryPoint);
}; // Size: 0x3C0

#endif
