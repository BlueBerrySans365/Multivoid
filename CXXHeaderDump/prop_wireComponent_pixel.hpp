#ifndef UE4SS_SDK_prop_wireComponent_pixel_HPP
#define UE4SS_SDK_prop_wireComponent_pixel_HPP

class Aprop_wireComponent_pixel_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class Awire_C* wire;                                                              // 0x0378 (size: 0x8)

    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_pixel(int32 EntryPoint);
}; // Size: 0x380

#endif
