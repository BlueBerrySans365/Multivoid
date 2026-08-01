#ifndef UE4SS_SDK_prop_snack_milk_HPP
#define UE4SS_SDK_prop_snack_milk_HPP

class Aprop_snack_milk_C : public Aprop_snack_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)

    void snackEaten();
    void ExecuteUbergraph_prop_snack_milk(int32 EntryPoint);
}; // Size: 0x398

#endif
