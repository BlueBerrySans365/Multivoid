#ifndef UE4SS_SDK_prop_food_coffeeCup_HPP
#define UE4SS_SDK_prop_food_coffeeCup_HPP

class Aprop_food_coffeeCup_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    bool first;                                                                       // 0x03E0 (size: 0x1)

    void ReceiveTick(float DeltaSeconds);
    void eaten(class AmainPlayer_C* Player);
    void used();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_prop_food_coffeeCup(int32 EntryPoint);
}; // Size: 0x3E1

#endif
