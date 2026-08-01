#ifndef UE4SS_SDK_burningDebris_HPP
#define UE4SS_SDK_burningDebris_HPP

class AburningDebris_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float fuel;                                                                       // 0x0370 (size: 0x4)
    float Force;                                                                      // 0x0374 (size: 0x4)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_burningDebris(int32 EntryPoint);
}; // Size: 0x378

#endif
