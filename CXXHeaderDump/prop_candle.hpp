#ifndef UE4SS_SDK_prop_candle_HPP
#define UE4SS_SDK_prop_candle_HPP

class Aprop_candle_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 Type;                                                                       // 0x0370 (size: 0x4)

    void SetMesh();
    void Init();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_candle(int32 EntryPoint);
}; // Size: 0x374

#endif
