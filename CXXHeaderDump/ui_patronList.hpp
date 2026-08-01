#ifndef UE4SS_SDK_ui_patronList_HPP
#define UE4SS_SDK_ui_patronList_HPP

class Uui_patronList_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* anchor_L;                                                     // 0x0268 (size: 0x8)
    class UCanvasPanel* anchor_R;                                                     // 0x0270 (size: 0x8)
    class USizeBox* SizeBox_L;                                                        // 0x0278 (size: 0x8)
    class USizeBox* SizeBox_R;                                                        // 0x0280 (size: 0x8)
    class URichTextBlock* text_Left;                                                  // 0x0288 (size: 0x8)
    class URichTextBlock* text_Right;                                                 // 0x0290 (size: 0x8)
    class URichTextBlock* text_size_l;                                                // 0x0298 (size: 0x8)
    class URichTextBlock* text_size_r;                                                // 0x02A0 (size: 0x8)
    FText text_tier3_2;                                                               // 0x02A8 (size: 0x18)
    FText text_tier3_1;                                                               // 0x02C0 (size: 0x18)
    FString text_3_2;                                                                 // 0x02D8 (size: 0x10)
    FString text_2_2;                                                                 // 0x02E8 (size: 0x10)
    FString txt;                                                                      // 0x02F8 (size: 0x10)
    float A;                                                                          // 0x0308 (size: 0x4)
    int32 lines_l;                                                                    // 0x030C (size: 0x4)
    FText text_boostyB;                                                               // 0x0310 (size: 0x18)
    FString text_bst;                                                                 // 0x0328 (size: 0x10)
    FString downloaded;                                                               // 0x0338 (size: 0x10)
    FString DW_tier32;                                                                // 0x0348 (size: 0x10)
    FString DW_tier31;                                                                // 0x0358 (size: 0x10)
    FString DW_tier22;                                                                // 0x0368 (size: 0x10)
    FString DW_tier21;                                                                // 0x0378 (size: 0x10)
    FString DW_tier12;                                                                // 0x0388 (size: 0x10)
    FString DW_tier11;                                                                // 0x0398 (size: 0x10)
    FString DW_boosty;                                                                // 0x03A8 (size: 0x10)
    TArray<FString> NewVar_0;                                                         // 0x03B8 (size: 0x10)
    FText text_tierPlat;                                                              // 0x03C8 (size: 0x18)
    FString DW_tierPlat;                                                              // 0x03E0 (size: 0x10)
    float B;                                                                          // 0x03F0 (size: 0x4)
    int32 lines_r;                                                                    // 0x03F4 (size: 0x4)

    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void generatePatronList();
    void ExecuteUbergraph_ui_patronList(int32 EntryPoint);
}; // Size: 0x3F8

#endif
