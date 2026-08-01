#ifndef UE4SS_SDK_prop_snack_sushi_HPP
#define UE4SS_SDK_prop_snack_sushi_HPP

class Aprop_snack_sushi_C : public Aprop_snack_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0390 (size: 0x8)

    void upd();
    void UserConstructionScript();
    void ExecuteUbergraph_prop_snack_sushi(int32 EntryPoint);
}; // Size: 0x398

#endif
