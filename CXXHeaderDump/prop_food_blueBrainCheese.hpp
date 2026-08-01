#ifndef UE4SS_SDK_prop_food_blueBrainCheese_HPP
#define UE4SS_SDK_prop_food_blueBrainCheese_HPP

class Aprop_food_blueBrainCheese_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    class USphereComponent* Sphere;                                                   // 0x03E0 (size: 0x8)

    void slice(bool clean);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_food_blueBrainCheese(int32 EntryPoint);
}; // Size: 0x3E8

#endif
