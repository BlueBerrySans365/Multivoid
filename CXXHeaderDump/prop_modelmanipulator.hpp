#ifndef UE4SS_SDK_prop_modelmanipulator_HPP
#define UE4SS_SDK_prop_modelmanipulator_HPP

class Aprop_modelmanipulator_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    FName prop;                                                                       // 0x0370 (size: 0x8)
    class UStaticMesh* Mesh;                                                          // 0x0378 (size: 0x8)

    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_modelmanipulator(int32 EntryPoint);
}; // Size: 0x380

#endif
