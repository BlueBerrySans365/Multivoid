#ifndef UE4SS_SDK_prop_arirDisint_HPP
#define UE4SS_SDK_prop_arirDisint_HPP

class Aprop_arirDisint_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void shoot();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_arirDisint(int32 EntryPoint);
}; // Size: 0x370

#endif
