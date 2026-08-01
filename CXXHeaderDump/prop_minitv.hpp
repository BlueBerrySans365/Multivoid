#ifndef UE4SS_SDK_prop_minitv_HPP
#define UE4SS_SDK_prop_minitv_HPP

class Aprop_minitv_C : public Aprop_tv2_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x04B0 (size: 0x8)

    void cordPlugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void cordUnplugged(class Acord_C* cord, class AcordSocket_C* Socket);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_minitv(int32 EntryPoint);
}; // Size: 0x4B8

#endif
