#ifndef UE4SS_SDK_prop_argy_HPP
#define UE4SS_SDK_prop_argy_HPP

class Aprop_argy_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_0;                                         // 0x0370 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_1;                                         // 0x0378 (size: 0x8)

    void setMats();
    void Init();
    void set();
    void UserConstructionScript();
    void intComs_gamemodeBeginPlay();
    void intComs_propRenderer_finishProps();
    void ExecuteUbergraph_prop_argy(int32 EntryPoint);
}; // Size: 0x380

#endif
