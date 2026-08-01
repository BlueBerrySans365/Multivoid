#ifndef UE4SS_SDK_prop_puffballMature_HPP
#define UE4SS_SDK_prop_puffballMature_HPP

class Aprop_puffballMature_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    bool nuclear;                                                                     // 0x03E0 (size: 0x1)

    void toggleNuclear(bool nuclear);
    void ReceiveBeginPlay();
    void broken_fire();
    void broken();
    void attemptExplode();
    void bitten(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_puffballMature(int32 EntryPoint);
}; // Size: 0x3E1

#endif
