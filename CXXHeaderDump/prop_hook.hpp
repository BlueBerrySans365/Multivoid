#ifndef UE4SS_SDK_prop_hook_HPP
#define UE4SS_SDK_prop_hook_HPP

class Aprop_hook_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    bool single;                                                                      // 0x0370 (size: 0x1)
    TSubclassOf<class Ahook_C> hookActor;                                             // 0x0378 (size: 0x8)

    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_hook(int32 EntryPoint);
}; // Size: 0x380

#endif
