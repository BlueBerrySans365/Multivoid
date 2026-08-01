#ifndef UE4SS_SDK_prop_copperwire_HPP
#define UE4SS_SDK_prop_copperwire_HPP

class Aprop_copperwire_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    int32 uses;                                                                       // 0x0370 (size: 0x4)
    FString lookatText;                                                               // 0x0378 (size: 0x10)

    void loadData(Fstruct_save Data, bool& return);
    void getData(Fstruct_save& Data);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void craftDepleted(class Aprop_workbench_C* workbench);
    void ExecuteUbergraph_prop_copperwire(int32 EntryPoint);
}; // Size: 0x388

#endif
