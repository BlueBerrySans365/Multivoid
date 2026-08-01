#ifndef UE4SS_SDK_prop_binocular_HPP
#define UE4SS_SDK_prop_binocular_HPP

class Aprop_binocular_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 zoomLevel;                                                                  // 0x0370 (size: 0x4)

    void updPP(class AmainPlayer_C* self2);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerUnequip(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_binocular(int32 EntryPoint);
}; // Size: 0x374

#endif
