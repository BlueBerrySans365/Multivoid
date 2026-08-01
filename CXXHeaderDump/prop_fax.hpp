#ifndef UE4SS_SDK_prop_fax_HPP
#define UE4SS_SDK_prop_fax_HPP

class Aprop_fax_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UStaticMeshComponent* printOut;                                             // 0x0370 (size: 0x8)
    float Alpha;                                                                      // 0x0378 (size: 0x4)
    int32 printPhoto;                                                                 // 0x037C (size: 0x4)
    bool printing;                                                                    // 0x0380 (size: 0x1)
    int32 Original Index;                                                             // 0x0384 (size: 0x4)

    void setPrintLoc();
    void print(int32 printPhoto, int32 Original Index);
    void ExecuteUbergraph_prop_fax(int32 EntryPoint);
}; // Size: 0x388

#endif
