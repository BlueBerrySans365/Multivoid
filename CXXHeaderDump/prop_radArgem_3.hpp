#ifndef UE4SS_SDK_prop_radArgem_3_HPP
#define UE4SS_SDK_prop_radArgem_3_HPP

class Aprop_radArgem_3_C : public Aprop_radArgem_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0398 (size: 0x8)
    bool B;                                                                           // 0x03A0 (size: 0x1)

    void set();
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void ReceiveBeginPlay();
    void ht();
    void intComs_gamemodeBeginPlay();
    void ExecuteUbergraph_prop_radArgem_3(int32 EntryPoint);
}; // Size: 0x3A1

#endif
