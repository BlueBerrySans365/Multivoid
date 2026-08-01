#ifndef UE4SS_SDK_prop_garbageGun_HPP
#define UE4SS_SDK_prop_garbageGun_HPP

class Aprop_garbageGun_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 Type;                                                                       // 0x0370 (size: 0x4)

    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_garbageGun(int32 EntryPoint);
}; // Size: 0x374

#endif
