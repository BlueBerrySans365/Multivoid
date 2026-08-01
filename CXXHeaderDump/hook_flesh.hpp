#ifndef UE4SS_SDK_hook_flesh_HPP
#define UE4SS_SDK_hook_flesh_HPP

class Ahook_flesh_C : public Ahook_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03A8 (size: 0x8)

    void hook_a();
    void ReceiveBeginPlay();
    void checkCheese();
    void ExecuteUbergraph_hook_flesh(int32 EntryPoint);
}; // Size: 0x3B0

#endif
