#ifndef UE4SS_SDK_prop_scubaTank_HPP
#define UE4SS_SDK_prop_scubaTank_HPP

class Aprop_scubaTank_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float fuel;                                                                       // 0x0370 (size: 0x4)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_scubaTank(int32 EntryPoint);
}; // Size: 0x374

#endif
