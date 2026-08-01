#ifndef UE4SS_SDK_ui_spawnmenuToolButton_HPP
#define UE4SS_SDK_ui_spawnmenuToolButton_HPP

class Uui_spawnmenuToolButton_C : public UUserWidget
{
    FPointerToUberGraphFrame UberGraphFrame;                                          // 0x0260 (size: 0x8)
    class UButton* Button_60;                                                         // 0x0268 (size: 0x8)
    class UImage* Image_39;                                                           // 0x0270 (size: 0x8)
    class UTextBlock* TextBlock_31;                                                   // 0x0278 (size: 0x8)
    Fstruct_toolData Data;                                                            // 0x0280 (size: 0x48)
    class Uui_spawnmenu_C* Owner;                                                     // 0x02C8 (size: 0x8)
    int32 toolObjectRef;                                                              // 0x02D0 (size: 0x4)

    void PreConstruct(bool IsDesignTime);
    void Construct();
    void BndEvt__ui_spawnmenuToolButton_Button_60_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    void ExecuteUbergraph_ui_spawnmenuToolButton(int32 EntryPoint);
}; // Size: 0x2D4

#endif
