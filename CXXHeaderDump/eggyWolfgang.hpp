#ifndef UE4SS_SDK_eggyWolfgang_HPP
#define UE4SS_SDK_eggyWolfgang_HPP

class AeggyWolfgang_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)
    float A;                                                                          // 0x0250 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_eggyWolfgang(int32 EntryPoint);
}; // Size: 0x254

#endif
