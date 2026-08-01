#ifndef UE4SS_SDK_growingPlant_pine_HPP
#define UE4SS_SDK_growingPlant_pine_HPP

class AgrowingPlant_pine_C : public AgrowingPlant_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    int32 logAmount;                                                                  // 0x0378 (size: 0x4)

    void broken();
    void ExecuteUbergraph_growingPlant_pine(int32 EntryPoint);
}; // Size: 0x37C

#endif
