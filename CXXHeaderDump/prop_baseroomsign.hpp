#ifndef UE4SS_SDK_prop_baseroomsign_HPP
#define UE4SS_SDK_prop_baseroomsign_HPP

class Aprop_baseroomsign_C : public Aprop_wallAttachable_pryable_C
{
    class UChildActorComponent* pryingCrowbar3;                                       // 0x03E8 (size: 0x8)
    class UChildActorComponent* pryingCrowbar2;                                       // 0x03F0 (size: 0x8)
    class UChildActorComponent* pryingCrowbar1;                                       // 0x03F8 (size: 0x8)
    int32 Type;                                                                       // 0x0400 (size: 0x4)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void Init();
}; // Size: 0x404

#endif
