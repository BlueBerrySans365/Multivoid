#ifndef UE4SS_SDK_prop_wire_HPP
#define UE4SS_SDK_prop_wire_HPP

class Aprop_wire_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    class Awire_C* wire;                                                              // 0x0370 (size: 0x8)

    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void playerHandRelease_LMB(class AmainPlayer_C* Player);
    void Dest(class AActor* DestroyedActor);
    void ExecuteUbergraph_prop_wire(int32 EntryPoint);
}; // Size: 0x378

#endif
