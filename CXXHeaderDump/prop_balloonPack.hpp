#ifndef UE4SS_SDK_prop_balloonPack_HPP
#define UE4SS_SDK_prop_balloonPack_HPP

class Aprop_balloonPack_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_balloonPack(int32 EntryPoint);
}; // Size: 0x370

#endif
