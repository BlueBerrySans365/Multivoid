#ifndef UE4SS_SDK_prop_wireComponent_laser_HPP
#define UE4SS_SDK_prop_wireComponent_laser_HPP

class Aprop_wireComponent_laser_C : public Aprop_wireComponent_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0370 (size: 0x8)
    class UChildActorComponent* laser;                                                // 0x0378 (size: 0x8)
    class AlaserEmitter_C* Emitter;                                                   // 0x0380 (size: 0x8)
    float Length;                                                                     // 0x0388 (size: 0x4)

    void wirePass(class Awire_C* wire);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_wireComponent_laser(int32 EntryPoint);
}; // Size: 0x38C

#endif
