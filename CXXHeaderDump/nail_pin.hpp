#ifndef UE4SS_SDK_nail_pin_HPP
#define UE4SS_SDK_nail_pin_HPP

class Anail_pin_C : public Anail_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)

    void detached();
    void ExecuteUbergraph_nail_pin(int32 EntryPoint);
}; // Size: 0x390

#endif
