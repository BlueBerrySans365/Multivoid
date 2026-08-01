#ifndef UE4SS_SDK_prop_physgun_soft_HPP
#define UE4SS_SDK_prop_physgun_soft_HPP

class Aprop_physgun_soft_C : public Aprop_physgun_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0590 (size: 0x8)
    class UAudioComponent* loop;                                                      // 0x0598 (size: 0x8)
    class UParticleSystemComponent* charges;                                          // 0x05A0 (size: 0x8)
    float Time;                                                                       // 0x05A8 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void grab();
    void Release();
    void ReceiveTick(float DeltaSeconds);
    void microwaveElec();
    void ExecuteUbergraph_prop_physgun_soft(int32 EntryPoint);
}; // Size: 0x5AC

#endif
