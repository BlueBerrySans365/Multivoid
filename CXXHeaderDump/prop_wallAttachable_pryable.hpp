#ifndef UE4SS_SDK_prop_wallAttachable_pryable_HPP
#define UE4SS_SDK_prop_wallAttachable_pryable_HPP

class Aprop_wallAttachable_pryable_C : public Aprop_wallAttachable_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class UChildActorComponent* pryingCrowbar;                                        // 0x03E0 (size: 0x8)

    void crowbarOpen(class ApryingCrowbar_C* pryingCrowbar);
    void ExecuteUbergraph_prop_wallAttachable_pryable(int32 EntryPoint);
}; // Size: 0x3E8

#endif
