#ifndef UE4SS_SDK_ui_objectActionButton_HPP
#define UE4SS_SDK_ui_objectActionButton_HPP

class Uui_objectActionButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* img_hovertext;                                                      // 0x0268 (size: 0x8)
    class UTextBlock* TextBlock_39;                                                   // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_name;                                                 // 0x0278 (size: 0x8)
    class Uui_UI_C* Owner;                                                            // 0x0280 (size: 0x8)
    int32 ID;                                                                         // 0x0288 (size: 0x4)
    FString Name;                                                                     // 0x0290 (size: 0x10)
    FText Overlay;                                                                    // 0x02A0 (size: 0x18)
    FText finalName;                                                                  // 0x02B8 (size: 0x18)

    void upd();
    void Construct();
    void ExecuteUbergraph_ui_objectActionButton(int32 EntryPoint);
}; // Size: 0x2D0

#endif
