#ifndef UE4SS_SDK_prop_easteregg_bunnyOwn_HPP
#define UE4SS_SDK_prop_easteregg_bunnyOwn_HPP

class Aprop_easteregg_bunnyOwn_C : public Aprop_easteregg_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03F0 (size: 0x8)

    void eaten(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_easteregg_bunnyOwn(int32 EntryPoint);
}; // Size: 0x3F8

#endif
