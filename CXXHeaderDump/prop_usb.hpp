#ifndef UE4SS_SDK_prop_usb_HPP
#define UE4SS_SDK_prop_usb_HPP

class Aprop_usb_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    bool Super;                                                                       // 0x0370 (size: 0x1)

    void afterplay();
    void ExecuteUbergraph_prop_usb(int32 EntryPoint);
}; // Size: 0x371

#endif
