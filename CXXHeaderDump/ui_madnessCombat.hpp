#ifndef UE4SS_SDK_ui_madnessCombat_HPP
#define UE4SS_SDK_ui_madnessCombat_HPP

class Uui_madnessCombat_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UCanvasPanel* CanvasPanel_1;                                                // 0x0268 (size: 0x8)
    class UTextBlock* text_count;                                                     // 0x0270 (size: 0x8)
    class UTextBlock* text_count_1;                                                   // 0x0278 (size: 0x8)
    float A1;                                                                         // 0x0280 (size: 0x4)
    bool tickEnable;                                                                  // 0x0284 (size: 0x1)
    int32 Mode;                                                                       // 0x0288 (size: 0x4)
    float a2;                                                                         // 0x028C (size: 0x4)
    bool m2;                                                                          // 0x0290 (size: 0x1)
    int32 Count;                                                                      // 0x0294 (size: 0x4)
    class AmadnessCombatMaster_C* Master;                                             // 0x0298 (size: 0x8)

    void addCount();
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    void ExecuteUbergraph_ui_madnessCombat(int32 EntryPoint);
}; // Size: 0x2A0

#endif
