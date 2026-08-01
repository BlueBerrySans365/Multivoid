#ifndef UE4SS_SDK_nisse_soul_HPP
#define UE4SS_SDK_nisse_soul_HPP

class Anisse_soul_C : public Aactor_save_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0248 (size: 0x8)

    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_nisse_soul(int32 EntryPoint);
}; // Size: 0x250

#endif
