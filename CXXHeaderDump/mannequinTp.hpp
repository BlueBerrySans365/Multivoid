#ifndef UE4SS_SDK_mannequinTp_HPP
#define UE4SS_SDK_mannequinTp_HPP

class AmannequinTp_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)

    void checkRender(TArray<class Aprop_mannequin_C*>& InputPin, bool& canTp);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_mannequinTp(int32 EntryPoint);
}; // Size: 0x250

#endif
