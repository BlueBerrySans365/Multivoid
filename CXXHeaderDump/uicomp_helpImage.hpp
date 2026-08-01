#ifndef UE4SS_SDK_uicomp_helpImage_HPP
#define UE4SS_SDK_uicomp_helpImage_HPP

class Uuicomp_helpImage_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_102;                                                          // 0x0268 (size: 0x8)
    class UTexture2D* Texture;                                                        // 0x0270 (size: 0x8)
    float Size;                                                                       // 0x0278 (size: 0x4)
    float SizeX;                                                                      // 0x027C (size: 0x4)
    uint8 Alignment;                                                                  // 0x0280 (size: 0x1)
    float ImagePadding;                                                               // 0x0284 (size: 0x4)

    void setImagePadding(float ImagePadding);
    void SetAlignment(uint8 Alignment);
    void updateData(class UTexture2D* Texture, float Size);
    void upd();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_uicomp_helpImage(int32 EntryPoint);
}; // Size: 0x288

#endif
