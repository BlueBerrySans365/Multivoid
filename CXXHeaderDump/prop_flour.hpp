#ifndef UE4SS_SDK_prop_flour_HPP
#define UE4SS_SDK_prop_flour_HPP

class Aprop_flour_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class UBillboardComponent* Spawn;                                                 // 0x0370 (size: 0x8)

    void broken();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_flour(int32 EntryPoint);
}; // Size: 0x378

#endif
