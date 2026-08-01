#ifndef UE4SS_SDK_ui_hovertext_spatial_HPP
#define UE4SS_SDK_ui_hovertext_spatial_HPP

class Uui_hovertext_spatial_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* canvas_root;                                                  // 0x0268 (size: 0x8)
    class UCanvasPanel* CanvasPanel_0;                                                // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_41;                                                   // 0x0278 (size: 0x8)
    class AActor* Owner;                                                              // 0x0280 (size: 0x8)
    FText Text;                                                                       // 0x0288 (size: 0x18)
    FVector Offset;                                                                   // 0x02A0 (size: 0xC)
    Fui_hovertext_spatial_CFinishedTyping finishedTyping;                             // 0x02B0 (size: 0x10)
    void finishedTyping(bool skipped, bool forceFinish);
    FVector pointing_location;                                                        // 0x02C0 (size: 0xC)
    Fui_hovertext_spatial_CStartedTyping startedTyping;                               // 0x02D0 (size: 0x10)
    void startedTyping();
    Fstruct_tutorialHelpText tutorialData;                                            // 0x02E0 (size: 0x58)
    class AActor* actorPoint;                                                         // 0x0338 (size: 0x8)
    class UPrimitiveComponent* componentPoint;                                        // 0x0340 (size: 0x8)
    FVector2D Size;                                                                   // 0x0348 (size: 0x8)
    bool showText;                                                                    // 0x0350 (size: 0x1)

    void getPointLocation(FVector& Location, float& Size);
    void Construct();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void SetSize();
    void ExecuteUbergraph_ui_hovertext_spatial(int32 EntryPoint);
    void startedTyping__DelegateSignature();
    void finishedTyping__DelegateSignature(bool skipped, bool forceFinish);
}; // Size: 0x351

#endif
