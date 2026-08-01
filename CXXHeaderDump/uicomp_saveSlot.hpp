#ifndef UE4SS_SDK_uicomp_saveSlot_HPP
#define UE4SS_SDK_uicomp_saveSlot_HPP

class Uuicomp_saveSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* button_select;                                                     // 0x0268 (size: 0x8)
    class UCanvasPanel* canvas_sub;                                                   // 0x0270 (size: 0x8)
    class UImage* image_background;                                                   // 0x0278 (size: 0x8)
    class UImage* Image_img;                                                          // 0x0280 (size: 0x8)
    class UImage* img_mid;                                                            // 0x0288 (size: 0x8)
    class UTextBlock* text_day;                                                       // 0x0290 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x0298 (size: 0x8)
    class UTextBlock* txt_date;                                                       // 0x02A0 (size: 0x8)
    class UTextBlock* txt_size;                                                       // 0x02A8 (size: 0x8)
    class UTextBlock* txt_ver;                                                        // 0x02B0 (size: 0x8)
    class Uui_saveSlots_C* Parent;                                                    // 0x02B8 (size: 0x8)
    FString SlotName;                                                                 // 0x02C0 (size: 0x10)
    int32 Days;                                                                       // 0x02D0 (size: 0x4)
    int32 ID;                                                                         // 0x02D4 (size: 0x4)
    FString ver;                                                                      // 0x02D8 (size: 0x10)
    class UsaveSlot_C* save;                                                          // 0x02E8 (size: 0x8)
    int64 Size;                                                                       // 0x02F0 (size: 0x8)
    bool subsave;                                                                     // 0x02F8 (size: 0x1)
    FString folder;                                                                   // 0x0300 (size: 0x10)
    FString FilePath;                                                                 // 0x0310 (size: 0x10)
    bool Branch;                                                                      // 0x0320 (size: 0x1)
    FDateTime Date;                                                                   // 0x0328 (size: 0x8)

    void checkLast(bool last);
    void resetSlot();
    void deleteSlot();
    void upd(int32 ID);
    void BndEvt__button_select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void Construct();
    void ExecuteUbergraph_uicomp_saveSlot(int32 EntryPoint);
}; // Size: 0x330

#endif
