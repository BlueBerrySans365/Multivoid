#ifndef UE4SS_SDK_prop_workbench_cuttingboard_HPP
#define UE4SS_SDK_prop_workbench_cuttingboard_HPP

class Aprop_workbench_cuttingboard_C : public Aprop_workbench_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x05B0 (size: 0x8)

    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_workbench_cuttingboard(int32 EntryPoint);
}; // Size: 0x5B8

#endif
