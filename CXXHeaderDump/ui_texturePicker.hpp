#ifndef UE4SS_SDK_ui_texturePicker_HPP
#define UE4SS_SDK_ui_texturePicker_HPP

class Uui_texturePicker_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UUniformGridPanel* Grid;                                                    // 0x0268 (size: 0x8)
    class UImage* Image_51;                                                           // 0x0270 (size: 0x8)
    TArray<class UTexture2D*> texArray;                                               // 0x0278 (size: 0x10)
    TArray<class Uuicomp_texturePickerButton_C*> texSlots;                            // 0x0288 (size: 0x10)
    class UTexture2D* pickedTex;                                                      // 0x0298 (size: 0x8)
    int32 pickedIndex;                                                                // 0x02A0 (size: 0x4)
    FName pickedFilename;                                                             // 0x02A4 (size: 0x8)
    TArray<FName> texFilenames;                                                       // 0x02B0 (size: 0x10)

    void unfocus();
    void pick(class UTexture2D* tex, FName pickedFilename);
    void loadArray(TArray<class UTexture2D*>& textures, TArray<FName>& FileNames);
    void OnFocusLost(FFocusEvent InFocusEvent);
    void ExecuteUbergraph_ui_texturePicker(int32 EntryPoint);
}; // Size: 0x2C0

#endif
