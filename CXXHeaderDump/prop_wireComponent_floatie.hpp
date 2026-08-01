#ifndef UE4SS_SDK_prop_wireComponent_floatie_HPP
#define UE4SS_SDK_prop_wireComponent_floatie_HPP

class Aprop_wireComponent_floatie_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    float defaultFloat;                                                               // 0x0378 (size: 0x4)
    bool Active;                                                                      // 0x037C (size: 0x1)

    void updFloat();
    void ReceiveBeginPlay();
    void enterWater(class AwaterVolume_C* Water);
    void leaveWater(class AwaterVolume_C* Water);
    void wirePass(class Awire_C* wire);
    void ExecuteUbergraph_prop_wireComponent_floatie(int32 EntryPoint);
}; // Size: 0x37D

#endif
