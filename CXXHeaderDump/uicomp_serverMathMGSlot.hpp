#ifndef UE4SS_SDK_uicomp_serverMathMGSlot_HPP
#define UE4SS_SDK_uicomp_serverMathMGSlot_HPP

class Uuicomp_serverMathMGSlot_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UTextBlock* answ;                                                           // 0x0268 (size: 0x8)
    class UHorizontalBox* HorizontalBox_nums;                                         // 0x0270 (size: 0x8)
    class UImage* Image;                                                              // 0x0278 (size: 0x8)
    class UImage* Image_59;                                                           // 0x0280 (size: 0x8)
    class UTextBlock* text_prob;                                                      // 0x0288 (size: 0x8)
    TArray<class Uui_serverMinigameNumber_C*> Slots;                                  // 0x0290 (size: 0x10)
    TArray<FString> prob;                                                             // 0x02A0 (size: 0x10)
    int32 sol;                                                                        // 0x02B0 (size: 0x4)
    class Uui_serverMinigame_C* Owner;                                                // 0x02B8 (size: 0x8)
    int32 Num;                                                                        // 0x02C0 (size: 0x4)

    void makeProb(int32& Output_Get);
    void SetActive(int32 Index);
    void Construct();
    void ExecuteUbergraph_uicomp_serverMathMGSlot(int32 EntryPoint);
}; // Size: 0x2C4

#endif
