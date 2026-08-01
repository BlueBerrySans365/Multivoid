#ifndef UE4SS_SDK_prop_hose_grab_HPP
#define UE4SS_SDK_prop_hose_grab_HPP

class Aprop_hose_grab_C : public Aprop_hose_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0388 (size: 0x8)

    void Init();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_hose_grab(int32 EntryPoint);
}; // Size: 0x390

#endif
