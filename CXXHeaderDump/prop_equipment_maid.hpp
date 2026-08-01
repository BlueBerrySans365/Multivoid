#ifndef UE4SS_SDK_prop_equipment_maid_HPP
#define UE4SS_SDK_prop_equipment_maid_HPP

class Aprop_equipment_maid_C : public Aprop_equipment_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0378 (size: 0x8)

    void Init();
    void upd();
    void ReceiveBeginPlay();
    void intComs_settingsApplied(Fstruct_settings1 Settings);
    void ExecuteUbergraph_prop_equipment_maid(int32 EntryPoint);
}; // Size: 0x380

#endif
