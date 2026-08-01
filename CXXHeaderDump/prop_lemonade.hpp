#ifndef UE4SS_SDK_prop_lemonade_HPP
#define UE4SS_SDK_prop_lemonade_HPP

class Aprop_lemonade_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float Timer;                                                                      // 0x0370 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void fuse();
    void ExecuteUbergraph_prop_lemonade(int32 EntryPoint);
}; // Size: 0x374

#endif
