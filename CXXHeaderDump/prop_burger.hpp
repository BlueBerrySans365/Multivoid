#ifndef UE4SS_SDK_prop_burger_HPP
#define UE4SS_SDK_prop_burger_HPP

class Aprop_burger_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    bool used_0;                                                                      // 0x0370 (size: 0x1)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void playerGrabbed(class AmainPlayer_C* Player, FHitResult HitResult);
    void ExecuteUbergraph_prop_burger(int32 EntryPoint);
}; // Size: 0x371

#endif
