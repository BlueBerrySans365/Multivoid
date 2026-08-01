#ifndef UE4SS_SDK_prop_lamp_blinker_HPP
#define UE4SS_SDK_prop_lamp_blinker_HPP

class Aprop_lamp_blinker_C : public Aprop_lamp_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0380 (size: 0x8)
    bool wasActive;                                                                   // 0x0388 (size: 0x1)

    void ReceiveBeginPlay();
    void T();
    void ExecuteUbergraph_prop_lamp_blinker(int32 EntryPoint);
}; // Size: 0x389

#endif
