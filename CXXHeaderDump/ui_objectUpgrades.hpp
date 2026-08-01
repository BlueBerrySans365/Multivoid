#ifndef UE4SS_SDK_ui_objectUpgrades_HPP
#define UE4SS_SDK_ui_objectUpgrades_HPP

class Uui_objectUpgrades_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UImage* Image;                                                              // 0x0268 (size: 0x8)
    class UImage* Image_60;                                                           // 0x0270 (size: 0x8)
    class UImage* image_border;                                                       // 0x0278 (size: 0x8)
    class UImage* img_object;                                                         // 0x0280 (size: 0x8)
    class UScrollBox* ScrollBox_1;                                                    // 0x0288 (size: 0x8)
    class UTextBlock* text_name;                                                      // 0x0290 (size: 0x8)
    TArray<FName> Items;                                                              // 0x0298 (size: 0x10)
    class AmainGamemode_C* GameMode;                                                  // 0x02A8 (size: 0x8)
    TArray<class Uuicomp_objectUpgradeSlot_C*> Slots;                                 // 0x02B0 (size: 0x10)
    class AActor* Actor;                                                              // 0x02C0 (size: 0x8)

    void genList(TArray<FName>& Items);
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    void quit();
    void ExecuteUbergraph_ui_objectUpgrades(int32 EntryPoint);
}; // Size: 0x2C8

#endif
