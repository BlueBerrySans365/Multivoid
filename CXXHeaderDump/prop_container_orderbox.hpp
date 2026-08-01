#ifndef UE4SS_SDK_prop_container_orderbox_HPP
#define UE4SS_SDK_prop_container_orderbox_HPP

class Aprop_container_orderbox_C : public Aprop_container_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0430 (size: 0x8)

    void isNotSawable(bool& return);
    void broken();
    void player_use(class AmainPlayer_C* Player, FHitResult Hit);
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_container_orderbox(int32 EntryPoint);
}; // Size: 0x438

#endif
