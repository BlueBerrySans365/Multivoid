#ifndef UE4SS_SDK_prop_holeDeviceCapsule_HPP
#define UE4SS_SDK_prop_holeDeviceCapsule_HPP

class Aprop_holeDeviceCapsule_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)

    void playerGrabbed_pre(class AmainPlayer_C* Player, FHitResult HitResult);
    void ExecuteUbergraph_prop_holeDeviceCapsule(int32 EntryPoint);
}; // Size: 0x370

#endif
