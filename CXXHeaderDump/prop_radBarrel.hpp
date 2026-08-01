#ifndef UE4SS_SDK_prop_radBarrel_HPP
#define UE4SS_SDK_prop_radBarrel_HPP

class Aprop_radBarrel_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* droploc;                                               // 0x0370 (size: 0x8)
    class Ucomp_radiation_C* radComp;                                                 // 0x0378 (size: 0x8)

    void broken();
    void broken_fire();
    void ExecuteUbergraph_prop_radBarrel(int32 EntryPoint);
}; // Size: 0x380

#endif
