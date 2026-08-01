#ifndef UE4SS_SDK_uicomp_shopOrderSlot_HPP
#define UE4SS_SDK_uicomp_shopOrderSlot_HPP

class Uuicomp_shopOrderSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* text_id;                                                        // 0x0268 (size: 0x8)
    class UTextBlock* Text_num;                                                       // 0x0270 (size: 0x8)
    class UTextBlock* Text_time;                                                      // 0x0278 (size: 0x8)
    class Uui_laptop_C* Owner;                                                        // 0x0280 (size: 0x8)
    float Time;                                                                       // 0x0288 (size: 0x4)
    int32 Index;                                                                      // 0x028C (size: 0x4)
    int32 Num;                                                                        // 0x0290 (size: 0x4)
    FString idcode;                                                                   // 0x0298 (size: 0x10)

    void getSearchName(FName& Name);
    void setCode();
    void upd();
    void updtime(float Time);
    void resume();
    void triggerRandom();
    void Construct();
    void setIndex(int32 Index);
    void ExecuteUbergraph_uicomp_shopOrderSlot(int32 EntryPoint);
}; // Size: 0x2A8

#endif
