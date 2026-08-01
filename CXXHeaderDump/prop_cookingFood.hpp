#ifndef UE4SS_SDK_prop_cookingFood_HPP
#define UE4SS_SDK_prop_cookingFood_HPP

class Aprop_cookingFood_C : public Aprop_food_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x03D8 (size: 0x8)
    float cookProgress;                                                               // 0x03E0 (size: 0x4)
    float cookFinal;                                                                  // 0x03E4 (size: 0x4)
    TSubclassOf<class Aprop_food_C> cookedClass;                                      // 0x03E8 (size: 0x8)
    TArray<FName> Slices;                                                             // 0x03F0 (size: 0x10)
    FName cookedProp;                                                                 // 0x0400 (size: 0x8)

    void cooked();
    void asCookedFood(class Aprop_cookingFood_C*& cookedFood);
    void cookItem();
    void slice(bool clean);
    void ReceiveTick(float DeltaSeconds);
    void ExecuteUbergraph_prop_cookingFood(int32 EntryPoint);
}; // Size: 0x408

#endif
