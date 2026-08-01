#ifndef UE4SS_SDK_prop_deadDeer_HPP
#define UE4SS_SDK_prop_deadDeer_HPP

class Aprop_deadDeer_C : public Aprop_food_poison_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03E8 (size: 0x8)
    class UAudioComponent* flies_Cue;                                                 // 0x03F0 (size: 0x8)
    class Ucomp_radarPoint_C* radarPoint;                                             // 0x03F8 (size: 0x8)
    class Adeer_ded_C* dedDeer;                                                       // 0x0400 (size: 0x8)

    void ReceiveBeginPlay();
    void D(class AActor* DestroyedActor);
    void eaten(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_deadDeer(int32 EntryPoint);
}; // Size: 0x408

#endif
