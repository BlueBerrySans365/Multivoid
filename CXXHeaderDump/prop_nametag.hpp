#ifndef UE4SS_SDK_prop_nametag_HPP
#define UE4SS_SDK_prop_nametag_HPP

class Aprop_nametag_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    FName Tag;                                                                        // 0x0370 (size: 0x8)

    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_nametag(int32 EntryPoint);
}; // Size: 0x378

#endif
