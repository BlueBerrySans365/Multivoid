#ifndef UE4SS_SDK_ui_videobrowser_HPP
#define UE4SS_SDK_ui_videobrowser_HPP

class Uui_videobrowser_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image_32;                                                           // 0x0268 (size: 0x8)
    class UWebBrowser* WebBrowser_14;                                                 // 0x0270 (size: 0x8)

    void ExecuteUbergraph_ui_videobrowser(int32 EntryPoint);
}; // Size: 0x278

#endif
