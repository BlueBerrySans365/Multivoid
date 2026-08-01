#ifndef UE4SS_SDK_theEvil_HPP
#define UE4SS_SDK_theEvil_HPP

class AtheEvil_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UPostProcessComponent* PostProcess;                                         // 0x0370 (size: 0x8)
    float Time;                                                                       // 0x0378 (size: 0x4)
    bool Active;                                                                      // 0x037C (size: 0x1)
    bool Force;                                                                       // 0x037D (size: 0x1)

    void checkForEvil(bool& evil);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveTick(float DeltaSeconds);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_theEvil(int32 EntryPoint);
}; // Size: 0x37E

#endif
