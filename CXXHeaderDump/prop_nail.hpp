#ifndef UE4SS_SDK_prop_nail_HPP
#define UE4SS_SDK_prop_nail_HPP

class Aprop_nail_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 Type;                                                                       // 0x0370 (size: 0x4)
    TSubclassOf<class Anail_C> nailClass;                                             // 0x0378 (size: 0x8)

    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_nail(int32 EntryPoint);
}; // Size: 0x380

#endif
