#ifndef UE4SS_SDK_prop_argw_HPP
#define UE4SS_SDK_prop_argw_HPP

class Aprop_argw_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPointLightComponent* PointLight;                                           // 0x0370 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_0;                                         // 0x0378 (size: 0x8)
    class UMaterialInstanceDynamic* dynmat_1;                                         // 0x0380 (size: 0x8)

    void setMats();
    void Init();
    void UserConstructionScript();
    void ReceiveTick(float DeltaSeconds);
    void intComs_gamemodeBeginPlay();
    void intComs_propRenderer_finishProps();
    void ExecuteUbergraph_prop_argw(int32 EntryPoint);
}; // Size: 0x388

#endif
