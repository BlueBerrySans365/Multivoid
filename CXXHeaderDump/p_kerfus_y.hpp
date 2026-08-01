#ifndef UE4SS_SDK_p_kerfus_y_HPP
#define UE4SS_SDK_p_kerfus_y_HPP

class Ap_kerfus_y_C : public Ap_kerfus_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04F8 (size: 0x8)

    void ReceiveBeginPlay();
    void ExecuteUbergraph_p_kerfus_y(int32 EntryPoint);
}; // Size: 0x500

#endif
