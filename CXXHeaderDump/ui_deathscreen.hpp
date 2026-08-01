#ifndef UE4SS_SDK_ui_deathscreen_HPP
#define UE4SS_SDK_ui_deathscreen_HPP

class Uui_deathscreen_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* CanvasPanel_159;                                              // 0x0268 (size: 0x8)
    class UImage* Image;                                                              // 0x0270 (size: 0x8)
    class UImage* Image_46;                                                           // 0x0278 (size: 0x8)
    class UImage* Image_127;                                                          // 0x0280 (size: 0x8)
    class UTextBlock* TextBlock_27;                                                   // 0x0288 (size: 0x8)
    int32 Size;                                                                       // 0x0290 (size: 0x4)
    bool red;                                                                         // 0x0294 (size: 0x1)

    void SetSize();
    void Construct();
    void PreConstruct(bool IsDesignTime);
    void ExecuteUbergraph_ui_deathscreen(int32 EntryPoint);
}; // Size: 0x295

#endif
