#ifndef UE4SS_SDK_prop_serverBreaker_HPP
#define UE4SS_SDK_prop_serverBreaker_HPP

class Aprop_serverBreaker_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_serverBreaker(int32 EntryPoint);
}; // Size: 0x370

#endif
