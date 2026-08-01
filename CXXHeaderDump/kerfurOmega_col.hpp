#ifndef UE4SS_SDK_kerfurOmega_col_HPP
#define UE4SS_SDK_kerfurOmega_col_HPP

class AkerfurOmega_col_C : public AkerfurOmega_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x09F0 (size: 0x8)
    FVector HSV;                                                                      // 0x09F8 (size: 0xC)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void dropKerfurProp();
    void SetStyle(bool contrcut);
    void UserConstructionScript();
    void ReceiveBeginPlay();
    void ExecuteUbergraph_kerfurOmega_col(int32 EntryPoint);
}; // Size: 0xA04

#endif
