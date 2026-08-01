#ifndef UE4SS_SDK_prop_stickers_HPP
#define UE4SS_SDK_prop_stickers_HPP

class Aprop_stickers_C : public Aprop_C
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0368 (size: 0x8)
    FString activeName;                                                               // 0x0370 (size: 0x10)
    int32 Index;                                                                      // 0x0380 (size: 0x4)
    FName buffKey;                                                                    // 0x0384 (size: 0x8)

    void getData(Fstruct_save& Data);
    void loadData(Fstruct_save Data, bool& return);
    void playerHandUse_RMB(class AmainPlayer_C* Player);
    void ReceiveBeginPlay();
    void playerHandUse_LMB(class AmainPlayer_C* Player);
    void intComs_texturePickerApply(class Uui_texturePicker_C* picker, class UTexture2D* Texture, int32 Index, FName pickedFilename);
    void ExecuteUbergraph_prop_stickers(int32 EntryPoint);
}; // Size: 0x38C

#endif
