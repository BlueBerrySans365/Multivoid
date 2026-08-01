#ifndef UE4SS_SDK_prop_pencil_HPP
#define UE4SS_SDK_prop_pencil_HPP

class Aprop_pencil_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    float life;                                                                       // 0x0370 (size: 0x4)
    FLinearColor Color;                                                               // 0x0374 (size: 0x10)
    float Size;                                                                       // 0x0384 (size: 0x4)

    void getData(Fstruct_save& Data);
    void lookAt(class AmainPlayer_C* Player, FHitResult Hit, bool& return, FString& Text, class UPrimitiveComponent*& boundObjectReplace, uint8& Number);
    void loadData(Fstruct_save Data, bool& return);
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void ExecuteUbergraph_prop_pencil(int32 EntryPoint);
}; // Size: 0x388

#endif
