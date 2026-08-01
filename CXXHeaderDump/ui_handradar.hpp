#ifndef UE4SS_SDK_ui_handradar_HPP
#define UE4SS_SDK_ui_handradar_HPP

class Uui_handradar_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image;                                                              // 0x0268 (size: 0x8)
    class UImage* Image_1;                                                            // 0x0270 (size: 0x8)
    class UImage* Image_2;                                                            // 0x0278 (size: 0x8)
    class UImage* Image_3;                                                            // 0x0280 (size: 0x8)
    class UImage* Image_4;                                                            // 0x0288 (size: 0x8)
    class UImage* Image_5;                                                            // 0x0290 (size: 0x8)
    class UImage* Image_6;                                                            // 0x0298 (size: 0x8)
    class UImage* Image_7;                                                            // 0x02A0 (size: 0x8)
    class UImage* Image_8;                                                            // 0x02A8 (size: 0x8)
    class UImage* Image_9;                                                            // 0x02B0 (size: 0x8)
    class UImage* Image_37;                                                           // 0x02B8 (size: 0x8)
    class UImage* Image_68;                                                           // 0x02C0 (size: 0x8)
    class UImage* Image_130;                                                          // 0x02C8 (size: 0x8)
    class UImage* image_ping;                                                         // 0x02D0 (size: 0x8)
    class UCanvasPanel* pingCanvas;                                                   // 0x02D8 (size: 0x8)
    class UCanvasPanel* Pivot;                                                        // 0x02E0 (size: 0x8)
    class UTextBlock* text_posdist;                                                   // 0x02E8 (size: 0x8)
    class UTextBlock* text_posh;                                                      // 0x02F0 (size: 0x8)
    class UTextBlock* text_posx;                                                      // 0x02F8 (size: 0x8)
    class UTextBlock* text_posy;                                                      // 0x0300 (size: 0x8)
    class UTextBlock* text_posz;                                                      // 0x0308 (size: 0x8)
    class UMaterialInstanceDynamic* dynmatPing;                                       // 0x0310 (size: 0x8)
    float Angle;                                                                      // 0x0318 (size: 0x4)
    TArray<class AActor*> scanned;                                                    // 0x0320 (size: 0x10)
    float Owner;                                                                      // 0x0330 (size: 0x4)
    float A;                                                                          // 0x0334 (size: 0x4)
    class AmainGamemode_C* GameMode;                                                  // 0x0338 (size: 0x8)

    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ui_handradar(int32 EntryPoint);
}; // Size: 0x340

#endif
